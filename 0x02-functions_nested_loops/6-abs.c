#include "main.h"
#include <stdlib.h>

/**
 *_abs - check absolte value of integer
 *
 * Return: Always 0
 */

int _abs(int r)
{
	if (abs(r) > 0)
	{
	return (r);
	}
	else if (abs(r) < 0)
	{
	return (r * -1);
	}
	else
	{
	return ('0');
	}
	return (0);
}
