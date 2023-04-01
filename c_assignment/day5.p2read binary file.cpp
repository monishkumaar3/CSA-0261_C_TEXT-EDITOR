#include <stdio.h>

#define BUFFER_SIZE 1024

int main() {
    FILE *data_file;
    char buffer[BUFFER_SIZE];

    data_file = fopen("data.bin", "rb");
    if (data_file == NULL) {
        printf("Error: data.bin could not be opened.\n");
        return 1;
    }

    while (fread(buffer, sizeof(buffer), 1, data_file) == 1) {
        printf("%s", buffer);
    }

  
    fclose(data_file);

    return 0;
}

