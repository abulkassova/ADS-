#include <iostream>
using namespace std;
template <class T>
int array_search(T arr[], int n, T val)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
            return i;
    }
    return -1;
}

int main()
{
    int arr[]={3,5,6,7,8,9,3,23};
    int val=5;
    int n=8;
    cout<<array_search(arr, n, val);
    return 0;
}
