/*
// Sample code to perform I/O:

scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
int main()
{
    long t;
    int N,i,sp,s;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&N);
        s=N%12;
        sp=s%6;
        if(s==0)
        N=N-11;
        else if(s<7)
        N=N+((2*(6-s))+1);
        else
        N=N-((2*(s-7))+1);
        
        if(sp==0 || sp==1)
        printf("%d WS\n",N);
        else if(sp==2 || sp==5)
        printf("%d MS\n",N);
        else
        printf("%d AS\n",N);
        
    }
    return 0;
}