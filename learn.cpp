#include <iostream>

int factorial(int n) {

	int res = 1;
	for(int i = 2; i <= n; i++) {
		res *= i;
	}

	return res;
}

int factorial_recursive(int n) {
	if(n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}

int main(){

	int n = 15;
	std::cout<<"Factorial of 15 is "<<factorial(n)<<std::endl;

	return 0;
}

