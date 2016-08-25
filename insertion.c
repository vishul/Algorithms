#include<stdio.h>
int a[10];
void insertionsort(n)
{
  int i,j,key;
  for(i=1;i<=n;i++)
  {
    key=a[i];
    for (j=i-1;j>0&&a[j]>key;j--)
    {
      a[j+1]=a[j];
    }
    a[j+1]=key;
  }
}

int main()
{
  //int a;
  int i;
  for(i=1;i<=5;i++)
  {
  scanf("%d",&a[i]);

  }
  insertionsort(5);
  //int i=1;
  for (i=1;i<=5;i++)
  {
    printf("%d\n",a[i]);
  }

}
