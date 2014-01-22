#include <cstdlib.h>

int* generate()
{
	int* tab = new int[10];
	for(int i = 0; i < 10; i++){
		tab[i] = rand() % 100 + 1;
	}
	return tab;
}
