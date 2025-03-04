#include <stdio.h>
// funcao recursiva para movimentacao da torre
void movertorre(int movimentos){
if (movimentos > 0)
{
  printf("Direita\n");
  movertorre(movimentos - 1);
   }
}
// funcao recursiva para movimentacao do bispo
void moverbispo(int movimentos){
  if (movimentos > 0)
  {
    printf("Cima, Direita\n");
    moverbispo(movimentos - 1);
     }
  }
// funcao recursiva para movimentacao da rainha
  void moverrainha(int movimentos){
    if (movimentos > 0)
    {
      printf("Esquerda\n");
      moverrainha(movimentos - 1);
       }
    }
//funcao aninhada para movimentacao do cavalo
    void movercavalo(){
for ( int i = 0; i <  2; i++)
{
  printf("Cima\n");
}
int movimentos = 1;
while (movimentos <= 1)
{
  printf("Direita\n");
  movimentos++;
}
    } 
// saida do programa
    int main(){

      printf("Movimentação da Torre:\n");
      movertorre(5);
      printf("\n");
// chamada da funcao torre
      printf("Movimentação do Bispo:\n");
      moverbispo(5);
      printf("\n");
// chamada da funcao bispo
      printf("Movimentação da Rainha:\n");
      moverrainha(8);
      printf("\n");
// chamada da funcao rainha
      printf("Movimentação do Cavalo:\n");
      movercavalo();
      // chamada da funcao aninhada do cavalo
      return 0;
    }