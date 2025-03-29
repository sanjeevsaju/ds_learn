#include <iostream>
#include <vector>
void distinctElementsSort(std::vector<int> arr, std::vector<int> &d_arr) {
	
	std::sort(arr.begin(), arr.end());
	for(int i = 0; i < arr.size(); i++) {
		if(i == 0 || arr[i] != arr[i - 1])
			d_arr.push_back(arr[i]);
	}
}

void distinctElements(std::vector<int> arr, std::vector<int> &d_arr) {
	
	int n = arr.size();
	for(int i = 0; i < n; i++){
		int j;
		for(j = 0; j < i; j++) {
			if(arr[i] == arr[j])
				break;
		}
		if(i == j)
			d_arr.push_back(arr[i]);
	}

}

bool duplicateCheck(std::vector<int> arr, int k) {
	
	int n = arr.size();
	for(int i = 0; i < k; i++){
		int j;
		for(j = 0; j < i; j++) {
			if(arr[i] == arr[j] && i != j)
				return true;
		}
	}

	return false;

}


int main() {

	std::vector<int> arr = {1, 0, 4, 66, 7, 1, 0, 65, 0, 0, 3};
	if(duplicateCheck(arr, 6))
		std::cout<<"There are duplicates"<<std::endl;
	else
		std::cout<<"There are no duplicates"<<std::endl;

	return 0;
}

