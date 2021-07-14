#include<stdio.h>


int main(int argc, char const *argv[]){

  int number, i;
  int result =0;

  printf("entre com un numero \n");
  scanf("%d", &number);

  for(i=2; i<number/2; i++){
    if (number%i==0){
    result++;
    break;
    }
    
  }

  if (result==0){
    printf("%d e primo ", number);
  }else{
        printf("%d nao e primo ", number);

  }
  

  return 0;
}
