#include<stdio.h>
//int main() // doing the basic tasks on the pointers 
/* { use the shif alt a to convert into comment 

    int a=12;
    int *p=&a;
    printf("the value a is :%d\n",a);
    printf("the address of a is :%p\n",p);
    printf(" the value of the a by using p is :%d\n",*p);
    return 0;
} */
// canging the vaue using the pointers .
/* {
    int a=12;
    int *p=&a;
    *p=20;
    printf(" the new value of a is :%d\n",a);

*p = *p + 1;      // read value, add 1, write back
printf("%d\n", a); // 100
} */
// changing the origial value using the pointer function command 
/* int task(int *g)
{
*g=*g+12;  // modify the value at that address
return *g;
}

int main()
{
    int a=20;
    
    task(&a);    // pass the ADDRESS
    printf(" the chnaged value of a is :%d\n",a);

} */
// doing pointer tpinter change this is important . its a backward change and assingn of the value 

/* int main()
 {
    int x=12;
    int *p=&x;
    int **g=&p;
    printf(" thsi will rint the origoinal value of x:%d\n",x);
    printf(" thsi will rint the origoinal value of x:%d\n",*p);
    printf(" thsi will rint the origoinal value of x:%d\n",**g);
    // n6w changing the value of the x usin pointer to pointer 
**g=25;
printf(" the new value of x is changed :%d\n",x);
return 0;


}  */
// pointer assingment 
/* int main()
{
    int a=20;
    int *q,*s;
    q=&a;
    s=q;
    printf(" the value of a is :%d\n",a);
    printf(" the value of a is :%d\n",*q);
    printf(" the value of a is :%d\n",*s);

} */ 