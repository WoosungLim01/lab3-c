// Author: Woosung Lim wml5207@psu.edu
// Collaborator: Alex Delargy add5529@psu.edu
// Collaborator: John Sheilds jts5975@psu.edu
// Collaborator: Varun Patel vkp5116@psu.edu
// Section: 2
// Breakout: 6
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int sum_n(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1){
    return 1;
  }
  else {
    return n + sum_n(n-1);
  }
}

void print_n(const char *s, int n) {
 if (n == 0){
    return;
  }
 
  printf("%s\n",s);
  print_n(s,n-1);
}

int main(void) {
  char *num = readline("Enter an int: ");
  int numinput = atoi(num);
  printf("sum is %i.\n",sum_n(numinput));
  char *str = readline("Enter a string: ");
  print_n(str, numinput);
  return 0;
  
}