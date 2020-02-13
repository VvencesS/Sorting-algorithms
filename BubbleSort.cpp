#include <iostream>
using namespace std;

// A function to implement bubble sort  
void bubbleSort(int arr[], int n){
	int i, j;
	for(i = 0; i < n-2; i++){
		for(j = n-1; j >= i+1; j--){
			if(arr[j-1] > arr[j])
				swap(arr[j-1], arr[j]);
		}
	}
}

/* Function to print an array */
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  

int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    cout<<"Sorted array: \n";  
    printArray(arr, n);
	return 0;
}// main

