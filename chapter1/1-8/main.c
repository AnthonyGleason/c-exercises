#include <stdio.h>

int main(){
  int blanks,tabs,nls,c;
  blanks = 0;
  tabs = 0;
  nls = 0;

  while ((c = getchar())!=EOF){
    if (c=='\n') ++nls;
    if (c=='\t') ++tabs;
    if (c==' ') ++blanks;
  };
  printf("There are %d new lines, %d tabs, and %d blanks",nls,tabs,blanks);
  return 0;
}