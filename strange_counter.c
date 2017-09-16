#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){ 
   long int t; 
    scanf("%ld",&t);
   long int n,g,i,q,b=3*pow(2,n-1),c;
    for(int n=1;;n++)
    {
     b=3*(pow(2,n-1));
        i=b-2;
        if(i>=t)
            {
            g=n;
            break;
        }
    }
    
    if(i==t)
        {
        printf("%ld",b);
    }
    else{    
    b=3*(pow(2,g-2));
    i=b-2;
    q=t-i;
        c=b-q;
    printf("%ld",c);
    }
    return 0;
}
