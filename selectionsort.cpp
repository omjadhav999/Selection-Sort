#include <iostream>
using namespace std;

void selectionsort(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        int minindex = i;
        for (int j = 1 + 1; i < size; j++){
            if (arr[minindex] > arr[j]){
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}

int printarray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int array[] = {6, 7, 3, 2, 9};

    selectionsort(array, 5);
    
    printarray(array, 5);

    return 0;
}

/* 
The space complexity of selection sort is O(1).
The time complexity of selection sort is O(n^2).
The time complexity will remain same in both worst case and best case i.e. O(n^2).
*/