// Arrays using pointers.
#include<stdio.h>
int main()
{
    int p[5]={24,20,54,98,32};
    int *ptr=&p[0];
    printf("Values in array are: ");
    for(int s=0;s<5;s++)
    {
        printf("%d\t",*ptr);
        ptr++;
    }
    return 0;
}