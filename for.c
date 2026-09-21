#include<stdio.h>
int main()
/*
{
 int i=0,a=0,sum=0;
 printf(" enter teh table you want");
 scanf("%d",&a);
 for(i=1;i<=10;i++)
 {
    sum=a*i;

    printf("%d * %d = %d\n",a,i,sum);



 }


} this is just the table uisng for loop*/
 {
    int i=0;
     for(i=1;i<=10;i++)
     {
        if(i==5)
        {
            break;
        }
        printf(" the number is:%d",i);

     }
 }// thsi program uses the break and continue 
 // where break cuts when if is true 
 // the continue just leaves when the if is true 
 
