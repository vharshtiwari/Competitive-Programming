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
    for(int i=0;i<t;i++)
        {
        int a;
        scanf("%d",&a);
        int i=0,h=1;
        while(i!=a)
            {
            i++;
            if(i%2!=0)
                {
                h=2*h;
            }
            else if(i%2==0)
                {
                h=h+1;
                
            }
            
        }
        printf("%d\n",h);
    }
    return 0;
}
