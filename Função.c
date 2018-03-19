
#include <stdlib.h>
  int soma (int a,int b)
  {
    return (a+b);
  }
int main()
{      int n1,n2,result;

      printf("Informe um numero\n");
      scanf("%d",&n1);

      printf("Informe outro numero\n");
      scanf("%d",&n2);

      result=soma(n1,n2);

      printf("A soma eh %d\n",result);
      system("PAUSE");
      return (0);

}
