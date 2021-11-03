#include<stdio.h>
int main()
{
 char str[20],*ptr;
  int i=0;
  printf("enter any string(below 20 characters):");
  scanf("%s",&str);
  ptr=str;
  while(*ptr != '\0'){
     
      ptr++;
      i++;
  }
  printf("length of the string : %d",i);
  
	return 0;
}

