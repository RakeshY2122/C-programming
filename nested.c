#include<stdio.h>
#include<stdbool.h>
int main()
{

float a = 10.00;
bool isstudent = true; //20% discount 
bool issenior = true; //10% discount 
 if(isstudent)
 {
    if(issenior){
        printf(" you get discount of 30% \n");
        a*=0.7;
    }
else {
    printf(" you got discount of 20%\n");
    a*=0.8;

}

    
}

else{
    printf("you got no discount ");
    a*=1;

 }
 printf(" the total amount is %.2f",a);
 return 0;

}
