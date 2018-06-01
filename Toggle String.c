/*
// Sample code to perform I/O:

scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
void main()
{
    char S[101];
    gets(S);
    int i=0;
    while(S[i]!='\0')
    {
        if(S[i]>=65 && S[i]<=90)
        S[i]=S[i]+32;
        else if(S[i]>=97 && S[i]<=122)
        S[i]=S[i]-32;
        i++;
    }
    puts(S);
    
}