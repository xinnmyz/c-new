# include <stdio.h>
int min(int a,int b,int c)
{
	int n;
	if(a<b)	n=a;
	
    if(c<n)	n=c;
	
    return(n);
    
}

int main()
{
	int x,y,z,k;
	scanf("%d%d%d",&x,&y,&z);
	k=min(x,y,z);
	printf("min=%d\n",k);
	return 0;
}
