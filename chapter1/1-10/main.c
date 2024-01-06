#include <stdio.h>

int main(){
  int c;

  while((c=getchar())!=EOF){
    // handle backslash
    if (c=='\\'){
      putchar('\\');
      continue;
    }
    //handle tab
    if (c=='\t'){
      putchar('\\');
      putchar('t');
      continue;
    }
    if (c==' '){
      putchar('\\');
      putchar('b');
      continue;
    }
    putchar(c);
  }

  return 0;
}