#include "monty.h"

/**
 * get_func - function pointer
 * @op: opcode
 * Return: function pointer
 **/

void (*get_func(char *op))(stack_t **stack, unsigned int line_no)
{
  int i;
  instruction_t funcs[] = {
			   {"push", push},
			   {"pall", pall},
			   {"pint", pint},
			   {"pop", pop},
			   {NULL, NULL}
  };

  i = 0;
    while (funcs[i].f != NULL && (strcmp(funcs[i].opcode, op)))
      {
       i++;
      }

  return (funcs[i].f);
}
