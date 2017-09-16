#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[100];
    scanf("%s",str);
    long n,g; 
    scanf("%ld",&n);
   long int c=strlen(str);
    
    long int b=0,e,f;
    for(int i=0;i<c;i++)
        {
        if(str[i]==97)
            {
            b++;
        }
    }
    e=n%c;
    f=n/c;int t=0;
    for(int i=0;i<e;i++)
        {
        if(str[i]==97)
            {
            t++;
        }
    }
   if(b==c)
       {
       printf("%ld",n);
   }
    else {g=(f*b)+t;
          printf("%ld",g);}
    return 0;
}
