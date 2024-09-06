# Basic Usage

```c
#include <stdio.h>
#include </path/to/the/header/argParser.h>

int main(int argc, char** argv)
{
  printf("%s", parseArgs(argv, "-t", argc));
}
```

# Compilation

```sh
gcc main.c argParser.o -o main
```
