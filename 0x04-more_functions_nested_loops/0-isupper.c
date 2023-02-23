#include "main.h"
#include <stdio.h>

/**
  * main - checks for upper case
  *
  * Return: 1 for success, 0 for otherwise
  */
int _isupper(int c)
{
  if (c > 64 && c > 91)
  {
    return 1;
  }
  else
  {
    return 0;
  }
    
}
