/*
// Sample code to perform I/O:

scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
#include<math.h>
void main()
{
    int N=0,i;
    int A[1000];
   long long int ans=1;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
         ans=(ans*A[i])%(int)(pow(10,9)+7);
        
    }
    printf("%llu",ans);
    
}