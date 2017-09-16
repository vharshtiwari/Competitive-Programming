#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for(int a=1;a<=t;a++)
        {
        char str[10000];
        scanf("%s",str);
        int c=strlen(str),b=0;
        
        for(int i=0;i<c/2;i++)
            {
            if( str[c-1-i]>str[i] )
                {
                int g,f;
                g=str[c-i-1];
                f=str[i];
                    while (g!=f)
                        {
                        g--;
                        b++;
                    }   
            } 
            else if(str[i]>str[c-i-1])
                {
                int g,f;
                g=str[c-i-1];
                f=str[i];
                while(f!=g)
                    {
                    f--;
                    b++;
                }
            }
            }
        
        printf("%d\n",b);
    }
    return 0;
}
