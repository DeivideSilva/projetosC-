#include <stdio.h>
#include <stdlib.h>

int main()
{
      char frase[]="\nIncluindo esta frase no arquivo\n";
      char caractere ='a';
      FILE *file;
      file = fopen("C:\\Users\\Julia\\Desktop\\Programas em C\\teste.txt", "a"); //  o a serve para incluir "append"

        if (file==NULL)
        {
             printf("O arquivo nao pode ser aberto");
             system ("pause");
             exit(0);
        }
        fputs(frase,file);
        fputc(caractere,file);

      system("PAUSE");
      return 0;
}
