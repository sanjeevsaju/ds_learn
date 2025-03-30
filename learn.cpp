#include <iostream>
#include <vector>

int maximumProfitAccumulation(std::vector<int> prices) {
	int n = prices.size();
	int res = 0;

	for(int i = 1; i < n; i++) {
		if(prices[i] > prices[i - 1])
			res += prices[i] - prices[i - 1];
	}

	return res;
}

int maximumProfitMaximaMinima(std::vector<int> arr) {
	int n = arr.size();
	int lMin = arr[0];
	int lMax = arr[0];
	int i = 0;
	int res = 0;

	while(i < n) {

		while(i < n && arr[i] >= arr[i + 1]) { i++; }
		lMin = arr[i];

		while(i < n && arr[i] <= arr[i + 1]) { i++; }
		lMax = arr[i];

		res += (lMax - lMin);
	}

	return res;
}
	

int main() {

	std::vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
	int maxProfit = maximumProfitAccumulation(prices);
	std::cout<<maxProfit<<std::endl;

	return 0;
}

