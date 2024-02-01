#include "monty.h"

/**
 * pstr - print string
 * @stack: stack_t type
 * @line_number: line number
 * Return: void
 **/

void pstr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
  stack_t *temp = *stack;
  if (*stack == NULL)
    {
      printf("\n");
      return;
    }

  while (temp != NULL && temp->n >= 0 && temp->n <= 127 && temp->n != 0)
    {
      printf("%c", (char)temp->n);
      temp = temp->prev;
    }

  printf("\n");
}
