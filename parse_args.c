#include <string.h>

char ** parse_args(char * line) {
    char ** args;
    args[0] = strsep(line," ");
    int i = 1;
    while(args[i] = strdup(*(args + strlen(args[i-1]) + 1))) {
      strsep(args[i]," ");
    }
    return args;
}
