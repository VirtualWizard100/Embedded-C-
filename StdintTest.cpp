#include <iostream>
#include <stdint.h>

int main(){
	char* oi;
	char message[32] = {65, 115, 104, 101, 114};
	oi = message;
	for (int i = 0; i < sizeof(oi); i++) {
		std::cout << oi[i];
	};
};

