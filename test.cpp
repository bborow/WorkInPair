#include "generator.h"
#include <iostream>

int main(){
	int* tab = generate();
	for(int i = 0; i < 10; i++){
		std::cout << tab[i] << ' ';
	}
	std::cout << std::endl;
	return 0;
}
