#include <iostream>
using namespace std;

int main()
{
    // Variable declaration for matrix dimensions
    int row, column;

    // Get matrix dimensions from user
    cout << "Enter Row size :";
    cin >> row;
    cout << "Enter Column size :";
    cin >> column;

    // Declare 2D array using VLAs (Note: Not standard C++)
    int arr[row][column];

    // Matrix input section
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column ; j++) {
            // Display position prompt and store input
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // Initialize maximum value with first element
    int largest = arr[0][0];

    // Matrix traversal to find maximum
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column ; j++) {
            // Update largest if current element is bigger
            if(arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    // Display final result
    cout << "The largest element : " << largest;

    return 0;
}
