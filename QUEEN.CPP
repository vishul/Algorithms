#include<stdio.h>
//#include<conio.h>
#include<math.h>
int *x=NULL;
int n;
int p(int k,int i);
void Q(int k,int e)
{
	int i=0;
	for(i=0;i<=e;i++)
	{
		if(p(k,i))
		{
			x[k]=i;
			if(k==(n-1))
			{
				for(i=0;i<=(n-1);i++)
				printf("x[%d]=%d",i,x[i]);
			}
			else
			Q(k+1,e);
		}
	}
}
int p(int k,int i)
{
	//int j=0;
	for(int j=0;j<=k-1;j++)

	{

		if((x[j]==i)||abs(x[j]-i)==abs(j-k))
			return(0);
	}
	return(1);
}
void main()
{
	//clrscr();
	printf("Enter the rows and column value:\n");
	scanf("%d",&n);
	x = new int (n-1);
	Q(0,n-1);
	getch();
}
