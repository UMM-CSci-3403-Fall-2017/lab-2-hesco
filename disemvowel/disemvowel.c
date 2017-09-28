#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

char* disemvowel(char* str) {
  int i=0, j=0, found=0, VC=0, valid=0, len=strlen(str);
  char* toStr;
//char lower[6]={'a','e','i','o','u','\0'};
//char upper[6]={'A','E','I','O','U','\0'};
  char davaol[11] = {'a','A','e','E','i','I','o','O','u','U','\0'};
  while(i<len){
      for(j=0;j<11;j++){
          if(davaol[j] == str[i]){
              VC++;
          }
      }
      i++;
  }
  toStr = (char*) calloc(len - VC + 1,sizeof(char));
  VC=0;
for (i=0;i<len;i++){
    //handel emplty empty cases;
    found=0;
    j=0;
    //strchr(davaol, str[i]) if ture returns pointer, if flase returns NULL, humsdmkadlml
    // tomuch ochem and not enought time to handle this fancy function.
    while(j<11){
        if(davaol[j]==str[i]){
            found=1;
            VC++;
        }
        j++;    
    }
    if(found == 0) {
        toStr[valid] = str[i];
        valid++;
        
    }
    
}
  return toStr;
}
