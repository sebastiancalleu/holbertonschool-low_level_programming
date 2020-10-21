#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - this function select the function to use.
 * @s: operation character.
 * Return: is the function.
 */
int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i;

i = 0;
while (ops[i].op)
{
	if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);
	i++;
}
printf("Error\n");
exit(99);

return (NULL);
}
