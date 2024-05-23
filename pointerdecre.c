#include<stdio.h>
int main()
{
    int w=24;
    int *pr=&w;
    printf("pointer address before increment:%d",pr);
    printf("\n");
    pr--;
    printf("pointer address after increment:%d",pr);
    return 0;
}