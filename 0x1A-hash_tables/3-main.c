#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    hash_table_set(ht, "oh shit", "hetairas");
    hash_table_set(ht, "hpta", "mentioner");
    hash_table_set(ht, "diga", "heliotropes");
    hash_table_set(ht, "hola", "neurospora");

    return (EXIT_SUCCESS);
}