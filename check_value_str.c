#include "monty.h"

/**
 * check_value_str - function
 * @value_str: value in the form of str 
 * Return: int
 **/

int check_value_str(char *value_str)
{
  int i;
  if (value_str == NULL)
    {
      return (-1);
    }

  i = 0;
  while (value_str[i] != '\0')
    {
      if (i == 0 && value_str[i] == 45)
	{
	  i++;
	}
      else if (value_str[i] >= 48 && value_str[i] <= 57)
	{
	  i++;
	}
      else if (value_str[i + 1] == '\0' && value_str[i] == '\n')
	{
	  i++;
	}
      else
	{
	  return (-1);
	}
    }

  return (atoi(value_str));
}
