#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[15],x;
   char str2[15],y;
   int ret;
   x='a'+'b'+'c'+'d'+'e'+'f';
   y='A'+'B'+'C'+'D'+'E'+'F';


   strcpy(str1, "ABCDEf");
   strcpy(str2, "ABCDEF");

   ret = strcmp(str1, str2);
   printf("%d\n",ret);

   if(ret < 0)
   {
      printf("str1 is less than str2");
   }
   else if(ret > 0)
   {
      printf("str2 is less than str1");
   }
   else
   {
      printf("str1 is equal to str2");
   }

   return(0);
}
/*#include <stdio.h>

int main() {
  char string1[20];
  char string2[20];

  strcpy(string1, "Hello");
  strcpy(string2, "Hellooo");
  printf("Return Value is : %d\n", strcmp( string1, string2));

  strcpy(string1, "Helloooo");
  strcpy(string2, "Hellooo");
  printf("Return Value is : %d\n", strcmp( string1, string2));

  strcpy(string1, "Hellooo");
  strcpy(string2, "Hellooo");
  printf("Return Value is : %d\n", strcmp( string1, string2));

  return 0;
}
*/
