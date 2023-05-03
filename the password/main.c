#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[20],str2[20]= "C.mo7med";
    int x, y,num1,num2;

    printf("Please Enter First Number : ");
    fflush(stdin);
    scanf("%d",&num1);
    printf("Please Enter Secand Number : ");
    fflush(stdin);
    scanf("%d",&num2);
    y = num1 + num2;
    printf("Please Enter The Password : ");
    fflush(stdin);
    scanf("%s",str1);
    x= strcmp(str1,str2);
    printf("x= %d\n",x);
    if(x==0)
    {
       printf("Accept Password\n");
       printf("First Number + Secand Number = %d",y);
    }
    else
    {
      printf("The Password is Wrong");
    }
}
