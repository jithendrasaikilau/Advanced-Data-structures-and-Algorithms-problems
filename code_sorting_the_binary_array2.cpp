// this is the code to swap the binary array using Two-Pointer Technique
#include<iostream>
using namespace std;

void swap(int* x, int* y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    while(l <= r)
    {
        if(a[l] == 0) 
        {
            l++;
        }
        else if(a[r] == 1) 
        {
            r--;
        }
        else 
        {
            swap(&a[l], &a[r]);
            l++;
            r--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
    
    return 0;
}
