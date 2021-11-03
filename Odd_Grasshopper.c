#include <stdio.h>
void calculo( long long int coordernada, long long int jumps)
{
  for(int  i = 1;i <= jumps;i++)
  {
    if(coordernada == 0)
    {
      coordernada = coordernada - 1;
    }
    else if(coordernada % 2 == 0)
    {
      coordernada = coordernada - i * 1;
    }
    else if(coordernada % 2 != 0)
    {
      coordernada = coordernada + i * 1;
    }
  }
  printf("%lld",coordernada);
}
void leitura(int n, long long int coordernada, long long int jumps)
{
  for(long long int i = 0; i < n;i++)
  {
    scanf("%lld",&coordernada);
    scanf("%lld",&jumps);
    calculo(coordernada,jumps);
  }
}
int main(void)
{
  int n;
  scanf("%d",&n);
  leitura(n,0,0);
  return 0;
}
