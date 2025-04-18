#include <iostream>
using namespace std;

int main()
{
    // Declare variables for matrix dimensions and calculations
    int row, column, row_index, sum = 0, col_index;

    // Get matrix dimensions from user
    cout << "Enter Row size :";
    cin >> row;
    cout << "Enter Column size :";
    cin >> column;

    // Declare 2D array with user-specified dimensions
    int arr[row][column];

    // Populate the matrix with user input
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column ; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // ROW OPERATIONS
    cout << "Enter row number :";
    cin >> row_index;
    cout << "Elements of row : ";
    
    // Calculate row sum
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            if(i == row_index) {
                cout << arr[i][j] << " ";
                sum += arr[i][j];
            }
        }
    }
    cout << endl << "The sum of row : " << sum << endl;

    // COLUMN OPERATIONS
    sum = 0;  // Reset sum for column calculation
    cout << "Enter column number :";
    cin >> col_index;
    cout << "Elements of column : ";
    
    // Calculate column sum
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            if(j == col_index) {
                cout << arr[i][j] << " ";
                sum += arr[i][j];
            }
        }
    }
    cout << endl << "The sum of column : " << sum;

    return 0;
}
