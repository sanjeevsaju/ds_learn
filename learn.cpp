#include <iostream>
#include <vector>

void rotateRight(std::vector<int>& arr, int d) {
	int n = arr.size();
	for(int i = 1; i <= d; i++) {
		for(int i = n - 1; i > 0; i--)
			std::swap(arr[i], arr[i - 1]);
	}
}

int main() {

	std::vector<int> arr = {1, 2, 3, 4};
	rotateRight(arr, 2);

	for(auto e : arr)
		std::cout<<e<<" ";

	std::cout<<std::endl;

	return 0;
}

