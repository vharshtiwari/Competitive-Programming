#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; 
    scanf("%d",&n);
    int ar[n],a=0;
    for(int i = 0; i < n; i++)
    {
       scanf("%d",&ar[i]);
    }
    for(int i=0;i<n-1;i++)
        {
        if(ar[i+1]==0 && ar[i+2]==0)
            {
            i++;
            a++;
        }
        else if(ar[i+1]==0 && ar[i+2]==1)
            {
            a++;
        }
        else if(ar[i+1]==1 && ar[i+2]==0)
            {
            i++;
            a++;
        }
        else if(i==n-2 && ar[n-2]==0)
            {
            a++;
        }
    }
    printf("%d",a);
    return 0;
}
