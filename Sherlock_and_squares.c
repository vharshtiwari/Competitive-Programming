#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	int ar[2],j=0;
	long int a,b;
	scanf("%ld%ld",&a,&b);
	for(a;a<=b;a++)
	{int q=sqrt(a);
		if(q*q==a)
		{
		ar[j]=a;
		
		j++;
		}
		if(j>=2)
		{
		break;
		}
		else if((a==b) && j<2)
		{
			printf("%d\n",j);

		}
	}
		if(j>=2)
		{
			int c=ar[1]-ar[0],d=c+2;
			while(ar[1]+d<=b)
			{
				j++;
				ar[1]=ar[1]+d;
				d=d+2;
			}
			printf("%d\n",j);
		}
	}
}