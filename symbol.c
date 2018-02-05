#include "symbol.h"

int Hash(char *str){
  sum = str[0];
  for(i = 1; i<length;i++){
    sum = sum.lshift;
    sum = sum + str[i]; //this has to be in bits
  }
  return sum;
}
