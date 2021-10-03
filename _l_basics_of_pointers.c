#include <stdio.h>

int main()
{
    /*
    the Variables of a program, are stored in Memory, therefore, they 
    have besides their datatype and name, an address in memory.
    This address can be obtained by placing an & before the variable name.

    Once you obtain the memory location of a variable, you can save it 
    in another special variable. 

    In the C language (as well as many others) these special variables are called pointers.

    Pointers are just variables that hold/storage memory addresses. This variables
    can then be used to achieve some cool tricks, such as, viewing or modifying the
    content located at these addresses.
    */

    /*a simple variable*/
    int numberA = 5;

    /*
    in the right side, the & operator obtains the memory address of the variable called numberA

    in the left side, the variable called pointerToA, holds the memory location of
    the variable numberA
    */
    int *pointerToA = &numberA;

    /*
    Dereferencing:

    When a variable is pointed by a pointer, this pointer can modify or view the content
    of the variable. This process is called dereferencing.

    here, by placing an * before the pointer, you can obtain the value contained at the 
    address that it holds. Therefore, by adding 1 to this value, numberB is equal to 15

    This is how we visit the orginal value given a pointer.
    */

    int numberB = 10 + (*pointerToA);

    printf("%d\n", numberB);

    /*
    Dereferencing can be also used to modify the original value.

    In the following case, the value of numberA will be increased in one, by
    only manipulating the pointer. 
    */

    ++(*pointerToA);
    printf("%d\n", numberA);



    /*
    Pointers can also be used to hold arrays by pointing to the address
    in which its first element is
    */

    int numbers[3] = {4, 1, 60};
    int *arrayByPointing = numbers;

    /*
    if this is to be true, the I can loop through the array
    by using the pointer
    */
    for (int i = 0; i < 3; i++)
    {
        printf("in stack array ->%d, hold in pointer ->%d\n", numbers[i], arrayByPointing[i]);
    }
    printf("\n");


    /*Pointers will be used in lesson m to explain dinamic memory allocation*/
    
    return 0;
}