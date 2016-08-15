#include<stdio.h>
#include<stdlib.h>
int partition(int *, int,int);
void quicksort(int *a, int start, int end)
{
  if(start<end){
  int p=partition(a, start, end);
  quicksort(a,start,p);
  quicksort(a,p+1,end);
}
}
int partition(int *a,int start, int end)
{
  int p=start;
  int i,j;
  j=start+1;
  for(i=start+1;i<end;i++)
  {
    if (a[i]<a[p])
    {
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      j++;
    }
  }
  int temp=a[j-1];
  a[j-1]=a[p];
  a[p]=temp;
  return (j-1);
}
int main()
{
  int n;
  printf("enter no of elements in the array\n");
  scanf("%d",&n);
  int *a;
  a=(int *)malloc(sizeof(int)*n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  quicksort(a,0,n);
  printf("The sorted array is:\n");
  for(int i=0;i<n;i++)
  {
    printf("%d \t",a[i]);
  }
}
