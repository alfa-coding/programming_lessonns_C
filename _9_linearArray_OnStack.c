#include <stdio.h>
#define MAX_SIZE 50

int main()
{
    /*
    arrays which are created on the stack
    have a type and a fixed size.

    When you create the array, it's not guaranted
    that it will be clean, which means that accesing
    one of it's elements isnt necesary the default value 
    of the specific type
    */
    int numbers[20];

    /*
    you can also crate an array on the stack making use 
    of the define keyword on top of the program, and then
    specifying the name of that define as the array's size
    */
    char person_address[MAX_SIZE];

    /*
    assigning a value to a specific index of the array
    */
    numbers[0] = 20;

    /*
    saving in a variable, the content of an array in a
    specific index
    */
    int value_from_array = numbers[10];

    
    
    /*
    Looping through an array with a for loop 
    and printing its elements
    */
    int number_array_size = 20;
    for (int i = 0; i < number_array_size; i++)
    {
        /* code */
        printf("%d\n", numbers[i]);
    }

    
    
    /*
    Looping through an array, 
    with a while loop
    */
    int index = 0;
    while (index < number_array_size)
    {
        /* code */
        printf("%d\n", numbers[index]);


        index = index +1;
    }
    
    return 0;
}