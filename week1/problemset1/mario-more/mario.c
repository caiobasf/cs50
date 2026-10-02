#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int height = 0;

  height = get_int("Height: ");

  for (int rows = 0; rows < height; rows++){
    for (int i = 0 ; i < height; i++)
    {
      printf("#");
      
    }
    printf("\n");
  }
}