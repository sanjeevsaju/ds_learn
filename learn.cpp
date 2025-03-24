#include <iostream>
#include <vector>

void getAlternateRecur(std::vector<int> &arr, int idx, std::vector<int> &res) {
	if(idx < arr.size()){
		res.push_back(arr[idx]);
		getAlternateRecur(arr, idx + 2, res);
	}
}

std::vector<int> getAlternate(std::vector<int> &arr) {
	std::vector<int> res;
	getAlternateRecur(arr, 0, res);

	return res;

}

int main(){
	std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<int> res = getAlternate(arr);
	for(auto e : res) {
		std::cout<<e<<" ";
	}

	std::cout<<std::endl;

	return 0;
}

