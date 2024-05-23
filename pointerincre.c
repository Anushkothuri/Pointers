// Pointer arthmetic operation using pointer increment operation.
#include<stdio.h>
int main()
{
    int w=24;
    int *ptr=&w;
    printf("pointer address before increment:%d",ptr);
    printf("\n");
    ptr++;
    printf("pointer address after increment:%d",ptr);
    return 0;
}