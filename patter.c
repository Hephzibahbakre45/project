#include<stdio.h>

int main(void)
{

  int level=5;

  for (int i=1; i<=level; i++)
  {
    int space= level-i;

    for(int j=0; j < space; j++)
    {
      printf(" ");
    }
    for(int k=0; k<i; k++)
    {
      printf("*");
    }
    printf("\n");
  }
  return(0);
}