113. Write a C++ program find sum of diagonals of the matrics
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter the elements of the matrix:" << endl;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    cout << "Sum of primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;
    cout << "Total sum of both diagonals: " << primaryDiagonalSum + secondaryDiagonalSum << endl;

    return 0;
}
112. Write a C++ program to multiply 2 matrics.
    #include <bits/stdc++.h>
using namespace std;
#define R1 2 
#define C1 2 
#define R2 2 
#define C2 3
void mulMat(int mat1[][C1], int mat2[][C2])
{
	int rslt[R1][C2];
	cout << "Multiplication of given two matrices is:\n";
	for (int i = 0; i < R1; i++) {
		for (int j = 0; j < C2; j++) {
			rslt[i][j] = 0;
			for (int k = 0; k < R2; k++) {
				rslt[i][j] += mat1[i][k] * mat2[k][j];
			}
			cout << rslt[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	int mat1[R1][C1] = { { 4,5 }, { 3,4 } };
	int mat2[R2][C2] = { { 1, 1, 1 }, { 2, 2, 2 } };
	if (C1 != R2) {
		cout << "The number of columns in Matrix-1 must "
				"be equal to the number of rows in "
				"Matrix-2"
			<< endl;
		cout << "Please update MACROs according to your "
				"array dimension in #define section"
			<< endl;
		exit(EXIT_FAILURE);
	}
	mulMat(mat1, mat2);
	return 0;
}
111. Write a C++ program to add 2 matrics.
#include <bits/stdc++.h>
using namespace std;
#define N 4
void add(int A[][N], int B[][N], int C[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
}
int main()
{
    int A[N][N] = { { 1, 1, 1, 1 },
                    { 2, 2, 2, 2 },
                    { 3, 3, 3, 3 },
                    { 4, 4, 4, 4 } };

    int B[N][N] = { { 1, 1, 1, 1 },
                    { 2, 2, 2, 2 },
                    { 3, 3, 3, 3 },
                    { 4, 4, 4, 4 } };
    int C[N][N];
    int i, j;
    add(A, B, C);
    cout << "Result matrix is " << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}
110. Write a C++ program to create a dynamic two-dimensional array using pointers and display its values.
	#include <iostream>
using namespace std;

int** create2DArray(int rows, int cols) {
    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }
    return array;
}

void initialize2DArray(int** array, int rows, int cols) {
    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = value++;
        }
    }
}

void display2DArray(int** array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void freeMemory(int** array, int rows) {
    for (int i = 0; i < rows; ++i) {
        free(array[i]); 
    }
    free(array);
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int** myArray = create2DArray(rows, cols);
    initialize2DArray(myArray, rows, cols);
    
    cout << "The 2D array is:" << endl;
    display2DArray(myArray, rows, cols);
    
    freeMemory(myArray, rows); 
    return 0;
}

109. Write a C++ program to create a dynamic array using pointers and display its values.
	#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int* array = new int[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    cout << "The values in the array are:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

108. Write a C++ program to merge two arrays into a single array.
#include <iostream>

using namespace std;

int main() {
    int size1, size2;

    cout << "Enter the number of elements for the first array: ";
    cin >> size1;

    int* array1 = new int[size1];

    cout << "Enter the elements of the first array:" << endl;
    for (int i = 0; i < size1; ++i) {
        cin >> array1[i];
    }

    cout << "Enter the number of elements for the second array: ";
    cin >> size2;

    int* array2 = new int[size2];

    cout << "Enter the elements of the second array:" << endl;
    for (int i = 0; i < size2; ++i) {
        cin >> array2[i];
    }

    int* mergedArray = new int[size1 + size2];

    for (int i = 0; i < size1; ++i) {
        mergedArray[i] = array1[i];
    }

    for (int i = 0; i < size2; ++i) {
        mergedArray[size1 + i] = array2[i];
    }

    cout << "The merged array is:" << endl;
    for (int i = 0; i < size1 + size2; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
107. Write a C++ program to find the number of occurrences of a value in an array.
	#include <iostream>

using namespace std;

int main() {
    int size, valueToFind, count = 0;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int* array = new int[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    cout << "Enter the value to find: ";
    cin >> valueToFind;

    for (int i = 0; i < size; ++i) {
        if (array[i] == valueToFind) {
            ++count;
        }
    }

    cout << "The value " << valueToFind << " occurs " << count << " times in the array." << endl;

 
    return 0;
}

106. Write a C++ program to find the second largest element in an array.
	#include <iostream>
#include <limits>

using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    if (size < 2) {
        cout << "Array must contain at least two elements." << endl;
        return 1;
    }

    int* array = new int[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int largest = numeric_limits<int>::min();
    int secondLargest = numeric_limits<int>::min();

    for (int i = 0; i < size; ++i) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest && array[i] < largest) {
            secondLargest = array[i];
        }
    }

    if (secondLargest == numeric_limits<int>::min()) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }
    return 0;
}

105. Write a C++ program to find the average of elements in an array.
	#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double average = sum / size;
    cout << "The average of the elements in the array is: " << average << endl;

    return 0;
}
104. Write a C++ program to find the sum of elements in an array.
	#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "The sum of the elements in the array is: " << sum << endl;

    return 0;
}
103. Write a C++ program to delete an element from an array at a specific position.
	#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int position;
    cout << "Enter the position of the element  (0-based indexing): ";
    cin >> position;

    if (position < 0 || position >= size) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;

        cout << "Array after : ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
