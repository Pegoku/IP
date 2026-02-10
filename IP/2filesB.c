#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  FILE * fptr = fopen("file123.txt", "w");
  scanf("%d", &n);
  // printf("%d", n);
  fprintf(fptr, "%d", n);
}