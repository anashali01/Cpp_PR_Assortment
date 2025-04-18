#include <iostream>
using namespace std;

int main()
{
    // Declare variable to store array size
    int size;

    // Get array size from user input
    cout << "Enter size of array :";
    cin >> size;

    // Declare variable-length array (Note: Non-standard C++ feature)
    int arr[size];  // This uses compiler extension, not ISO C++ compliant

    // Input phase: Collect array elements from user
    cout << "Enter array's elements :";
    for(int i = 0 ; i < size ; i++)
    {
        // Display position prompt and store input
        cout << "arr["<<i<<"] :";
        cin >> arr[i];  // Direct memory access to array index
    }

    // Output phase: Filter and display negative elements
    cout << "Negative elements from an Array :" ;
    for(int i = 0 ; i < size ; i++)
    {
        // Check if element meets negative condition
        if(arr[i] < 0)
        {
           // Output negative value with comma separator
           cout << arr[i] << "  ";  // Note: Trailing comma remains
        }
    }
    return 0;
}
