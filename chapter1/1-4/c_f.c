#include <stdio.h>

int main(){
  float fahr, celsius;
  int lower,upper,step;

  lower = 0;
  upper = 300;
  step = 22;
  celsius = lower;

  printf("%6c %6c\n",'C','F');

  while ( celsius <=upper){
    fahr = (celsius * 9.0) / 5.0 + 32.0;

    printf("%6.0f %6.1f \n",celsius,fahr);
    
    celsius = celsius + step;
  }

  return 0;
}