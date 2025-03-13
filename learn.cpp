#include <iostream>

void reverseDigits(int n, int &revNum, int &basePos) {
	if(n > 0) {
		reverseDigits(n/10, revNum, basePos);
		revNum += (n % 10) * basePos;
		basePos *= 10;
	}
}

int main() {
	int n = 1234567;
	int revNum = 0;
	int basePos = 1;
	reverseDigits(n, revNum, basePos);
	std::cout<<"Reversed number using recursion is "<<revNum<<std::endl;
	return 0;
}
