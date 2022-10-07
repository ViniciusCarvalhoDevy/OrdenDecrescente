#include <stdio.h>
int valor[20],posicao,copia,p;
int main(void) {
   p =0;   
    for(posicao = 0;posicao < 5;posicao++ ){
      printf("Digite um valor inteiro: ");
      scanf("%d",&valor[posicao]);
    for(p = 0;p < 5;p++ ){
      if (valor[posicao]> valor[p]){
        copia = valor[p];
        valor[p] = valor[posicao] ;
        valor[posicao] = copia;
      }
    }
      }
    printf("\nEsses são os valores em ordem cescente: ");
  for(posicao = 0;posicao < 5;posicao++ ){
    printf("%d,",valor[posicao]);
    }
  return 0;
}
