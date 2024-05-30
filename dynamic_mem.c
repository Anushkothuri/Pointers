// Dynamically allocating memory.
// Using ---> malloc() <--- function.
#include <stdio.h>
#include <stdlib.h> //This header file can store malloc function.
int main()
{
    int n=10;
    int *array;
    array=(int*)malloc(n*sizeof(int)); // Calculating total amount of bytes to be stored.
    if(array==NULL)
    {
        printf("Dynamic allocation is failed.");// Must check pointer is NULL or not.
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        array[i]=i+1;
        printf("%d\t",array[i]);
    }
    free(array); // Using free() function, it prevents memory leaks.
    return 0;
}