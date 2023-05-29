#include <stdio.h>

char filename[] = "";

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
	FILE *file = fopen(filename,"w");
	fclose(filename);
	printf("file comressed");
}


