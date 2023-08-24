#include "monty.h"

ssize_t clean_line(char **content) {
    char *line = NULL;
    size_t len = 0;
    ssize_t n;

    
    if (fgets(line, len, bus.file) != NULL) {
        
        n = strlen(line);
        if (n > 0 && line[n - 1] == '\n') {
            line[n - 1] = '\0';
        }

        
        while (*line != '\0' && isspace(*line)) {
            line++;
        }

        
        *content = line;
    } else {
       
        *content = NULL;
    }

    free(line); 
    return n;
}
