// Basic idea on pointers.
#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("%d\n",x);  // prints value of  'x'.
    printf("%d\n",*p); // prints return value of 'p' that means 'x' value.
    printf("%p\n",p);  // prints address of 'x'.
    printf("%p\n",&p); // prints address of pointer.
    return 0;
}