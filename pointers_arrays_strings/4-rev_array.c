#include "main.h"

/**
* reverse_array - reverses an array of integers
* @a: array to be reversed
* @n: number of elements in the array
*/
void reverse_array(int *a, int n)
{
	int i;
    int len_tmp;
    
    for (i = 0; i < n / 2; i++)
    {
        len_tmp = a[i]
		a[i] = a[n - 1 -i];
		a[n -1 - i] = len_tmp;
    }
}
