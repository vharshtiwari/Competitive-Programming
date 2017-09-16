#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
        {
        scanf("%d",&ar[i]);
    } 
    int b=0;
    for(int i=0;i<n-1;i++)
        {
        if(ar[i]%2!=0 && ar[i+1]%2!=0)
            {
            ar[i]=ar[i]+1;
            ar[i+1]=ar[i+1]+1;
            b=b+2;
          
            i++;
        }
        else if(ar[i]%2!=0 && ar[i+1]%2==0)
            {
            b=b+2;
            ar[i]=ar[i]+1;
            ar[i+1]=ar[i+1]+1;
                     
    }
    
    }
    if((ar[n-1]%2==0 && ar[n-2]%2!=0) ||(ar[n-1]%2!=0 && ar[n-2]%2==0))
        {
       
        printf("NO");
    }
    else {printf("%d",b);}
    return 0;
    
}
