#include "monty.h"

/**
 * div - div top two element
 * @stack: struct type
 * @line_number: line number
 * Return: void
 **/

void _div(stack_t **stack, unsigned int line_number)
{
  stack_t *temp;
  if (!stack || *stack == NULL || (*stack)->prev == NULL)
    {
      fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }

  if ((*stack)->n == 0)
    {
      fprintf(stderr, "L%d: division by zero\n", line_number);
      exit(EXIT_FAILURE);
    }
  temp = *stack;
  (*stack)->prev->n /= (*stack)->n;
  *stack = (*stack)->prev;
  free(temp);
}
