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
20. Write a program to read in an integer and determine if it is a palindrome or not using a while loop.
	#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}

17. Write a program to read in an integer and determine if it is a prime number or not using a for loop.
	#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
    } else {
        bool isPrime = true;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " is a prime number." << endl;
        } else {
            cout << num << " is not a prime number." << endl;
        }
    }

    return 0;
}

18. Write a program to read in an integer and print the Fibonacci series up to that number using a for loop.
	#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Enter an integer as the limit for the Fibonacci series: ";
    cin >> limit;

    if (limit < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        int a = 0, b = 1;
        cout << "Fibonacci series up to " << limit << ": ";
        cout << a;
        if (limit > 0) {
            cout << " " << b;
        }

        for (int next = a + b; next <= limit; next = a + b) {
            cout << " " << next;
            a = b;
            b = next;
        }

        cout << endl;
    }

    return 0;
}

15. Write a program to read in an integer and print the multiplication table for that number using a for loop.
	#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Multiplication table for " << number << " is:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }
    return 0;
}
16. Write a program to read in an integer and print the factorial of that number using a for loop.
	#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        unsigned long long factorial = 1;
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "The factorial of " << num << " is " << factorial << endl;
    }

    return 0;
}

14. Write a program to print the numbers from 1 to 10 using a for loop.
	
#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Sum of the first " << N << " natural numbers is: " << sum << endl;
    return 0;
}
13.Write a program to read in an integer and determine if it is divisible by 3 or not using the ternary conditional operator.
	#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    string result = (num % 3 == 0) ? "is divisible by 3." : "is not divisible by 3.";
    cout << num << " " << result << endl;

    return 0;
}

12. Write a program to read in two integers and determine if they are equal or not using the ternary conditional operator.
	#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;
    string result = (a == b) ? "The integers are equal." : "The integers are not equal.";
    cout << result << endl;
    return 0;
}
11. Write a program to read in three integers and determine which one is the maximum using the ternary conditional operator.
	#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;
    cout << "Enter the third integer: ";
    cin >> c;
    int max = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
    cout << "The maximum value is: " << max << endl;
    return 0;
}
9. Write a program to read in two integers and swap their values using the bitwise XOR operator.
	#include <iostream>
using namespace std;
void swap(int& a, int& b) {
    if (a != b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
}
int main() {
    int x, y;
    cout << "Enter first integer: ";
    cin >> x;
    cout << "Enter second integer: ";
    cin >> y;
    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
10. Write a program to read in a floating-point number and round it to the nearest integer using the floor and ceil functions.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    double floorValue = floor(num);
    double ceilValue = ceil(num);
    double roundedValue;
    if ((num - floorValue) < (ceilValue - num)) {
        roundedValue = floorValue;
    } else {
        roundedValue = ceilValue;
    }
    cout << "The number rounded to the nearest integer is: " << roundedValue << endl;
    return 0;
}
8. Write a program to read in two integers and use the conditional operator to determine which number is greater.
#include <iostream>

using namespace std;

int main() {
    int a=5, b=10;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;
    cout << "The greater number is: " 
         << (a > b ? a : b) 
         << endl;
    return 0;
}
6. Write a program to read in an integer and determine if it is positive, negative, or zero.
	#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num > 0) {
        cout << num << " The number is positive." << endl;
    } else { if (num < 0) {
        cout << num << " The number is negative." << endl;
    } else {
        cout << num << " The number is zero." << endl;
    }
    return 0;
}
}
7. Write a program to read in a character and determine if it is a vowel or a consonant.
	#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        char lower_ch = (ch >= 'A' && ch <= 'Z') ? ch + 'a' - 'A' : ch;
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << ch << " is not an alphabetic character." << endl;
    }

    return 0;
}
4. Write a program to read in two floating-point numbers and perform the following operations on them: addition, subtraction, multiplication, and division.
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout << "Enter the first floating-point number: ";
    cin >> num1;
    cout << "Enter the second floating-point number: ";
    cin >> num2;

    float addition = num1 + num2;
    float subtraction = num1 - num2;
    float multiplication = num1 * num2;
    string division = (num2 != 0) ? to_string(num1 / num2) : "undefined";

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;

    return 0;
}
5. Write a program to read in an integer and determine if it is even or odd.
	#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}
