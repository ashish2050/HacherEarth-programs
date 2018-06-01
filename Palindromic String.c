#include<stdio.h>
#include<string.h>
void main()
{
    char s[1000];
    int i=0,len;
    gets(s);
    len=strlen(s)-1;
    while(len>i)
  {
      if(s[i++]!=s[len--])
      {
          printf("NO");
          return;
      }
  }
    printf("YES");
    
}