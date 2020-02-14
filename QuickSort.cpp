#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right){
	int i, j, x;
	x = arr[(left+right)/2];
	i = left;
	j = right;
	
	while(i < j){
		while(arr[i] < x) i++;
		while(arr[j] > x) j--;
		if(i < j)
			swap(arr[i], arr[j]);
		i++;
		j--;
	}
	if(left < j)
		quickSort(arr, left, j);
	if(i < right)
		quickSort(arr, i, right);
}
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
int main()  
{  
    int arr[] = {10, 7, 8, 9, 1, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    quickSort(arr, 0, n - 1);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    
    return 0;  
}  // main

