#include "main.h"

/**
 * _memcpy - Copies n bytes from src to dest
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest; // Pointer to the destination memory area

	// Loop through each byte to copy from source to destination
	while (n > 0)
	{
		*dest_ptr = *src; // Copy byte from source to destination
		dest_ptr++; // Move destination pointer to the next byte
		src++; // Move source pointer to the next byte
		n--; // Decrement the remaining number of bytes to copy
	}

	return (dest); // Return the pointer to the destination memory area

