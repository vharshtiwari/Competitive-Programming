#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,k,e=100; 
    scanf("%d %d",&n,&k);
    int ar[n];
    for(int i=0;i<=n;i++)
        {
        scanf("%d",&ar[i]);
    }
    int q,b=0;
    for(int i=0;i<=n;)
        {q=0,b=0;
        while(q!=k)
        {
            i++;
            q++;
        }
         
        e=e-1;
         {if(i<n)
         {if(ar[i]==1)
             {
             e=e-2;
             }
         }
        else {
            i=0;
            if(ar[0]==1)
                {
                e=e-2;
            }
            break;
        }}   
    }
    
      printf("%d",e);
    
      return 0;
    }
