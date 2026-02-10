#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  FILE * fptr = fopen("file123.txt", "r");
  fscanf(fptr, "%d", &n);
  fclose(fptr);

  FILE * fptr2 = fopen("file2123.txt", "w");
  fprintf(fptr2, "%d", n*2);
}