3. Write a program to read in two integers and determine if they are equal or not.
	#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "The numbers are equal." << endl;
    } else {
        cout << "The numbers are not equal." << endl;
    }

    return 0;
}
1. Write a program to read in two integers and perform the following operations on them: addition, subtraction, multiplication, division, and modulo.
	#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    double division = (num2 != 0) ? static_cast<double>(num1) / num2 : 0;
    int modulo = (num2 != 0) ? num1 % num2 : 0;

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    if (num2 != 0) {
        cout << "Division: " << division << endl;
        cout << "Modulo: " << modulo << endl;
    } else {
        cout << "Division: undefined (division by zero)" << endl;
        cout << "Modulo: undefined (division by zero)" << endl;
    }

    return 0;
}
2. Write a program to read in three integers and compute the average of the three numbers. Use the assignment operator to store the result in a variable.
	#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;

    double average = (num1 + num2 + num3) / 3.0;

    cout << "The average of the three numbers is: " << average << endl;

    return 0;
}
42. Write a function to check if a given string is a palindrome or not.
	#include <iostream>
#include <string>
#include <cctype> 

bool isPalindrome(const std::string& str) {
    std::string normalizedStr;
    
   
    for (char ch : str) {
        if (std::isalnum(ch)) {
            normalizedStr += std::tolower(ch);
        }
    }

   
    std::string reversedStr = std::string(normalizedStr.rbegin(), normalizedStr.rend());
    return normalizedStr == reversedStr;
}

int main() {
    std::string inputString;
    
 
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);
 
    if (isPalindrome(inputString)) {
        std::cout << "\"" << inputString << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << inputString << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
43. Write a function to calculate the area of a circle given its radius.
#include <iostream>
#include <cmath>


double calculateAreaOfCircle(double radius) {
    if (radius < 0) {
        std::cerr << "Radius cannot be negative." << std::endl;
        return -1; 
    }
    return M_PI * radius * radius; 
}

int main() {
    double radius;

   
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = calculateAreaOfCircle(radius);


    if (area >= 0) {
        std::cout << "The area of the circle with radius " << radius << " is: " << area << std::endl;
    }

    return 0;
}
44. Write a function to convert a given temperature from Celsius to Fahrenheit.
	#include <iostream>
double celsiusToFahrenheit(double celsius) {
    return (9.0 / 5.0) * celsius + 32; 
}
int main() {
    double celsius;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    double fahrenheit = celsiusToFahrenheit(celsius);
    std::cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << std::endl;

    return 0;
}
40. Write a function to count the number of words in a given string.
#include <iostream>
#include <sstream> 
#include <string>
int countWords(const std::string& str) {
    std::istringstream stream(str);
    std::string word;
    int count = 0;
    while (stream >> word) {
        count++;
    }
    return count;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);
    int wordCount = countWords(inputString);
    std::cout << "The number of words in the given string is: " << wordCount << std::endl;
    return 0;
}
41. Write a function to find the minimum and maximum elements in a given array.
	#include <iostream>
#include <limits> 


void findMinMax(int arr[], int size, int& min, int& max) {
   
    min = arr[0];
    max = arr[0];

   
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int arr[size];
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();
    findMinMax(arr, size, min, max);
    std::cout << "Minimum element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;

    return 0;
}
39. Write a function to reverse a given string.
	#include <iostream>
#include <string>


std::string reverseString(const std::string& str) {
    std::string reversedStr; 

    
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i]; 
    }

    return reversedStr; 
}

int main() {
    std::string inputString;

  
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

  
    std::string reversedString = reverseString(inputString);

   
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}
37. Write a function to determine if a given integer is a prime number or not.
	#include <iostream>


bool isPrime(int number) {
    
    if (number <= 1) {
        return false; 
    }

    
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int inputNumber;

    std::cout << "Enter an integer: ";
    std::cin >> inputNumber;

    
    if (isPrime(inputNumber)) {
        std::cout << inputNumber << " is a prime number." << std::endl;
    } else {
        std::cout << inputNumber << " is not a prime number." << std::endl;
    }

    return 0;
}
38. Write a function to determine the GCD (greatest common divisor) of two given integers.
#include <iostream>


