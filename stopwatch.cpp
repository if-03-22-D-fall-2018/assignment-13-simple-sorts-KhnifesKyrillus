/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"

float begin;
float end;

void start_stopwatch(){
    begin = clock();
}
float elapsed_time(){
    if(end < begin)
        return (clock() - begin) / CLOCKS_PER_SEC;
    return (end - begin) / CLOCKS_PER_SEC;
}
void stop_stopwatch(){
    end = clock();
}