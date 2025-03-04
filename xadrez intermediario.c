int main(){
    // criei variáveis para cada peça de xadrez
    int Torre = 1;
    int Bispo = 1;
    int Rainha = 1;
    int Cavalo = 0;
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
    
    printf("\n");
    
    printf("\nMovimentos do Cavalo:\n");
    int i = 0;
    do {
        // Dentro do do-while, usamos o for para dois movimentos "Baixo"
        for (Cavalo = 0; Cavalo < 1; Cavalo++) {
            printf("Baixo\n");
        }
    
        // Após o loop for, imprimimos "Baixo" mais uma vez
        for (Cavalo = 0; Cavalo < 1; Cavalo++) {
            printf("Baixo\n");
        }
    
        // Aninhado no do-while, temos o movimento "Esquerda"
        printf("Esquerda\n");
        
        i++;  // Incrementa para sair do do-while após uma iteração
    } while (i < 1);  // Executa apenas uma vez
    
    
    return 0;
    
    
    }