int gcd(int a, int b) {
    
    a = std::abs(a);
    b = std::abs(b);

  
    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp; 
    }
    
    return a; 
}
36. Write a function to compute the factorial of a given integer.
	#include <iostream>

unsigned long long factorial(int n) {
    if (n < 0) {
        std::cerr << "Factorial is not defined for negative numbers." << std::endl;
        return 0; 
    }

    unsigned long long result = 1; 

    for (int i = 1; i <= n; i++) {
        result *= i; 
    }

    return result; 
}

int main() {
    int inputNumber;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> inputNumber;

    
    unsigned long long result = factorial(inputNumber);

    
    if (inputNumber >= 0) {
        std::cout << "The factorial of " << inputNumber << " is: " << result << std::endl;
    }

    return 0;
}


int main() {
    int num1, num2;

    
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

   
    int result = gcd(num1, num2);

   
    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}
261.Power Function: Implement a function to calculate the power of a number raised to an exponent.
	#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1.0;
    bool isNegativeExponent = (exponent < 0);
    
    if (isNegativeExponent) {
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return isNegativeExponent ? (1.0 / result) : result;
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);

    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}
260.Greatest Common Divisor (GCD): Create a function to find the GCD of two numbers using the Euclidean algorithm.
Use Inline function
#include <iostream>
using namespace std;

inline int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);

    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
274.Number Pattern Generator: Create a function to generate different number patterns, such as a pyramid, diamond, or Pascal's triangle.
#include <iostream>
using namespace std;

void printRightAngleTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void printPyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << k << " ";
        }
        cout << endl;
    }
}

void printDiamond(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << k << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << k << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, n;

    cout << "Choose a pattern to generate:\n";
    cout << "1. Right-Angle Triangle\n";
    cout << "2. Pyramid\n";
    cout << "3. Diamond\n";
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    cout << "Enter the number of rows: ";
    cin >> n;

    switch (choice) {
        case 1:
            printRightAngleTriangle(n);
            break;
        case 2:
            printPyramid(n);
            break;
        case 3:
            printDiamond(n);
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
266.Sum of Array Elements: Create a function to calculate the sum of elements in an array.
	#include <iostream>
using namespace std;

 
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; 
    }
    return sum; 
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; 
    }

    int totalSum = sumOfArray(arr, size); 
    cout << "The sum of the array elements is: " << totalSum << endl;

    return 0;
}
264.String Reversal: Design a function that reverses a given string.
	#include <iostream>
#include <string>
using namespace std;


string reverseString(string str) {
    string reversedStr;
    
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    
    return reversedStr;
}

int main() {
    string inputString;
    81. Write a C++ program to create a class for a rectangle with a constructor and a destructor.
	    #include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:

    Rectangle(double l, double w) : length(l), width(w) {
        std::cout << "Rectangle created with length " << length << " and width " << width << std::endl;
    }

    ~Rectangle() {
        std::cout << "Rectangle destroyed with length " << length << " and width " << width << std::endl;
    }

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }

    void displayInfo() const {
        std::cout << "Rectangle Info: Length = " << length << ", Width = " << width 
                  << ", Area = " << area() << ", Perimeter = " << perimeter() << std::endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    rect.displayInfo();

    return 0;
}
    cout << "Enter a string: ";
    getline(cin, inputString);
    
    string result = reverseString(inputString);
    
    cout << "Original string: " << inputString << endl;
    cout << "Reversed string: " << result << endl;
    
    return 0;
}
78. Write a C++ program to overload a function to find the absolute value of an integer number and the absolute value of a floating-point number separately.
	#include<iostream>
using namespace std;
int absolute(int num)
{
  return (num<0)? -num:num;
}
double absolute(double num)
{
  return(num<0.0)? -num:num;
}
int main()
{
  int numb1=-10;
  double numb2=-20.5;
  cout<<"absolute value of integer:\n"<<numb1<<absolute(numb1)<<endl;
  cout<<"absolute value of floating:\n"<<numb2<<absolute(numb2)<<endl;
  return 0;
}
77. Write a C++ program to overload a function to calculate the power of an integer number and the power of a floating-point number separately.
	#include<iostream>
