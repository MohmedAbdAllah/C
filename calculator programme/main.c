#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation_system ;
    int x,y,z;
    for (  ;  ;)
    {

    printf("enter the first number : ");
    scanf("%d",&x);
    printf("enter the second number : ");
    scanf("%d",&y);
    fflush(stdin);
    printf("please enter yor operator '+' '-' '*' '/'");
    scanf("%c",&operation_system);
    fflush(stdin);

    switch(operation_system)
    {
    case '+' :
        {
            z=x+y ;
            printf("the number after operation is %d \n",z);
            printf("---------------------------------------\n");

        }break;
    case '-' :
        {
            if(x>y)
            {
              z=x-y ;
              printf("the number after operation is %d \n",z);
              printf("---------------------------------------\n");
            }
            else if (y>x)
            {
                z=y-x ;
                printf("the number after operation is %d \n",z);
                printf("---------------------------------------\n");
            }
            else
            {
                z=x-y ;
                printf("the number after operation is %d \n",z);
                printf("---------------------------------------\n");
            }
        }break ;
    case '*':
        {
            z=x*y ;
            printf("the number after operation is %d \n",z);
            printf("---------------------------------------\n");
        }break;
    case '/' :
        {
           z=x/y ;
           printf("the number after operation is %d \n",z);
           printf("---------------------------------------\n");
        }break ;
    default :
        {
            printf("pleas check the operation\n");
            printf("---------------------------------------\n");
        }
    }

    }
}
