#include <iostream>
using namespace std;

void partition(int arr[],int low,int high){
  int pivot=arr[high];
  int i=(low-1);
  for (int j=low;j<=high;j++){
    if(arr[j]<pivot){
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return(i+1)
}
void quicksort(int arr[],int low,int high){
  if(low<high){
    int pi=partition(arr,low,high);
    quicksort(pi-1);
    quicksort(pi+1);
  }
  
}

void printarray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}
int main() {
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int N = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr,0, N-1);
	cout << "Sorted array:";
	printarray(arr, N);
	return 0;
}
