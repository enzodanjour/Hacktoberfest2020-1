#include<iostream>
using namespace std;

int main() {
    int sizeof_arr, swap=0, pass=0, flag=0;
    cout<<"Enter size of array: ";
    cin>>sizeof_arr;
    int arr[sizeof_arr];
    cout<<"Enter elements: ";
    for(int i=0; i<sizeof_arr; i++) {
        cin>>arr[i];
    }
    cout<<"You entered array: ";
    for(int i=0; i<sizeof_arr; i++) {
        cout<<arr[i]<<"     ";
    }

    quick_sort(arr, min, max);

    cout<<"\nYour sorted array: ";
    for(int i=0; i<sizeof_arr; i++) {
        cout<<arr[i]<<"     ";
    }
    cout<<"\nNumber of swaps are: "<<swap;
    cout<<"\nNumber of passes are: "<<pass;
}

void quick_sort(int arr[], int min, int max) {
    int q = partition(arr, min, max);
    quick_sort(arr, mid+1, max);
    quick_sort(arr, min, max-1);
}

int partition(int arr[], int min, int max) {
    int pivot = arr[max];
    int i = min - 1, temp, temp1;
    for(int j=min, j<max-1; j++) {
        if(arr[j] <= pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            swap++;
        }
        pass++;
    }
    temp1 = arr[i+1];
    arr[i+1] = pivot;
    pivot = temp;
    return i+1;
}