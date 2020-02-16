#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	//Create temp array
	int L[n1], R[n2];
	
	//Copy data to temp arrays L[] and R[]
	for(i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for(j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
		
	//Merge the temp arrays back into arr[l...r]
	i = 0;
	j = 0;
	k = l;
	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	//Copy the remaining elements of L[], if there are any
	while(i < n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	
	//Copy the remaining elements of R[], if there are any
	while(j < n2){
		arr[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int l, int r){
	if(l < r){
		// Same as (l+r)/2, but avoids overflow for large l and h
		int m = (l+r)/2;
		
		// Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r);
        
        //Merges two subarrays of arr[].
        merge(arr, l, m, r);
	}
}
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i=0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
int main()
{
	int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    printf("Given array is \n"); 
    printArray(arr, arr_size); 
  
    mergeSort(arr, 0, arr_size - 1); 
  
    printf("\nSorted array is \n"); 
    printArray(arr, arr_size); 
    
	return 0;
}// main

