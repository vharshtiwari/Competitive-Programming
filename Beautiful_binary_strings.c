#include <math.h>
#include <stdio.h>
#include <string.h>

int main(){
    int n,c,b=0; 
    scanf("%d",&n);
    
    char a[n];
    scanf("%s",a);
    c=strlen(a);
    for(int i=0;i<n;i++)
        {
        if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0')
            {
           
            a[i+2]='1';
            b++;
            i++;
        }
        
    }
    printf("%d",b);
    return 0;
}
