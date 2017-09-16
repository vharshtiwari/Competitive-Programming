#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
        {
        char str[100000];
        scanf("%s",str);
        int c=strlen(str),b=0;
        for(int j=0;j<c;j++)
            {
            if(str[j]=='A' && str[j+1]=='A')
                {
                b++;
                
            }
            else if(str[j]=='B'&& str[j+1]=='B')
                {
                b++;
                
            }
        }
        printf("%d\n",b);
    }
    return 0;
}
