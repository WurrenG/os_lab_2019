#include "revert_string.h"
#include "string.h"
#include "stdio.h"

void RevertString(char *str)
{
	for (int i = 0; i < strlen(str)/2; i++){
    char buff = str[i];
    str[i] = str[strlen(str) - i - 1];
    str[strlen(str) - i - 1] = buff;
  }
}

