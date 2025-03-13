#include <iostream>
int sum_of_gp(int a, int r, int n) {
	return (a * (1 - std::pow(r, n)))/(1 - r);
}

int main() {
	//Sum of GP
	int a = 2, r = 2, n = 15;
	std::cout<<"Sum of GP is "<<sum_of_gp(a, r, n)<<std::endl;
	return 0;
}
