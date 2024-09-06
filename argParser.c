#include <string.h>

char* parseArgs(char** argArray, char* requestedFlag, int argAmount)
{
  char* parsedValue;
  for (int i = 0; i != argAmount; i++)
  {
    if(!strcmp(argArray[i], requestedFlag))
    {
      parsedValue = argArray[i + 1];
    }
  }

  return parsedValue;
}
