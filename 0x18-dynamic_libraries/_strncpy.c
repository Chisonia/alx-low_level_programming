/**
 * _strncpy - copies a specified number of characters
 * from the source string to the destination string
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * @n: Maximum number of characters to copy
 *
 * Return: A pointer to the destination buffer 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
        char *start = dest;

        while (n > 0 && *src != '\0')
        {
                *dest++ = *src++;
                n--;
        }
        while (n-- > 0)
                *dest++ = '\0';

        return start;
}
