#include "monty.h"

/**
 * swap - function
 * @stack: struct type
 * @line_number: line number
 * Return: void
 **/

void swap(stack_t **stack, unsigned int line_number)
{
  stack_t *temp1;
  stack_t *temp2;

  if (*stack == NULL || (*stack)->prev == NULL)
    {
      fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }

  temp1 = (*stack)->prev->prev;
  temp2 = (*stack)->prev;
  (*stack)->prev = temp1;
  (*stack)->next = temp2;
  temp2->prev = *stack;
  temp2->next = NULL;
  temp1->next = *stack;
  *stack = temp2;
}
