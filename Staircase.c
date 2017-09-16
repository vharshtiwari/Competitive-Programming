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
    for(int i=1;i<=n;i++)
      { int a;
           a=n-i;
       for(int j=1;j<=n;j++)
       {
         
           if(j<=a)
               printf(" ");
           else if(j>a)
               printf("#");
             if( j==n)
               printf("\n");
       }
    }
    return 0;
}
