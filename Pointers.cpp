#include <iostream>

int main(){
	int Oi_Lad = 5;
	int* ptr = &Oi_Lad;
	*ptr = 15;
	std::cout << ptr << " = " << *ptr << std::endl;
	std::string message = "Oi lads.";
	std::string* ptr2 = &message;
	std::cout << ptr2 << " = " << *ptr2 << std::endl;
}
