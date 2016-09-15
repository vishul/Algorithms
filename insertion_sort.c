#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,j;
  printf("Enter the number of elements in the array");
  scanf("%d",&n);
  int* a;
  a=(int *)malloc (sizeof(int)*n);
  printf("\nenter the array elements >");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for( i=0;i<n;i++)
  {
    int key=a[i];
    for( j=i-1;j>=0 && a[j]>key;j-- )
    {
      a[j+1]=a[j];
    }
    a[j+1]=key;
  }
  printf("\nSorted array is :");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
}
