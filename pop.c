#include "monty.h"

/**
 * pop - function
 * @stack: stack
 * @line_number: line number
 * Return: void
 **/

void pop(stack_t **stack, unsigned int line_number)
{
  stack_t *temp = *stack;
  if ((*stack) == NULL)
    {
      fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
      exit(EXIT_FAILURE);
    }

  *stack = (*stack)->prev;
  free(temp);
}
