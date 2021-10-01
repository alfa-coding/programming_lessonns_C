#include <stdio.h>
#define MAX_ROWS 50
#define MAX_COLS 20

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
    int squared_matrix[20][20];

    /*
    you can also crate an array on the stack making use 
    of the define keyword on top of the program, and then
    specifying the name of that define as the array's size
    */
    int bidemensional_array[MAX_ROWS][MAX_COLS];

    /*
    assigning a value to a specific index of the array
    */
    squared_matrix[0][2] = 20;

    /*
    saving in a variable, the content of an array in a
    specific index
    */
    int value_from_array = squared_matrix[10][12];

    /*
    Looping through an array with a for loop 
    and printing its elements
    */
    int squared_matrix_size = 20;
    for (int i = 0; i < squared_matrix_size; i++)
    {
        for (int j = 0; j < squared_matrix_size; j++)
        {
            printf("%d\n", squared_matrix[i][j]);
        }
    }

    /*
    Looping through an array, 
    with a while loop
    */
    int index_rows = 0;
    int index_cols = 0;

    while (index_rows < MAX_ROWS)
    {
        while (index_cols < MAX_COLS)
        {

            /* code */
            printf("%d\n", bidemensional_array[index_rows][index_cols]);

            index_cols = index_cols + 1;

        }

        index_rows = index_rows + 1;
    }

    return 0;
}