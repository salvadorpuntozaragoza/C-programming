#include <stdio.h>
#include <stdlib.h>

int numeros = 1;

int main()
{
  while( numeros <= 100)
  {
    if( (numeros % 3) == 0 && (numeros % 5) == 0 ) printf("%d .- Buzz and feed\n", numeros);
    else if( (numeros % 5) == 0 ) printf("%d .- Buzz\n", numeros);
    else if( (numeros % 3) == 0 ) printf("%d .- Feed\n", numeros);

    numeros++;
  }

  return 0;
}
