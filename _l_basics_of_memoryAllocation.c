#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define MAX_SIZE 50

int main()
{
    /*In the lesson i, linear arrays were created on the stack
    this is definetely an advantage in terms of speed, but also has
    many drawbacks. Among them, is that the size of the array has to
    be specified at compile time. 

    In this lesson, you will learn how to allocate space dinamically.

    The three functions that we will be using are:

    malloc  -> This functions reserves memory of the specified size
    calloc  -> idem, but, it also initialiazes the memory 
    realloc -> re allocates the memory (e.g allowing arrays to grow in size)
    */

    /*a classic array on the stack, size cannot be altered*/
    int numbers[MAX_SIZE];

    int cant;
    printf("Type a size for the array\n");
    scanf("%d", &cant);

    /*This is an array of size cant, being this value assigned at runtime*/
    size_t other_numbers_size = cant * sizeof(int);
    int *other_numbers = (int *)malloc(other_numbers_size);

    /*the content of the array isnt 0 neccesarely, as
    the memory wasnt initialized, it is just free memory.
    Therefore the whats_inside variable can contain any number*/
    int whats_inside = other_numbers[0];

   
   
   
    /*This is an array of size cant, being this value assigned at runtime*/
    int *some_more_numbers = (int *)calloc(cant, sizeof(int));

    /*the content of the array is 0 on each position, as
    the memory was initialized, Therefore the whats_inside variable
    will contain 0 as well*/
    whats_inside = some_more_numbers[0];

    
    
    
    /*What to do, if we would like to make the other_numbers array bigger?
      we use realloc, which will try to extend the given memory.
    */

    some_more_numbers = (int *)realloc(some_more_numbers, other_numbers_size + other_numbers_size);




    /*Freeing the memory on the heap is very important.
      it avoids memory leaks and tells the system that 
      a previously available chunk of memory is again free
    */

    free(other_numbers);
    free(some_more_numbers);

   

    return 0;
}