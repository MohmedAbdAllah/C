#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ESC 27

int main()
{
  int x,y,z,i,c,f=0,j=0,len;
  char str1[10],str2[10]="smart",str3[10]="timer",str4[10]="happy",str5[10]="noise",str6[10]="black";
  printf("How many game you want to play?'not more 5' *_* --> ");
  scanf("%d",&i);
  for(z=0;z<i;z++)
  {
        c=10;
          do
          {
              fflush(stdin);
              if(z==1)
                strcpy(str2,str3);
              if(z==2)
                strcpy(str2,str4);
              if(z==3)
                strcpy(str2,str5);
              if(z==4)
                strcpy(str2,str6);

              printf(" Write The Hiden Word (*****)\n ");
              printf("Choose Alpha for(s,b,a,i,t,p,k,l,t,m,o,r,e,c,n,h,y)\n");
              printf("Entr The word : ");
              fflush(stdin);
              gets(str1);
              len = strlen(str1);
              x= strcmp(str1,str2);
              if(x==0)
                printf("**Congratulation!!** The Word Is Right\n");

              else
              {
                c--;
                printf("the word is wrong\n");
                for(y=0;y<len;y++)
                  {
                      if(str1[y]==str2[y])
                      {
                          printf("You Enter The Alpha Number %d Right\n",y+1);
                      }
                  }
            printf("You Can Try Again\n");
              }

          }while(x!=0&c!=0);
          j+=c;
          f+=10;
          printf("your score is (%d / %d)",j,f);

 }


}
