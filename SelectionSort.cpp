#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
	int i, j, min_index;
	
	for(i = 0; i < n-1; i++){
		min_index = i;
		for(j = i+1; j < n; j++){
			if(arr[j] < arr[min_index])
				min_index = j;
		}
		swap(arr[min_index], arr[i]);
	}
}
int main()
{
	int arr[] = {62, 25, 12, 22, 11};
	printf("Sap xep:\n");
	selectionSort(arr, 5);
	for(int i = 0; i< 5; i++){
		printf(" %d ", arr[i]);
	}
	return 0;
}// main

