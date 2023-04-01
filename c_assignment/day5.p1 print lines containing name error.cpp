#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main() {
    FILE *input_file, *error_file;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error: input.txt could not be opened.\n");
        exit(EXIT_FAILURE);
    }

    error_file = fopen("error_log.txt", "w");
    if (error_file == NULL) {
        printf("Error: error_log.txt could not be opened.\n");
        exit(EXIT_FAILURE);
    }


    while ((read = getline(&line, &len, input_file)) != -1) {
        
        if (strstr(line, "error") != NULL) {
        
            fputs(line, error_file);
        }
    }

    fclose(input_file);
    fclose(error_file);

    error_file = fopen("error_log.txt", "r");
    if (error_file == NULL) {
        printf("Error: error_log.txt could not be opened.\n");
        exit(EXIT_FAILURE);
    }

    printf("Error log contents:\n");
    while ((read = getline(&line, &len, error_file)) != -1) {
        printf("%s", line);
    }

    fclose(error_file);

    if (line) {
        free(line);
    }

    return 0;
}

