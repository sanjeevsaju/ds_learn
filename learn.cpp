#include <iostream>
#include <vector>

void moveZeroesToEnd(std::vector<int>& arr) {

	int anchor = 0;
	int itr = 1;
	int n = arr.size();

	while(itr != n - 1) {
		if(arr[anchor] == 0 && arr[itr] != 0){
			std::swap(arr[anchor], arr[itr]);
			itr++;
			anchor++;
		} else if(arr[anchor] == 0 && arr[itr] == 0) {
			itr++;
		}else{
			itr++;
			anchor++;
		}
	}
}

int main() {

	std::vector<int> arr = {0, 1, 2, 0, 4, 3, 0, 5, 0, 0, 0, 7, 0, 0, 0};
	moveZeroesToEnd(arr);

	for(auto e : arr)
		std::cout<<e<<" ";

	std::cout<<std::endl;

	return 0;
}

