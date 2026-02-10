#include <bits/stdc++.h>

int main(){
  int n, j[2];
  scanf("%d", &n);
  for (int i = 0; i<n; i++){
    scanf("%d %d", &j[0], &j[1]);
    printf("%d\n", (int)((sqrt(j[0]*j[0] + j[1]*j[1]))));
  }
  return 0;
}