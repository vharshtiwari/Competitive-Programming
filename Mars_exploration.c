#include <math.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int c=strlen(str),d,q=0;
    d=c/3;char sr[c];int a=1;
    for(int i=0;i<c;i++)
        {
           if(a==1)
             {
               if(str[i]==83){
                   q++;
               }
           }
        else if(a==2)
            {
            if(str[i]==79){
                
                q++;
            }       
        }
        else if(a==3)
            {
            if(str[i]==83)
                {
                q++;   
            }
            a=0;
        }
        a++;
    }
    printf("%d",c-q);
    return 0;
}
