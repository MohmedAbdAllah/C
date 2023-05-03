  #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ESC 27

int main()
{
  int x,y,z,i,j,k,len;
  char str1[10],str2[10]="smart",str3[10]="timer",str4[10]="happy",str5[10]="noise",str6[10]="black";
  for(z=0;z<=1;z++)
  {
  for(i=0;i<=1;i++)
  {
  for(j=0;j<=1;j++)
  {
  for(k=0;k<=1;k++)
  {
          do
          {
              printf(" Write The Hiden Word (*****)\n ");
              printf("Choose Alpha for(s,b,a,i,t,p,k,l,t,m,o,r,e,c,n,h,y)\n");
              printf("Entr The word : ");
              gets(str1);
              len = strlen(str1);
              x= strcmp(str1,str2);
              if(x==0)
                printf("**Congratulation!!** The Word Is Right\n");
              else
              {
            printf("the word is wrong\n");
            for(y=0;y<len;y++)
                  {
                      if(str1[y]==str2[y])
                      {
                          printf("You Enter The Alpha Number %d Right\n",y+1);
                      }
                  }
            printf("You Can Try Again\n");
              };

          }while(x!=0);
  strcpy(str2,str3);
 }
   strcpy(str2,str4);
 }
   strcpy(str2,str5);
 }
   strcpy(str2,str6);
 }

}
