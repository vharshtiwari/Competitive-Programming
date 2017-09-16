#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,f=0,e=0;
	scanf("%d%d",&n,&m);
	char c[n][m+1];
	int ar[m],arr[m],count=0;
	for(int i=0;i<n;i++)
	{
		scanf("%s",&c[i][0]);
	}
	for(int i=0;i<n;i++)
	{	int z=0;
		while(c[i][z]!='\0')
		{
			ar[z]=c[i][z];
			z++;
		}
		for(int j=i+1;j<=n;j++)
		{	
		  int y=0,count=0;
		  while(c[j][y]!='\0')
		  {
			arr[y]=c[j][y];
			y++;
		  }
		  for(int t=0;t<m;t++)
		  { 
		  	if((ar[t]=='1' && arr[t]=='1')||(ar[t]=='1' && arr[t]=='0')||(ar[t]=='0' && arr[t]=='1'))
		  	{
		  		count++;
		  		
		  		
		  	}	
		  }
		  if(count>e)
		  {
		  	e=count;
		  	f=1;
		  }
		  else if(e==count)
		  {
		  	f++;
		  }
		}
	}
	printf("%d\n%d",e,f);
}
