#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int w;

	w = 0;
	while (w < n)  /*Delacring WHILE*/
	{
		*(dest + w) = *(src + w); /*add 1 position dest and src*/
		w++;

	} /*END WHILE*/


	return (dest);
}
