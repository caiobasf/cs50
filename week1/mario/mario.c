#include <stdio.h>

int main(void)
{
  const row = 3;
  const col = 3;

  for (int row = 0; row < 3; row++) 
  {
    for (int col = 0; col < 3; col++)
    {
      printf("#");
    }
    printf("\n");
  }

}
