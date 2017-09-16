#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,p,k=0,d,y=0,t; 
    scanf("%d",&n);
    int ar[n],ar1[n];
    for(int i = 0; i < n; i++)
    {
       scanf("%d",&ar[i]);
    }for(int i=0;i<n;i++)
        {
        for(int j=i+1;j<n;j++)
            {
                if(ar[i]==ar[j])
                    {
                      p=j-i;
                 ar1[k]=p;
                    k++;
                }
        }
        if(i==n-1 && k==0)
            {
            printf("-1");
            y=1;
            break;
        }
            
    }
    if(y==0)
    {
    for (int c = 1 ; c <= k - 1; c++) {
    d = c;
 
    while ( d > 0 && ar1[d] < ar1[d-1]) {
      t          = ar1[d];
      ar1[d]   = ar1[d-1];
      ar1[d-1] = t;
 
      d--;
    }
    }
    
        printf("%d",ar1[0]);}
    return 0;
}
