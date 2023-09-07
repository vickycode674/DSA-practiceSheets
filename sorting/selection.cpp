#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    int arr[] = {7,14,3,9,2,6,1,0,5};
    int n = 9;
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}