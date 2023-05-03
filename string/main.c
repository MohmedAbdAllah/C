#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int length,x=5,*Ptr;
    char f;
    char str2[7]= "hs";
    char str1[6]="hwssss";
    Ptr=&x;
    //length = strlen(str1);
    //printf("%d\n",length);
    printf("%p", Ptr);
    //strcat(str2,str1);
    //strcpy(str1,str2);
    //printf("%s",str1);
    //printf("the concatenation is : %s",str1);
    //x= strcmp(str1,str2);
    //printf("%d",x);
    return 0;
}