#include<cmath>
using namespace std;
int power(int base,int exponent)
{
  int result=1,i;
  for(i=0;i<exponent;i++)
  {
    result *=base;
  }
  return result;
}
double power(double base,double exponent)
{
  return pow(base,exponent);
}
int main()
{
int intBase=2,intExponent=3;
double doubleBase=2.5,doubleExponent=3.5;
  cout<<"power of integer:\n"<<intBase<<","<<intExponent<<":"<<power(intBase,intExponent)<<endl;
  cout<<"power of double:\n"<<doubleBase<<","<<doubleExponent<<":"<<power(doubleBase,doubleExponent)<<endl;
  return 0;
}
76. Write a C++ program to overload a function to sort an integer array and a double array separately.
	#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap(double& a, double& b)
{
    double temp = a;
    a = b;
    b = temp;
}
void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
void sortArray(double arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
int intArr[] = {5, 2, 8, 3, 1};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    double doubleArr[] = {5.5, 2.2, 8.8, 3.3, 1.1};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    cout << "Original integer array: ";
    printArray(intArr, intSize);
    sortArray(intArr, intSize);
    cout << "Sorted integer array: ";
    printArray(intArr, intSize);
    cout << "Original double array: ";
    printArray(doubleArr, doubleSize);
    sortArray(doubleArr, doubleSize);
    cout << "Sorted double array: ";
    printArray(doubleArr, doubleSize);
    return 0;
}
75. Write a C++ program to overload a function to find the factorial of an integer number and the factorial of a floating-point number separately.
	#include <iostream>
