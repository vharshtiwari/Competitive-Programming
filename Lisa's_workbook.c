#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k;
    scanf("%d%d",&n,&k);
    int ar[n];
    for(int i=0;i<n;i++)
        {
        scanf("%d",&ar[i]);
    }
    int g=1,b=1,c=0,a=0;     //b=question no. // g=page no.
    for(int i=0;i<n;i++)
        {
       
        for(int j=1;j<=ar[i];j++)
        {
           a++;
                 if(j==g)
                    {   
                     c++;
                     }
              if(a==k || j==ar[i])
                { 
                  g++;
                  a=0;
            }
        }
        
    }
    printf("%d",c);
    return 0;
}
