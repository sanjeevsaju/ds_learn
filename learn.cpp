#include <iostream>
#include <unordered_map>
int fact(int n) {
	if(n == 1)
		return 1;

	return n * fact(n - 1);
}

int nPr(int n, int r) {
	return fact(n) / fact(n - r);
}

int main(){
	int n = 6;
	int r = 3;
	std::cout<<"nPr = "<<nPr(n, r)<<std::endl;
	return 0;
}

