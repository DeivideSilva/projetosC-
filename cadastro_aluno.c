
#include <stdlib.h>

  struct cadaluno{
     char nome[20];
     int n1,n2;
     float media;

  };
int main()
{
      struct cadaluno aluno;

       aluno.nome;
       aluno.n1;
       aluno.n2;
       aluno.media;
       printf("Informe o nome do aluno ");
       gets  (aluno.nome);
       printf("Informe a primeira nota do aluno ");
       scanf("%d",&aluno.n1);
       printf("Informe a segunda nota do aluno ");
       scanf("%d",&aluno.n2);
       aluno.media = (aluno.n1 + aluno.n2) / 2;
       printf("O aluno %s tem as notas %d e %d e a media e %2.0f\n\n",aluno.nome,aluno.n1,aluno.n2,aluno.media);

      system("PAUSE");
      return 0;
}
