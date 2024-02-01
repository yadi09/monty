#include "monty.h"

/**
 * pchar - print char
 * @stack: stack_t type
 * @line_number: line number
 * Return: void
 **/

void pchar(stack_t **stack, unsigned int line_number)
{
  if (stack == NULL || *stack == NULL)
    {
      fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
      exit(EXIT_FAILURE);
    }

  if ((*stack)->n >= 0 && (*stack)->n <= 127)
    {
      putchar((*stack)->n);
      putchar('\n');
    }
  else
    {
      fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
      exit(EXIT_FAILURE);
    }
}
