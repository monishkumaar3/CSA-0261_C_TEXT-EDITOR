#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main() {
    FILE *input_file, *output_file;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

   
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error: input.txt could not be opened.\n");
        exit(EXIT_FAILURE);
    }

   
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Error: output.txt could not be opened.\n");
        exit(EXIT_FAILURE);
    }

  
    while ((read = getline(&line, &len, input_file)) != -1) {
        
        char *pos = line;
        while ((pos = strstr(pos, "red")) != NULL) {
            strncpy(pos, "blue", 4);
            pos += 4;
        }

      
        fputs(line, output_file);
    }

  
    fclose(input_file);
    fclose(output_file);

    if (line) {
        free(line);
    }

    return 0;
}

