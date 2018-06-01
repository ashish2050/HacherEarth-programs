#include<stdio.h>
void main()
{
    char s[1000];
    int len,i=0,j,k;
    gets(s);
    scanf("%d",&k);
   // len=strlen(s);
   while(s[i]!='\0')
   {
        if((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
        {
            j=0;
            while(j<k)
            {
                j++;
                s[i]++;
                if(s[i]==58)
                s[i]=48;
                else if(s[i]==91)
                s[i]=65;
                else if(s[i]==123)
                s[i]=97;
            }
           
        }
         printf("%c",s[i]);
         i++;
    }
}