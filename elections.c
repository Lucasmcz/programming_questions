#include <stdio.h>
void bubble(int arr[],int i,int n)
{
  for(int i = 0;i < n-1;i++)
  {
    for(int j = 0;j < n-1;j++)
    {
      if(arr[i] > arr[i+1])
      {
        int aux = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = aux;
      }
    }
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  int arr[3];
  for(int i = 0;i < n;i++)
  {
    for(int i = 0;i < 3;i++)
    {
      scanf("%d",&arr[i]);
    }
    int a,b,c;
    a = arr[0];
    b = arr[1];
    c = arr[2];
    bubble(arr,0,3);//ordernaçaõ
    if(a == b && a == c && b == c)
    {
      printf("1 1 1\n");
 
    }
    else
    {
      if(a == arr[2] )
      {
        if(a != b && a != c)
        {
            printf("0 ");
        }
        else
        {
          printf("1 ");
        }
 
      }
      else if(a == arr[1])
      {
        printf("%d ",arr[2]+1 - arr[1]);
      }
      else if(a == arr[0])
      {
        printf("%d ",arr[2]+1 - arr[0]);
      }
 
      if(b == arr[2] )
      {
        if(b != a && b != c)
        {
            printf("0 ");
        }
        else
        {
          printf("1 ");
        }
 
      }
      else if(b == arr[1])
      {
        printf("%d ",arr[2]+1 - arr[1]);
      }
 
      else if(b == arr[0])
      {
        printf("%d ",arr[2]+1 - arr[0]);
      }
 
      if(c == arr[2])
      {
        if(c != a && c != b)
        {
            printf("0\n");
        }
        else
        {
          printf("1\n");
        }
 
      }
      else if(c == arr[1])
      {
        printf("%d\n",arr[2]+1 - arr[1]);
      }
      else if(c == arr[0])
      {
        printf("%d\n",arr[2]+1 - arr[0]);
      }
    }
 
 
 
  }
  return 0;
}
