#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,f=0,l; 
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&ar[i]);
    }
  while(f==0)   
  { int k=0;
      for (int c=1 ; c <=n-1; c++)
     {
        int d = c,t;
 
    while ( d > 0 && ar[d] < ar[d-1]) {
      t          = ar[d];
      ar[d]   = ar[d-1];
      ar[d-1] = t;
 
      d--;
    }
    }
      
     for(int i=0;i<n;i++)
         {
        if(ar[i]>0)
            {
            l=ar[i];
            break;
        }
     }
      for(int i=0;i<n;i++)
          {int y=ar[i];
            ar[i]=ar[i]-l;
           if(y!=ar[i] && ar[i]>=0)
               {
               k++;
           }
          }    
      if(k==0)
       {
       f=1;
   }    
   else {printf("%d\n",k);}
   
  
  }  
    return 0;
}
