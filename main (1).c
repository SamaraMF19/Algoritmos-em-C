#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(void)
{
 setlocale(LC_ALL,"portuguese");
 char xNome[20];;
 int i;
 float xNota, xSoma, xMedia;
 xSoma = 0;
 xMedia = 0;
 xNota = 0;
 printf("Digite o nome do aluno\n");
 fflush(stdin);
 gets(xNome);
 for (i=1; i <= 3; i++)
 {
 printf("Digite a nota %d\n", i);
 scanf("%f",&xNota);
 xSoma = xSoma + xNota;
 }
 xMedia = xSoma/3.0;
 if (xMedia >= 10){
 printf("Média das notas do aluno %s é %.2f. O aluno está aprovado!\n", xNome, xMedia);
 }
 else
 printf("Média das notas do aluno %s é %.2f. O aluno está reprovado!\n", xNome, xMedia);
 return 0;
}