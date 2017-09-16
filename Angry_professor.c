#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        int n,k,p=0,q=0; 
        scanf("%d %d",&n,&k);
        int a[n];
        for(int j= 0; j < n; j++){
           scanf("%d",&a[j]);
            if(a[j]>0)
                p++;
            else if(a[j]<0 ||a[j]==0)
                q++;
            
        }
        if(q>=k)
            printf("NO\n");
        else 
            printf("YES\n");
    }
    return 0;
}
