#include "monty.h"

/**
 * free_dlist - function
 * Return: void
 **/

void free_dlist()
{
  stack_t *temp;

  while (stack != NULL)
    {
      temp = stack;
      stack = stack->prev;
      free(temp);
    }
  free(line);
}
