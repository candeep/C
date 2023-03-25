#include <stdio.h>
int main()
{
    int a[7]={10,21,5,2,20,3,25};
    int n=7,b[7]={0,0,0,0,0,0,0};
    int j=0;
    for (int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    printf("\n");
    for (int i=0;i<n-1;i++)
    {
      for (int j=0;j<n-i-1;j++)
      {
        if(a[j+1]<a[j])
        {
          int temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      }
    }
    for (int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    printf("\n");
for (int i=0;i<7;i++)
    {
      if(a[i]%5==0){
        b[n-1]=a[i];
        n--;
      }
      else{
      b[j]=a[i];
      j++;
      }
    }
    for (int i=0;i<7;i++)
    {
      printf("%d ",b[i]);
    }
}
