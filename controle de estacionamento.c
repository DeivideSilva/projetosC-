#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<conio.c>

float fecharcaixa(int a,int b)   /*  função fechar caixa */
{
   return(a*b);

}

int main()
{
        int op,qtd_carros,cap_estacionamento;
        float resultado;
        char placa_entrada [7] ;
        char placa_saida [7] ;
         int tam;
        cap_estacionamento = 20;

        textbackground(0); // define a cor de fundo como  preta
        textcolor(7);     // define a cor do texto como vermelho

        do {   printf("\tBem vindo ao Sistema de Estacionamento versao 1.0\n");

               printf("\n\t   Informe uma Opcao:\n\n");
               printf("\n\t1. Tabela de Tarifacao");
               printf("\n\t2. Controle de Entrada");
               printf("\n\t3. Controle de Saida");
               printf("\n\t4. Capacidade do Estacionamento");
               printf("\n\t5. Fechar Caixa");
               printf("\n\t0. Para Sair\n\n");
               scanf("%d",&op);

        switch (op)
           {

          case 1 :
                 system("cls || clear");  //limpa a tela
                 printf("\n -------------------------------------\n\n\n");
                 printf("\t1.....Hora   :  5.00 Reais\n  ")                ;
                 printf("\t30....minutos:  3.00 Reais\n");
                 printf("\t2.....Horas  :  7.00 Reais\n\n");
                 printf("\n -------------------------------------\n\n\n");
                 break;

          case 2 :

                 system("cls || clear");
                  do{
                 printf("\nInforme a placa do veiculo:\t");
                 scanf("%s" ,&placa_entrada);
                 tam = strlen(placa_entrada);
                       if ((tam > 7)||(tam < 7)) {
                            printf(" Placa incorreta! O formato da placa eh tres letras e quatro numeros ");

                            printf("\n");
                       }
                  }   while(tam != 7);

                 strupr(placa_entrada); // converte letras minusculas para maiusculas
                 printf("\nA placa do veiculo e: %s \n\n",placa_entrada);
                 printf("Data de entrada\n");

                 system("date/t");   // pega a data atual do sistema

                 printf("\n");

                 printf("Hora de entrada\n");
                 system("time/t");  // pega a hora atual do sistema



                 break;

          case 3:

                 system("cls || clear");
                  do {
                 printf("\nInforme a placa do veiculo:\t");
                 scanf("%s" ,&placa_saida);

                 tam = strlen(placa_saida);
                       if ((tam > 7)||(tam < 7)) {
                            printf(" Placa incorreta! O formato da placa eh tres letras e quatro numeros");

                            printf("\n");
                        }

                } while(tam != 7);

                 strupr(placa_saida);
                 printf("\nA placa do veiculo e: %s \n\n",&placa_saida);
                 printf("Data de entrada\n");

                 system("date/t");

                 printf("\n");

                 printf("Data de saida\n");
                 system("date/t");

                 printf("\n");

                 printf("Hora de entrada\n");
                 system("time/t");

                 printf("\n");

                 printf("Hora de saida\n");
                 system("time/t");

                 printf("\nO valor a ser pago e 5.00 reais\n\n");
                 printf("\n");
                 break;


          case 4 :
                 system("cls || clear");

                 printf("Informe a quantidade de carros que estao no estacionamento\n");
                 scanf("%d",&qtd_carros);

                         if (qtd_carros > cap_estacionamento)
                             printf("\nO estacionamento nao possui vagas no momento por favor aguarde \n\n ");

                        else
                             printf("\nEstacionamento possui algumas vagas \n\n");
                 break;

          case 5 :

                 system("cls || clear");

                 printf("\nInforme a quantidade de carros que entrarao no estacionamento\n");
                 scanf("%d",&qtd_carros);

                 resultado = fecharcaixa(qtd_carros, 5.00); // fazendo a chamada da função fecharcaixa
                 printf("O saldo  total do dia foi de %.2f Reais\n\n" ,resultado);
                 printf("\n\n\n");
                 break;

          case 0 :

                 system("cls || clear");

                 exit(1);   // faz com que encerre o programa e volte ao sistema operacional

                 printf("\nSaindo do sistema.....\n\n");

                 break;

                 default:
                        system("cls || clear");

                        printf("\nOpcao invalida! Tente novamente.\a\n\n");   // O caractere  \a emite um beep

                 }

       }while (op!=0);

      system("PAUSE");
      return 0;
}
