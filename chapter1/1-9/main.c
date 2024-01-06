#include <stdio.h>

int main(){
  int output,c,lastc;

  while ((c=getchar())!=EOF){
    if (lastc==' ' && c==' ') continue;
    putchar(c);
    lastc=c;
  };
  return 0;
}