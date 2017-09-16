#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,b=0; 
    int k,j=0; 
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]); 
    }
    while(j<n)
        {
        for(int z=j+1;z<n;z++)
            {
            int p=a[z]+a[j];
            if(p%k==0)
                {
                b++;
            }
        }
        j++;
    } 
    printf("%d",b);
    return 0;
}