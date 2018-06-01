#include <stdio.h>

int main()
{
    int L,N,W[10000],H[10000],i,j;
    
    scanf("%d %d ",&L,&N);
    for(i=0;i<N;i++)
    scanf("%d %d",&W[i],&H[i]);
   for(i=0;i<N;i++)
  {
    if(W[i]<L || H[i]<L)
    printf("UPLOAD ANOTHER\n");
    else if(W[i]==H[i])
    printf("ACCEPTED\n");
    else
    printf("CROP IT\n");
  }
  
    return 0;
}
