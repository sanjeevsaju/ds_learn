#include <iostream>
#include <vector>

int largestElement(int arr[], int size) {
	int largest = -1;

	for(int i = 0; i < size; i++) {
		if(arr[i] > largest)
			largest = arr[i];
	}

	return largest;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	std::cout<<largest(arr, size)<<std::endl;
	return 0;
}