102. Write a C++ program to insert an element into an array at a specific position.
	#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size + 1];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int position, element;
    cout << "Enter the position to insert the element (0-based indexing): ";
    cin >> position;
    cout << "Enter the element to insert: ";
    cin >> element;

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;

    cout << "Array after insertion: ";
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
101. Write a C++ program to reverse the elements of an array.
	#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - 1 - i]);
    }
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
33.
Write a program to print the following pattern using nested for loops: 
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
	    #include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
34.
Write a program to print the following pattern using nested for loops:
    1
   121
  12321
 1234321
123454321
	#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
         cout << " ";
        }
        for(int k = 1; k <= i; k++) {
         cout << k;
        }
        for(int j = i - 1; j > 0; j--) {
         cout << j;
        }
        cout << endl;
    }
    return 0;
}
35.
Write a program to print the following pattern using nested for loops: 
    1
   232
  34543
 4567654
567898765
#include <iostream>

int main() {
    int height = 5;

    for (int i = 1; i <= height; ++i) {
        for (int j = height; j > i; --j) {
            std::cout << " ";
        }

        for (int k = i; k < i + i; ++k) {
            std::cout << k;
        }

        for (int l = i + i - 2; l >= i; --l) {
            std::cout << l;
        }

        std::cout << std::endl;
    }

    return 0;
}
31.
Write a program to print the following pattern using nested for loops:

*
**
***
****
*****
	#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "The Enter Number: "<<endl;
  cin >> n;
  for (int i=1; i<=n; i++)
  {
    for (int j=1; j<=i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
32.Write a program to print the following pattern using nested for loops:

1
22
333
4444
55555
	#include <iostream>
using namespace std;
int main() {
    int n;
  cout << "The enter number: " <<endl;
  cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
           cout << i ;
        }
        cout << endl;
    }

    return 0;
}
29. Write a program to read in an integer and determine if it is a narcissistic number or not.
	#include <iostream>
#include <cmath>
using namespace std;

int sumOfPowers(int num, int power) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, power);
        num /= 10;
    }
    return sum;
}
int main() {
    int num, originalNum, numDigits = 0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        ++numDigits;
    }
    int sum = sumOfPowers(originalNum, numDigits);

    if (sum == originalNum) {
        cout << originalNum << " is a narcissistic number." << endl;
    } else {
        cout << originalNum << " is not a narcissistic number." << endl;
    }
    return 0;
}
30. Write a program to read in an integer and determine if it is a abundant number or not.
	#include <iostream>
