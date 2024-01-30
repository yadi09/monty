#include "monty.h"

/**
 * add - add top two element
 * @stack: struct type
 * @line_number: line number
 * Return: void
 **/

void add(stack_t **stack, unsigned int line_number)
{
  stack_t *temp;
  if (!stack || *stack == NULL || (*stack)->prev == NULL)
    {
      fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }

  temp = *stack;
  (*stack)->prev->n += (*stack)->n;
  *stack = (*stack)->prev;
  free(temp);
}
