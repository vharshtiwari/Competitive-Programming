#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n][n],sum1=0,sum2=0;
    
      for(int i=0;i<n;i++)
          {
           for(int j=0;j<n;j++)
           {
             scanf("%d",&a[i][j]);  
           }
          }
       for(int i=0;i<n;i++)
           {
           for(int j=0;j<n;j++)
             {
               if(i==j)
                   {
                   sum1=sum1+a[i][j];}
                if(i+j==n-1)
                    {
                    sum2=sum2+a[i][j];
                    
                    
                }
                  }  
             }
     
    int f=sum1-sum2;
    if(f<0)
    {f=-f;
    printf("%d",f);}
    else 
    printf("%d",f);
    return 0;
}
