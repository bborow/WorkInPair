#include<iostream>

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
