#include <iostream>
#include <vector>

int binarySearchIterative(std::vector<int> arr, int low, int high, int x) {


	while(low <= high) {
		
		int mid = (high + low) / 2;

		if(arr[mid] == x)
			return mid;
		else if(x < arr[mid]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return -1;
}

int main(){
	std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
	std::cout<<binarySearchIterative(arr, 0, arr.size() - 1, 3);

	return 0;
}

