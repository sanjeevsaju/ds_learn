#include <iostream>
#include <vector>

int secondLargestElement(int arr[], int size) {
	int largest = -1;
	int secondLargest = -1;

	for(int i = 0; i < size; i++) {
		if(arr[i] > largest) {
			secondLargest = largest;
			largest = arr[i];
		} else if(arr[i] < largest && arr[i] > secondLargest) {
			secondLargest = arr[i];
		}
	}

	return secondLargest;
}

int main(){
	int arr[] = {11, 2, 10, 4, 5, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	std::cout<<secondLargestElement(arr, size)<<std::endl;
	return 0;
}

