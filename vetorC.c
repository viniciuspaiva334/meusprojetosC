#include <stdio.h>

int mostra_menu(void){
  int op= 4;
  while((op < 0)||(op > 3)){
    printf("MENU\n\n");
    printf("Escolha uma opção:\n");
    printf("0 --> Inserir Valor \n");
    printf("1 --> Visualizar um Índice \n");
    printf("2 --> Mostrar o Vetor Inteiro \n");
    printf("3 -->Finalizar \n\n");
     scanf("%d",&op);
    }
    return op;
    }

void mostra_index(int index,int valor){
  printf("numeros[%d] %d \n",index,valor);
}

void mostra(int vetor[12]){
  int i;
  for(i = 0;i < 12; i++){
    mostra_index(i,vetor[i]);
  }
}

int main(void) {
  int numeros[12];
  int op = 4;
  int index,valor;
  
  while(op != 3){
   op = mostra_menu();
    switch(op){
      case 0:
      printf("Digite um índice: \n");
      scanf("%d,",&index);
       printf("Digite um valor: \n");
      scanf("%d",&valor);
        numeros[index] = valor;
    break;
      case 1:
      printf("Digite um índice\n");
      scanf("%d",&index);
      mostra_index(index,numeros[index]);
    break;
      case 2:
      mostra(numeros);
      break;
      
    }
  }
  printf("Programa finalizado.\n");
  return 0;
}
