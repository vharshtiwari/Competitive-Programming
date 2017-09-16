#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[3],b[3]; 
    scanf("%d %d %d",&a[0],&a[1],&a[2]); 
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    int A=0,B=0;
    for(int i=0;i<=2;i++)
        {
          if(a[i]>b[i])
              A++;
         else if(b[i]>a[i])
             B++;
    }
    printf("%d %d",A,B);
    return 0;
}
