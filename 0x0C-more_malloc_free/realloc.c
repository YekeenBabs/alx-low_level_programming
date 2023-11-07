#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 * Return: pointer to allocated new size memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    new_ptr = malloc(new_size);

    if (new_ptr == NULL)
        return (NULL);

    if (ptr != NULL)
    {
        unsigned int copy_size = (old_size < new_size) ? old_size : new_size;
        for (unsigned int i = 0; i < copy_size; i++)
        {
            ((char *)new_ptr)[i] = ((char *)ptr)[i];
        }
        free(ptr);
    }

    return (new_ptr);
}

