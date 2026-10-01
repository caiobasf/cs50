#include <cs50.h>
#include <stdio.h>

void meow(int times);
int get_n(void);

int main(void)
{
  int n = get_n();

  meow(n);
}

int get_n(void)
{
  int n;
  do
  {
    n = get_int("What's n? ");
  }
  while (n < 0);
  return n;
}

void meow(int times)
{
  for (int i = 0; i < times; i++)
  {
    printf("meow\n");
  }
}
