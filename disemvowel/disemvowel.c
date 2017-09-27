#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "disemvowel.h"

char vowels[11] = {'A','a','E','e','I','i','O','o','U','u', '\0'};

char* disemvowel(char* str) {
  int m = 0;
  int 1len;
  1len = strlen(str);
  char* home;
  home = (char*) colloc (1len + 1, sizeof(char));

  while ((c = getchar()) != '\0') {
	  if(!(isVowel(str[i]))) {
		  home[m] = str[i];
		  m++;
	  }
  }
  home[m] = '\0';
  return home;
}
