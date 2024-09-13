#include <iostream>
#include <cstdint>

int main(){
	uint64_t a = 18446744073709551615;
	std::cout << a << std::endl;
	a = a + 1; //The maximum value of the uint64_t is going to be passed, which means that all bits previously in the variable are going to overflow as 1 to the 9th byte that it can't access because it's only 8 bytes, making the value for the variable 0
	std::cout << a << std::endl;
};
