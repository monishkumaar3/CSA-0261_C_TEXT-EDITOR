#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main() {
    char filename[BUFFER_SIZE], search_string[BUFFER_SIZE];
    char line[BUFFER_SIZE];
    FILE *file;

    
    printf("Enter the name of the file: ");
    fgets(filename, BUFFER_SIZE, stdin);
    filename[strcspn(filename, "\n")] = '\0';  
    printf("Enter the search string: ");
    fgets(search_string, BUFFER_SIZE, stdin);
    search_string[strcspn(search_string, "\n")] = '\0';  

    
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: %s could not be opened.\n", filename);
        exit(EXIT_FAILURE);
    }

    
    while (fgets(line, BUFFER_SIZE, file) != NULL) {
        
        if (strstr(line, search_string) != NULL) {
          
            printf("%s", line);
        }
    }

    fclose(file);

    return 0;
}

