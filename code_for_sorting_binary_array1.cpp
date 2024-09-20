// this is the code to sort the binary array using liner time.
#include<iostream>
using namespace std;

int main() 
{
    int n;
    
    // Prompt the user to enter the size of the array
    cout << "Enter the size of the binary array: ";
    cin >> n;

    int a[n];
    
    // Prompt the user to enter the elements of the array
    cout << "Enter the elements of the binary array (0s and 1s only): ";
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int c0 = 0;  // Count of zeros
    for (int i = 0; i < n; i++) 
    {
        if (a[i] == 0) 
        {
            c0++;
        }
    }

    // Fill the array with sorted values
    for (int i = 0; i < n; i++) 
    {
        if (i < c0) 
        {
            a[i] = 0;
        } 
        else 
        {
            a[i] = 1;
        }
    }

    // Display the sorted binary array
    cout << "Sorted binary array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << " " << a[i];
    }
    
    return 0;
}