using namespace std;
int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}
double factorial(double num)
{
    int intPart = static_cast<int>(num);  
    double result = 1;
    for (int i = 1; i <= intPart; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int intNum = 5;
    double doubleNum = 4.8;
    cout << "Factorial of " << intNum << " (int) is: " << factorial(intNum) << endl;
    cout << "Factorial of " << doubleNum << " (double) is: " << factorial(doubleNum) << endl;
    return 0;
}
74. Write a C++ program to overload a function to print the contents of an integer array, a double array, and a character array separately.
	#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Integer array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(double arr[], int size)
{
    cout << "Double array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(char arr[], int size)
{
    cout << "Character array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    int charSize = sizeof(charArray) / sizeof(charArray[0]);
    printArray(intArray, intSize);
    printArray(doubleArray, doubleSize);
    printArray(charArray, charSize);
    return 0;
}
73. Write a C++ program to overload a function to calculate the sum of two matrices and two arrays separately.
	#include <iostream>
using namespace std;
void addMatrices(int a[3][3], int b[3][3], int result[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
void addArrays(int a[], int b[], int result[], int size)
{
    for (int i = 0; i < size; i++)
    {
        result[i] = a[i] + b[i];
    }
}
void printMatrix(int matrix[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int matrix1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int matrix2[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int matrixResult[3][3];
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {5, 4, 3, 2, 1};
    int arrayResult[5];
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    addMatrices(matrix1, matrix2, matrixResult, 3, 3);
    addArrays(array1, array2, arrayResult, arraySize);
    cout << "Sum of matrices:" << endl;
    printMatrix(matrixResult, 3, 3);
    cout << "Sum of arrays:" << endl;
    printArray(arrayResult, arraySize);
    return 0;
}
72. Write a C++ program to overload a function to calculate the area of a square, a rectangle, and a circle separately.
	#include <iostream>
#include <cmath>
using namespace std;
double area(double side)
{
    return side * side;
}
double area(double length, double width)
{
    return length * width;
}
double area(double radius, bool isCircle)
{
    if (isCircle) {
        return M_PI * radius * radius; 
    }
    return 0.0;
}
int main() 
{
    double side = 5.0;
    double length = 6.0;
    double width = 4.0;
    double radius = 3.0;
    cout << "Area of the square: " << area(side) << endl;
    cout << "Area of the rectangle: " << area(length, width) << endl;
    cout << "Area of the circle: " << area(radius, true) << endl;
    return 0;
}
71. Write a C++ program to overload a function to concatenate two strings and two character arrays separately.
	#include <iostream>
#include <cstring> 
using namespace std;
string concatenate(const string &str1, const string &str2)
{
    return str1 + str2;
}
void concatenate(char *result, const char *arr1, const char *arr2)
{
    strcpy(result, arr1);
    strcat(result, arr2);
}
int main()
{
    string str1 = "Hello, ";
    string str2 = "World!";
    cout << "Concatenated string: "<< concatenate(str1, str2) << endl;
    const int SIZE = 100; 
    char arr1[] = "Hello, ";
    char arr2[] = "World!";
    char result[SIZE];
    concatenate(result, arr1, arr2);
    cout << "Concatenated character arrays: " << result << endl;
    return 0;
}
70. Write a C++ program to overload a function to find the maximum value from two integer numbers, two floating-point numbers, and two characters separately.
	#include <iostream>
using namespace std;
int findMax(int a, int b)
{
    return (a > b) ? a : b;
}
double findMax(double a, double b)
{
    return (a > b) ? a : b;
}
char findMax(char a, char b)
{
    return (a > b) ? a : b;
}
int main()
{
    int int1 = 5, int2 = 10;
    double double1 = 3.14, double2 = 2.71;
    char char1 = 'a', char2 = 'z';
    cout << "Maximum of " << int1 << " and " << int2 << " is: " << findMax(int1, int2) << endl;
    cout << "Maximum of " << double1 << " and " << double2 << " is: " << findMax(double1, double2) << endl;
    cout << "Maximum of '" << char1 << "' and '" << char2 << "' is: '" << findMax(char1, char2) << "'" << endl;
    return 0;
}
68. Write a C++ program to overload the += operator to add two objects of a user-defined class.
	#include <iostream>
using namespace std;
class Vector {
private:
    int x, y;
public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}
    Vector& operator+=(const Vector& other) {
        x += other.x;
        y += other.y;
        return *this; 
    }
    void display() const
    {
        cout << "Vector(" << x << ", " << y << ")" << endl;
    }
};
int main()
{
    Vector v1(1, 2);  
    Vector v2(3, 4); 
    cout << "Before addition:" << endl;
    v1.display();
    v2.display(); 
    v1 += v2;
    cout << "After addition:" << endl;
    v1.display(); 
    return 0;
}
69. Write a C++ program to overload a function to add two integer numbers and two floating-point numbers separately.
	#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}
int main()
{
    int int1 = 10, int2 = 20;
    double double1 = 5.5, double2 = 4.5;
    cout << "Sum of integers: " << add(int1, int2) << endl;
    cout << "Sum of floating-point numbers: " << add(double1, double2) << endl;
    return 0;
}
67. Write a C++ program to overload the - operator to subtract two complex numbers.
	#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    void display() const {
        std::cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
    }
};
int main() {
    Complex c1(4.5, 2.3);
    Complex c2(1.2, 0.8);
    Complex result = c1 - c2;
    cout << "Result of subtraction: ";
    result.display();
    return 0;
}
66. Write a C++ program to overload the () operator to call a function with arguments.
#include <iostream>
using namespace std;
class Functor
{
public:
    void operator()(int a, int b) const
    {
        cout << "Sum: " << a + b << endl;
    }
};
int main()
{
    Functor func;
    func(10, 20);
    return 0;
}
64. Write a C++ program to overload the [] operator to access the elements of an array using an index.
#include <iostream>
#include <stdexcept>

class MyArray {
private:
    int* data;
    size_t size;

public:
    MyArray(size_t s) : size(s) {
        data = new int[size];
        for (size_t i = 0; i < size; ++i) {
            data[i] = 0;
        }
    }

    ~MyArray() {
        delete[] data;
    }

    int& operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    const int& operator[](size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    size_t getSize() const {
        return size;
    }
};

int main() {
    try {
        MyArray arr(5);

        for (size_t i = 0; i < arr.getSize(); ++i) {
            arr[i] = static_cast<int>(i * i);
        }

        for (size_t i = 0; i < arr.getSize(); ++i) {
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        }

        std::cout << "arr[10] = " << arr[10] << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
65. Write a C++ program to overload the * operator to multiply two matrices.
#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(r, std::vector<int>(c, 0));
    }

    void setElement(int r, int c, int value) {
        data[r][c] = value;
    }

    Matrix operator*(const Matrix& other) {
        if (cols != other.rows) {
            throw std::invalid_argument("Matrix dimensions do not match for multiplication.");
        }
        
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    void display() const {
        for (const auto& row : data) {
            for (const auto& elem : row) {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix A(2, 3);
    A.setElement(0, 0, 1);
    A.setElement(0, 1, 2);
    A.setElement(0, 2, 3);
    A.setElement(1, 0, 4);
    A.setElement(1, 1, 5);
    A.setElement(1, 2, 6);

    Matrix B(3, 2);
    B.setElement(0, 0, 7);
    B.setElement(0, 1, 8);
    B.setElement(1, 0, 9);
    B.setElement(1, 1, 10);
    B.setElement(2, 0, 11);
    B.setElement(2, 1, 12);

    Matrix C = A * B;

    std::cout << "Matrix A:" << std::endl;
    A.display();
    std::cout << "Matrix B:" << std::endl;
    B.display();
    std::cout << "Matrix C (A * B):" << std::endl;
    C.display();

    return 0;
}
63. Write a C++ program to overload the == operator to compare two objects of a user-defined class.
	#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& personName, int personAge) : name(personName), age(personAge) {}

    bool operator==(const Person& other) const {
        return (name == other.name) && (age == other.age);
    }

    friend std::ostream& operator<<(std::ostream& os, const Person& person);
};

std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << "Name: " << person.name << ", Age: " << person.age;
    return os;
}

int main() {
    std::string name1, name2;
    int age1, age2;

    std::cout << "Enter details for Person 1:" << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, name1);
    std::cout << "Age: ";
    std::cin >> age1;
    std::cin.ignore(); 

    std::cout << "Enter details for Person 2:" << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, name2);
    std::cout << "Age: ";
    std::cin >> age2;

    Person p1(name1, age1);
    Person p2(name2, age2);

    std::cout << "Person 1: " << p1 << std::endl;
    std::cout << "Person 2: " << p2 << std::endl;

    if (p1 == p2) {
        std::cout << "p1 is equal to p2." << std::endl;
    } else {
        std::cout << "p1 is not equal to p2." << std::endl;
    }

    return 0;
}
62. Write a C++ program to overload the << operator to print the contents of a user-defined class.
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& personName, int personAge) : name(personName), age(personAge) {}

    friend std::ostream& operator<<(std::ostream& os, const Person& person);
};

std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << "Name: " << person.name << ", Age: " << person.age;
    return os;
}

int main() {
    Person p1("Alice", 25);
    Person p2("Bob", 30);

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;

    return 0;
}
60. Write a C++ program to overload the + operator to add two complex numbers.
	#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    Complex c3 = c1 + c2; 

    std::cout << "Complex Number 1: ";
    c1.display();
    
    std::cout << "Complex Number 2: ";
    c2.display();
    
    std::cout << "Sum: ";
    c3.display();

    return 0;
}
61. Write a C++ program to overload the ++ operator to increment a variable.
	#include <iostream>

class Counter {
private:
    int value;

public:
    Counter(int initialValue = 0) : value(initialValue) {}

    Counter& operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    void display() const {
        std::cout << "Counter Value: " << value << std::endl;
    }
};

int main() {
    Counter counter(5);

    std::cout << "Initial ";
    counter.display();

    ++counter;
    std::cout << "After prefix increment: ";
    counter.display();

    counter++;
    std::cout << "After postfix increment: ";
    counter.display();

    return 0;
}
96. Write a C++ program to demonstrate the use of the throw keyword to throw an exception.
	#include <iostream>
#include <stdexcept>

void divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Error: Division by zero is not allowed.");
    }
    std::cout << "Result: " << numerator / denominator << std::endl;
}

int main() {
    try {
        int num1 = 10;
        int num2 = 0;

       
        divide(num1, num2);
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Exiting program." << std::endl;
    return 0;
}
