/*
Write a program that counts the number of words of any given string.
Name: Óscar Rubén Gómez Ríos
Mail: A01411750@itesm.mx
Matrciule Number: A0141170
Date: 17/10/2018
 */

 #include <stdio.h>
#include <string.h>
#define x 1000

int main()
{
  	char string[x];
  	int a, words;
  	words = 1;

  	printf("\n Give me any String please:  ");
  	gets(string);

  	for(a = 0; string[a] != '\0'; a++)
	{
		if(string[a] == ' ' || string[a] == '\n' || string[a] == '\t')
		{
			words++;
		}
	}
	printf("\n The Total Number of Words of %s is = %d", string, words);

  	return 0;
}