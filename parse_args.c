#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char ** parse_args(char * line) {
    char * copy = strdup(line);
    char ** args;
    int i = 0;
    char * iter;
    args = malloc(5*sizeof(char*));
    while((iter = strsep(&copy," ")) != NULL) {
        args[i] = malloc(sizeof(char*));
        strcpy(args[i],iter);
        i++;
    }
    return args;
}


int main() {
    char * cmd = "ls -a -l";
    char * x = malloc(sizeof(char*));
    strcpy(x,cmd);
    char ** args = parse_args(x);
    printf("%s",args[0]);
    execvp(args[0], args);
    return 0;
}
