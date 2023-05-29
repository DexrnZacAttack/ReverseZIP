#include <stdio.h>

char filename[] = "";
    char *buffer;
    long fileSize;

void logo() {
	printf("  _________.__    .__  __    __________.__        \n");
	printf(" /   _____/|  |__ |__|/  |_  \\____    /|__|_____  \n");
	printf(" \\_____  \\ |  |  \\|  \\   __\\   /     / |  \\____ \\ \n");
	printf(" /        \\|   Y  \\  ||  |    /     /_ |  |  |_> >\n");
	printf("/_______  /|___|  /__||__|   /_______ |__|   __/ \n");
	printf("        \\/      \\/                   \\/   |__|    \n");
}

int main() {
	logo();
	printf ("-=Welcome to ShitZip=-\n");
	printf ("The Worlds most 100 Precent Lossy compression program\n");
	printf ("Works on ANY file!\n");
	workfile();
}

void workfile() {
	printf("what file to you want to compress? \n");
	scanf("%s" , &filename);
	FILE *file = fopen(filename,"rb");
	fseek(filename, 0, SEEK_END);
        fileSize = ftell(filename);
        fseek(filename, 0, SEEK_SET);
	buffer = (char *)malloc(2 * fileSize);
	fread(buffer, 1, fileSize, filename);
	fclose(filename);
	outputFile = fopen("filename", "wb");
	fwrite(buffer, 1, fileSize, filename);
        fwrite(buffer, 1, fileSize, filename);
	fclose(filename);
	free(buffer);
	printf("File has been "Compressed"");
}


