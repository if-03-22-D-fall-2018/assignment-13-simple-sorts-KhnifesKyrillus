/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <cstdlib>
#include <cstdbool>
#include "general.h"
#include <time.h>

void bubble_sort(int numbers[], unsigned long len)
{
	bool hasSwapped = false;
	do
    {
		hasSwapped = false;
		for(unsigned long i = 0; i < len-1; i++)
        {
			if(numbers[i] > numbers[i+1]){
				int tmp = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i+1] = tmp;
				hasSwapped = true;
			}
		}
	}while(hasSwapped);
}
void insertion_sort(int numbers[], unsigned long len)
{
	int j;
	for(int i = 1; i < len; i++)
	{
		j = i;
		while(j>0 && numbers[j - 1] > numbers[j])
        {
			int tmp = numbers[i];
			numbers[i] = numbers[i-1];
			numbers[i+1] = tmp;
			j--;
		}
	}
	
}
void init_random(int numbers[], unsigned long len)
{
	srandom(time(NULL));
	for (unsigned long i = 0; i < len; i++)
		numbers[i] = random();
}