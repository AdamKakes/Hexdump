#include <stdio.h>

int main() 
{
	FILE* out = fopen("output.txt", "w");
	char a = 't';
	fprintf(out, "%c %x", a, a);
	fclose(out);
}