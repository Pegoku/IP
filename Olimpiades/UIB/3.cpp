#include <bits/stdc++.h>

int main()
{
  int n, numNums;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &numNums);
    int input, max, maxCount = 0;

    for (int j = 0; j < numNums; j++)
    {
      scanf("%d", &input);
      if (j == 0) max = input;
      if (input == max) {maxCount++;}
      else if (input > max) {max = input; maxCount = 1;}
    }
    printf("%d %d\n", max, maxCount);
  }

  return 0;
}