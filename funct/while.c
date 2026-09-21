#include<stdio.h>
#include<string.h>
// int main()
/*{
    int num=0;

     while(num<=10)
     {
        printf(" enter the number \n");
        scanf("%d",&num);

     }
}*/

int main()
{
    char name[20] = " ";
    printf("enter your name");
    fgets(name,sizeof(name),stdin);
    name[ strlen(name)-1] = '\0';
    while( strlen(name) == 0)
    {

        printf(" enter the name it is not yet ");
          fgets(name,sizeof(name),stdin);
    name[ strlen(name)-1] = '\0';

    }
    printf(" %s",name);
    
}

