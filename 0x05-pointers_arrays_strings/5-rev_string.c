#include "main.h"
/**
 * rev_string - Reversesa string
 * @s: Input string
 * Return: String in reverse
 *\

 void rev_string(char *s)
 {
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter};
		s[counter] = rev;
	}
}
