#include <iostream>
#include <stdint.h>

int main(){
	char* oi;
	char message[32] = {65, 115, 104, 101, 114};
	oi = &message[0]; //oi is accessing the first bytes address of message
	for (int i = 0; i < sizeof(oi); i++) {
		std::cout << oi[i]; //post decrementing oi to write out every byte ascii character to the terminal from it's address until hitting the null byte address, then exiting
	};
};

