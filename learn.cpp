#include <iostream>

int LCM(int a, int b) {
	int smallest = std::min(a, b);
	int largest = std::max(a, b);

	for(int i = largest; ; i += largest){
		if(i % smallest == 0)
			return i;
	}
}

int main(){
	
	int a = 12, b = 18;
	std::cout<<"LCM = "<<LCM(a, b)<<std::endl;
	return 0;
}

