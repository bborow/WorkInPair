#include <iostream>
#include "utils.h"
#include "generator.h"

int main()
{	int *tab = generate();
	int size = sizeof(tab);
	printall(tab, size);
	std::cout << std::endl;
	std::cout << "Min value: " << min(tab, size);
	std::cout << std::endl;
	return 0;
}
