#include <stdio.h>
#include <stdlib.h>

#include <readline/readline.h>
#include <readline/history.h>

int main(int argc, char **argv) {

  // Print version and exit info
  printf("FLISP version 0.0.0.0.1\n");
  printf("Press Ctrl+C to Exit \n\n");

  // Infinite loop
  while(1) {

    // Read line
    char *input = readline("flisp> ");

    // Add input to history
    add_history(input);

    // Echo the input, for now
    printf("echoing: %s \n\n", input);

    // Free input
    free(input);
  }

  return 0;
}
