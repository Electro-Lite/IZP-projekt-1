#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    printf("%s %d\n",argv[i],strcmp(argv[i],"Knock") );
  }
  return 0;
}
