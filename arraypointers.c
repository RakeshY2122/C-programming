/* int len = sizeof(a) / sizeof(a[0]);


sizeof(a) → gives the total size in bytes of the entire array a.
Example: if a is int a[5]; and each int is 4 bytes, then sizeof(a) = 20.

sizeof(a[0]) → gives the size in bytes of a single element of the array.
In the same example, sizeof(a[0]) = 4.

Dividing them → 20 / 4 = 5, which is the number of elements in the array. */
// findig teh largest and smallest value in teh array using the pointer 

#include<stdio.h>

int task(int *a, int len, int *min, int *max)
{
    *min = a[0];
    *max = a[0];
    for(int i=1; i<len; i++)
    {
        if(a[i] < *min)
            *min = a[i];
        if(a[i] > *max)
            *max = a[i];
    }
    return 0;
}
int main()
{
    int a[]={12,14,6,7,23,5,6};
    int min,max;
    int len=sizeof(a)/sizeof(a[0]);
    task(a,len,&min,&max);
    printf(" the max and the min value is :%d \n%d",max,min);
    return 0;
}