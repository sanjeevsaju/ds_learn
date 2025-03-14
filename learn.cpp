#include <iostream>

int gcd(int a, int b) {
	int result = std::min(a, b);

	while(result > 0) {
		if(a % result == 0 && b % result == 0)
			break;
		result--;
	}

	return result;
}

int main(){
	
	std::cout<<"GCD of 98 and 56 is "<<gcd(98, 56)<<std::endl;
	return 0;
}

