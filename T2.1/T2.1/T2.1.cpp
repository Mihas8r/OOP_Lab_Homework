#include<stdio.h>
void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\nThe values of x and y in the swap function after swapping are x=%d y=%d", *x, *y);
}


int main()
{
    int x = 14, y = 16;
    printf("Before swapping:");
    printf("\nx value is %d", x);
    printf("\ny value is %d", y);

    /*calling swap function*/
    swap(&x, &y);

    printf("\nAfter swapping:");
    printf("\nx value is %d", x);
    printf("\ny value is %d", y);
}
