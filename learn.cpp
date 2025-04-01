#include <iostream>
#include <vector>

std::vector<int> findThreeElements(std::vector<int> arr) {
	int n = arr.size();

	std::vector<int> smaller(n, -1);
	int min = 0;

	for(int i = 1; i < n; i++) {
		if(arr[i] <= arr[min]){
			min = i;
		} else {
			smaller[i] = min;
		}
	}

	std::vector<int> greater(n, -1);
	int max = n - 1;

	for(int i = n - 2; i >= 0; i--) {
		if(arr[i] >= arr[max]) {
			max = i;
		} else {
			greater[i] = max;
		}
	}

	//No print the elements
	for(int i = 0; i < n; i++) {
		if(smaller[i] != -1 && greater[i] != -1) {
			return {arr[smaller[i]], arr[i], arr[greater[i]]};
		}
	}

	return {};
}

int main() {

	std::vector<int> arr = {12, 11, 10, 5, 6, 2, 30};
	std::vector<int> result = findThreeElements(arr);

	for(int x : result) {
		std::cout<<x<<" ";
	}
	std::cout<<std::endl;

	return 0;
}

