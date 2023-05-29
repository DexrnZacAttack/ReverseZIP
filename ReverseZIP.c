#include <stdio.h>
#include <stdlib.h>

char filename[256];
char* buffer;
long fileSize;

void logo() {
    // Placeholder for the logo function
}

void workfile() {
    printf("What file do you want to compress? \n");
    scanf("%s", &filename[0]);

    FILE* file = fopen(filename, "rb");
    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    buffer = (char*)malloc(2 * fileSize);
    fread(buffer, 1, fileSize, file);
    fclose(file);

    file = fopen(filename, "wb");
    fwrite(buffer, 1, fileSize, file);
    fwrite(buffer, 1, fileSize, file);
    fclose(file);

    free(buffer);
    printf("File has been compressed.\n");
}

int main() {
    logo();
    printf("-=Welcome to ReverseZip=-\n");
    printf("The world's first 200 Percent lossless compression program\n");
    printf("Works on ANY file!\n");
    workfile();
    return 0;
}
