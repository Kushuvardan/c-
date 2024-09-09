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
