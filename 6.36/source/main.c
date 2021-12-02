#include <stdio.h>
#include <stdlib.h>

char inverted_string(char* string);

int main()
{
	char* string = "helloworld";
	
	inverted_string(string);

	system("pause");
	return 0;
}

char inverted_string(char* string)
{
	string++;
	if (*string != '\0')
	{
		inverted_string(string);
	}
	string--;
	
	printf("%3c", *string);
}