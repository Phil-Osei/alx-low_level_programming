#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
    unsigned int x = 0x76543210;
    char *c = (char*) &x;
    return (*c == 0x10);
}
