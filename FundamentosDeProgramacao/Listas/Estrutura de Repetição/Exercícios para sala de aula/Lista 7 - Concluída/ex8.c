#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
  setlocale(LC_ALL,"Portuguese");
  int num,i,j, aux=1;
  char ch;
  do {
    do {
      printf("Informe um número positivo.: ");
      scanf("%d", &num);
      if(num<=0){
        printf("Você digitou um número negativo!\n");
      }
      else{
        for(i=1;i<=num;i++){
          for(j=1; j<=i; j++){
            printf("%d ", aux);
            aux++;
          }
          printf("\n");
        }
        printf("Deseja digitar outro numero (S ou N).: ");
        scanf(" %c", &ch);
        ch = toupper(ch);
        if(ch != 'S'){
          printf("\n\t\tGoodbye <3");
        }
        else aux=1; printf("\n");
      }

    } while(num<=0);
  } while(ch == 'S');

  return 0;
}
