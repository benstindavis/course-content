#include<iostream>

using namespace std;


int minElementIndex(int A[], int low, int high) {
    /*
    Returns the index of the minimum element in the array.
    */
    int currentMinIndex, i;

    currentMinIndex = low;
    for (i = low + 1;i <= high;i++)
    {
        if (A[i] < A[currentMinIndex])
        {
            currentMinIndex = i;
        }
    }

    return currentMinIndex;
};
void swap(int A[], int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
};

void sortNumbers(int A[], int low, int high) {
    
    if (low == high) {
        return;
    }
    int minIndex = minElementIndex(A, low, high);

    swap(A, low++, minIndex);
    return sortNumbers(A, low, high);
};






int main() {
   int arr[100];
   int n;

    cout<<"Enter the number of elements : ";
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Input"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted Array"<<endl;
    sortNumbers(arr, 0 , n-1);
    for (int i = 0; i < n;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}