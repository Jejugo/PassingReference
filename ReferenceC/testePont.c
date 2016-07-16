#include <stdio.h>


int main() {

  int i = 100, *p = &i;
  
  printf("*p =  %d XXX &p = %d XXX p = %d XXX &i = %d XXX i = %d\n",*p, &p, p, &i, i);
  
  i = 500;
  printf("*p =  %d XXX &p = %d XXX p = %d XXX &i = %d XXX i = %d\n",*p, &p, p, &i, i);
  

  while(1){};
  return 0;
}
  
