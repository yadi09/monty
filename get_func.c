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
			   {"swap", swap},
			   {"add", add},
			   {"nop", nop},
			   {"sub", sub},
			   {"div", _div},
			   {"mul", _mul},
			   {"mod", _mod},
			   {NULL, NULL}
  };

  i = 0;
    while (funcs[i].f != NULL && (strcmp(funcs[i].opcode, op)))
      {
       i++;
      }

  return (funcs[i].f);
}
