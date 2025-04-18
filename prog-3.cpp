#include <iostream>
using namespace std;

int main()
{
    // Matrix dimension declaration
    int size;  // Stores N for NxN matrix

    // Get matrix size from user
    cout << "Enter Row & column size :";
    cin >> size;

    // Declare square matrix using VLAs (Note: Not standard C++)
    int arr[size][size];  // N x N matrix storage

    // Matrix input phase
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size ; j++) {
            // Display element position prompt
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];  // Store user input
        }
    }

    // Original matrix display
    cout << "The matrix array : " << endl;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size ; j++) {
            cout << arr[i][j] << " ";  // Print row elements
        }
        cout << endl;  // Newline after each row
    }

    // Transpose calculation and display
    cout << "The transpose matrix of an array :" << endl;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size ; j++) {
            // Swap row/column indices for transpose
            cout << arr[j][i] << " ";  // Access column-major order
        }
        cout << endl;  // Newline after each transposed row
    }
    
    // Implicit return 0 (C++ standard)
}
