#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFFER_SIZE 1024

int main() {
    char input_filename[BUFFER_SIZE] = "data.txt";
    char output_filename[BUFFER_SIZE] = "statistics.txt";
    char line[BUFFER_SIZE];
    FILE *input_file, *output_file;
    int letter_counts[26] = {0}; 
    int i, c;

    
    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Error: %s could not be opened.\n", input_filename);
        exit(EXIT_FAILURE);
    }

    while (fgets(line, BUFFER_SIZE, input_file) != NULL) {
        
        for (i = 0; line[i] != '\0'; i++) {
           
            c = toupper(line[i]);
            
            if (c >= 'A' && c <= 'Z') {
             
                letter_counts[c - 'A']++;
            }
        }
    }

  
    fclose(input_file);

    output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf("Error: %s could not be opened.\n", output_filename);
        exit(EXIT_FAILURE);
    }

 
    for (i = 0; i < 26; i++) {
        fprintf(output_file, "%c: %d\n", 'A' + i, letter_counts[i]);
    }

    fclose(output_file);

    printf("Statistics written to %s\n", output_filename);

    return 0;
}

