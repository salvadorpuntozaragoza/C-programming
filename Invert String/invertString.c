#include <stdio.h>
#include <stdlib.h>

void invertString(char *str, char *inverted);

char cadena[] = "Salvador";
char inverted[20] = "";

int main(){

  invertString(cadena, inverted);
  puts("Cadena original: ");
  puts(cadena);

  puts("\nCadena invertida: ");
  puts(inverted);

  return 0;
}

void invertString(char *str, char *inverted){
  int counter = 0;

  while(*str){
    *str++;
    counter++;
  }

  while(counter != 0){
    *inverted = *--str;
    *inverted++;
    counter--;
  }
}