using namespace std;

int sumOfProperDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num <= 0) {
        cout << num << " is not an abundant number." << endl;
        return 0;
    }

    int sumDivisors = sumOfProperDivisors(num);

    if (sumDivisors > num) {
        cout << num << " is an abundant number." << endl;
    } else {
        cout << num << " is not an abundant number." << endl;
    }

    return 0;
}

27. Write a program to read in an integer and determine if it is a neon number or not.
	#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num < 0) {
        cout << num << " is not a neon number." << endl;
        return 0;
    }
    int square = num * num;
    int sumDigits = sumOfDigits(square);
    if (sumDigits == num) {
        cout << num << " is a neon number." << endl;
    } else {
        cout << num << " is not a neon number." << endl;
    }
    return 0;
}
28. Write a program to read in an integer and determine if it is a buzz number or not.
	#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num % 7 == 0 || num % 10 == 7) {
        cout << num << " is a Buzz number." << endl;
    } else {
        cout << num << " is not a Buzz number." << endl;
    }

    return 0;
}

24. Write a program to read in an integer and determine if it is a strong number or not.
	#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num, originalNum, remainder, sum = 0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    while (num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }
    if (sum == originalNum) {
        cout << originalNum << " is a Strong number." << endl;
    } else {
        cout << originalNum << " is not a Strong number." << endl;
    }
    return 0;
}
25. Write a program to read in an integer and determine if it is a happy number or not.
	#include <iostream>
#include <unordered_set>
using namespace std;

int sumOfSquaresOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num <= 0) {
        cout << num << " is not a happy number." << endl;
        return 0;
    }
    unordered_set<int> seenNumbers;
    int currentNum = num;
    while (currentNum != 1 && seenNumbers.find(currentNum) == seenNumbers.end()) {
        seenNumbers.insert(currentNum);
        currentNum = sumOfSquaresOfDigits(currentNum);
    }
    if (currentNum == 1) {
        cout << num << " is a happy number." << endl;
    } else {
        cout << num << " is not a happy number." << endl;
    }
    return 0;
}
26. Write a program to read in an integer and determine if it is a Harshad number or not.
	#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, originalNum;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    if (sum != 0 && originalNum % sum == 0) {
        cout << originalNum << " is a Harshad number." << endl;
    } else {
        cout << originalNum << " is not a Harshad number." << endl;
    }

    return 0;
}

22. Write a program to read in an integer and determine if it is an Armstrong number or not.
	#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, sum = 0, digits = 0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++digits;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }
    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}
23. Write a program to read in an integer and determine if it is a perfect number or not.
	#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    if (num <= 0) {
        cout << num << " is not a perfect number." << endl;
    } else {
        for (int i = 1; i <= num / 2; ++i) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num) {
            cout << num << " is a perfect number." << endl;
        } else {
            cout << num << " is not a perfect number." << endl;
        }
    }

    return 0;
}

21. Write a program to read in two integers and compute their greatest common divisor using a do-while loop.
	#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    a = abs(a);
    b = abs(b);

    if (a == 0 && b == 0) {
        cout << "GCD is not defined for both numbers being zero." << endl;
    } else {
        int gcd;
        int x = a;
        int y = b;

        do {
            if (x > y) {
                x = x - y;
            } else {
                y = y - x;
            }
        } while (x != 0 && y != 0);

        gcd = (x == 0) ? y : x;

        cout << "The GCD of " << a << " and " << b << " is " << gcd << endl;
    }

    return 0;
}

19. Write a program to read in an integer and print the sum of all its digits using a while loop.
	#include <iostream>
using namespace std;
int main() {
    int num,sum=0;
    cout << "Enter an integer: ";
    cin >> num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "The sum of the digits is " << sum << endl;
    return 0;
}
