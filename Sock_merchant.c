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
    int ar[n];
    for(int i=0;i<n;i++)
        {
        scanf("%d",&ar[i]);
    }int a=0,b=0,c;
    for(int i=1;i<n;i++)
        {
        
        if(ar[a]==ar[i] && ar[a]!=0)   
            {
            b++;
            
            a++;
            ar[i]=0;
            i=a;
        }
        else if(i==n-1)
            {
            a++;
            i=a; 
        }
    }
    printf("%d",b);
    
    return 0;
}
