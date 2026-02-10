#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  FILE * fptr = fopen("file123.txt", "r");
  fscanf(fptr, "%d", &n);
  printf("%d", n);
}