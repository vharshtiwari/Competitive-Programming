#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k,b,a=0,c,e;
    scanf("%d%d",&n,&k);
    int ar[n];
    for(int i=0;i<n;i++)
        {
        scanf("%d",&ar[i]);
        a=a+ar[i];
    }
    scanf("%d",&b);
    int d=a/2;
    c=d-(ar[k]/2);
    
    if(c==b)
        {
        printf("Bon Appetit");
    }
    else {
        
        e=(ar[k]/2);
        printf("%d",e);
    }
    
    
    
    return 0;
}
