#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
   for(int b=1;b<=t;b++)
   { int n,m,s;
    scanf("%d%d%d",&n,&m,&s);
    int a,i=1;
    
    if(m>n)
    { a=m-(i*n);
        while(a>0)  
        {  
            
             a=m-(i*n);
            if(a<0)
                {
                i--;
                a=m-(i*n);
                break;
            }
          i++;  
        }
    }
    else {a=m;}
    a=a-1;
    if((n-s)>a)
        {
        s=s+a;
    }
    else if((n-s)<a)
        {
        s=a-(n-s);
    }else if((n-s)==a)
        {
        s=n;
    }
    printf("%d\n",s);
      
   }
    return 0;
}
