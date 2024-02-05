// Standard libraries
#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32 // WINDOWS
// In Windows, default behaviour is to provide history and arrow navigation
// For compatibility, we create functions analougous to the linux/mac ones

#include <string.h>

static char buffer[2048];

char *readline(char *prompt) {
  printf("%s", prompt);
  fgets(buffer, 2048, stdin);
  char *cpy = malloc(strlen(buffer) + 1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy) - 1] = '\0';
  return cpy;
}

void add_history(char *unused) {}

#else // LINUX/MACOS
// On linux/macos, we use GNU realine library to provide history and arrow
// navigation during prompt insertion

#include <readline/history.h>
#include <readline/readline.h>

#endif
