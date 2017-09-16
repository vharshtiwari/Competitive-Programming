#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int d1,m1,y1;
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2,m2,y2; 
    scanf("%d %d %d",&d2,&m2,&y2);
    if(y1==y2 && m1==m2 && d2>=d1)
        {
        printf("0");
    }
    else if((y1==y2 && m1<m2) ||(y2>y1))
        {printf("0");
        
    }
    else if(y1==y2 && m1==m2 && d1>d2)
        {
        int c=15*(d1-d2);
        printf("%d",c);
    }
    else if(y1==y2 && m1>m2)
        {
        int c=500*(m1-m2);
        printf("%d",c);
    }
    else if(y1>y2)
        {
        printf("10000");
    }
    return 0;
}
