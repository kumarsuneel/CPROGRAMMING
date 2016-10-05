STRING FUNCTION

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char name[20],name1[20],strg[20];
    
   printf("Enter your First String:");
   gets(name);
   printf("Enter your Second String:");
   gets(name1);
   
   puts(strcat(name,name1));
   if(strcmp(name,name1)==0)
        {
       printf("String are Equal");
   }
   else
    {
        printf("Strings are not Equal");
    }
  
printf("The string after Combine %s",strcat(name1,name));
   printf("The Length of String is %d\n",strlen(name));
   printf("The String in Upper case %s\n",strupr(name));
     printf("The String in Lower case %s\n",strlwr(name));
     printf("The String in Reverse Order %s\n",strrev(name));
     strcpy(strg,name);
     printf("The String after Copy %s\n",strg);

   return 0;
}
