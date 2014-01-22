#include <iostream>

void printall(int *tab, int size)
{
	for(int i = 0; i < size; i++)
	{
		std::cout << tab[i] << ' ';
	}
}

int min(int *tab, int size)
{
	int min = tab[0];
	for(int i = 1; i < size; i++)
	{
		if(tab[i] < min)
			min = tab[i];
	}
	return min;
}
