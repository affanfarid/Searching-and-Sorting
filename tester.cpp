#include <iostream>
using namespace std;

//quickSort
//Best: nlogn
//Average: nlogn
//Worst: n^2
int quickSort(int arr[]){
    return 0;
}

//MergeSort
//Best: nlogn
//Average: nlogn
//Worst: nlogn
//
//Description:
//Divides array into half each time, smaller and smaller, 
//sorts 2 elements then merges them back together
void mergeSort(int arr[], int left, int right){
    
    if(right > left){
        int mid = ( left + right ) /2;
        mergeSort(arr, left , mid);
        mergeSort(arr, mid+1 ,right);
        
        merge(arr, left, mid, right);
    }
    
}

//helper function for mergeSort
void merge(int arr[], int left, int mid, int right){
    
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    
    int L[n1], R[n2];
    
    for (i =0; i< n1; i++){
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++){
        R[j] = arr[m + 1+ j];
    }
    
    // Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    //Copy the remaining elements of L[], if there are any
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    // Copy the remaining elements of R[], if there are any
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

//InsertionSort
//Best: n
//Average: n^2
//Worst: n^2
int insertionSort(int arr[]){
    return 0;
}

//SelectionSort
//Best: n^2
//Average: n^2
//Worst: n^2
int selectionSort(int arr[]){
    return 0;
}

//BubbleSort
//Best: n
//Average: n^2
//Worst: n^2
int bubbleSort(int arr[]){
    return 0;
}



//Tester
int main()
{
    cout << "Hello, World!";
    return 0;
}
