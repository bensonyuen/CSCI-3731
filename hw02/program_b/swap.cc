#include "swap.h"

/**********************************************************************
* this is the definition of the swap function
**********************************************************************/
void swap(int *x, int *y) {
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
    
} // end of swap function
