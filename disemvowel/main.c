#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

int main(int argc, char* argv[]) {
  char* line;
  size_t size;
  char* var;

  size = 100;
  line = (char*) malloc (size + 1);


  while (getline(&line, &size, stdin) > 0) {
    var = disemvowel(line);
    printf("%s\n", var);
    free(var);
  }
  free(line);
}
