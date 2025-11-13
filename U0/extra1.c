#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define IT 10000
#define VARS 20

int getRand(int n)
{
  return (rand() % n);
}

int main()
{
  int nums[VARS] = {0};

  srand(time(NULL));
  for (int i = 0; i < IT; i++)
  {
    nums[getRand(VARS)]++;
  }

  for (int i = 0; i < VARS; i++)
  {
    printf("%d:\t%d\t%d\n", i, nums[i], (int)((float) nums[i]*100/(float)(IT/VARS)));
  }
}