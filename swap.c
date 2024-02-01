#include "monty.h"

/**
 * swap - function
 * @stack: struct type
 * @line_number: line number
 * Return: void
 **/

void swap(stack_t **stack, unsigned int line_number)
{
  int _value;

  if (*stack == NULL || (*stack)->prev == NULL)
    {
      fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }

  _value = (*stack)->n;
  (*stack)->n = (*stack)->prev->n;
  (*stack)->prev->n = _value;
}
