#include <iostream>
#include <vector>

int largestSubArray(std::vector<int> arr, int k) {

	int n = arr.size();
	int maxSum = 0;

	for(int i = 0; i < k; i++) {
		maxSum += arr[i];
	}

	int currSum = maxSum;
	for(int i = 1; i < n - k + 1; i++) {
		currSum = currSum + arr[i + k - 1] - arr[i - 1];
		if(currSum > maxSum) maxSum = currSum;
	}
		
	return maxSum;
}

int main(){

	std::vector<int> arr = {1, 4, 2, 10, 22, 3, 1, 0, 20};
	int result = largestSubArray(arr, 4);
	std::cout<<result<<std::endl;

	return 0;
}

