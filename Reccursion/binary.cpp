#include <iostream>

using namespace std;

bool binarysearch(int *arr, int s, int e, int key)
{

    // base case

    if (s > e)
        return false;

    int mid=s+(e-s)/2;
    // element found
    if (arr[mid] == key)
        return true;

    // not found and moving
    if (arr[mid] > key)
    {
        return binarysearch(arr, s, mid-1, key);  //when following mid is greater than key its lies on left side
    }

    else
    {
        return binarysearch(arr,mid + 1,e, key);
    }
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int k = 4;
    int key = 7;

    cout << binarysearch(arr, 0, 3, key) << endl;

    return 0;
}