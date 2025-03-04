#include <stdio.h>

int main(){
// criei variáveis para cada peça de xadrez
int Torre = 1;
int Bispo = 1;
int Rainha = 1;
// criei um loop for para cada peça de xadrez, onde cada peça tem um número de movimentos específico
// a torre tem 5 movimentos, o bispo tem 5 movimentos e a rainha tem 8 movimentos
printf("\nMovimentos da Torre:\n");

for ( Torre = 1; Torre <= 5; Torre++)
{
    printf("Direita %d\n", Torre);
}

printf("\nMovimentos do Bispo:\n");

while (Bispo < 6)
{ 
  printf("Cima, Direita %d\n", Bispo);
  Bispo++;  
}

printf("\nMovimentos da Rainha:\n");

do
{
  printf("Esquerda %d\n", Rainha);
  Rainha++;
} while (Rainha < 9);

return 0;


}
