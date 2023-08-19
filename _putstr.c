#include "main.h"
/**
*_putstr - fun that print str
*@s: pointer to the str we want to print
*@l: lenth of the str
*Return: -1 if error, 1 otherwise
*/
int _putstr(char *s, int l)
{
return (write(1, s, l));
}

