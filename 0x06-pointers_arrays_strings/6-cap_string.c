#include "main.h"

/**
  * cap_string - ...
  * @s: ...
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';',
