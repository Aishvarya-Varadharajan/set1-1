#include<stdio.h>
int main()
{
chat c;
  printf("enter the character\n");
scanf("%c",&c);
if(c == 'a' || c== 'e' || c== 'i' || c =='o' || c=='u')
{
printf("vowel");
}
else
{
printf("consonent");
}
  else
  {
    printf("invalid input");
  }
  
return 0;
}
