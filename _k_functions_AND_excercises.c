#include <stdio.h>

/* Function Structure

[return type] function_name (parameters)
    {
        //body

        return [a variable that is of the return type you specified]
    }
*/

/*a function with no params, and returns nothing (void)*/
void print_message()
{
    printf("Hello World\n");

    /*
    in void functions, the return word is optional
    */
}

/*a function with no params, and returns a char*/
char first_letter_of_alphabet()
{
    return 'A';
}

/*a function with two integer parameters, that returns their sum*/
int add_numbers(int a, int b)
{
    return a + b;
}

/*a function taking an array of integer as paramenter and its size,
This function returns nothing,it only prints the content of the array */
void print_vector(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d\n", numbers[i]);
    }
}

/*a function taking an array of non negative integers as paramenter and its size
This function, returns the largest element of the array */
int largest_number(int numbers[], int size)
{
    int tmp_largest = -1;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > tmp_largest)
        {
            /* code */
            tmp_largest = numbers[i];
        }
    }

    return tmp_largest;
}

/*a function telling whether a number is prime or not*/
int is_prime(int number_to_check)
{
    if (number_to_check <= 1)
        return 0;
    if (number_to_check <= 3)
        return 1;

    if (number_to_check % 2 == 0 || number_to_check % 3 == 0)
    {
        return 0;
    }

    int sqrt_of_number_to_check = sqrt(number_to_check);

    for (int i = 5; i < sqrt_of_number_to_check; i += 6)
    {
        if (number_to_check % i == 0 || number_to_check % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int numbers[20];
    /*calling a void function*/
    print_vector(numbers,20);

    /*calling a function and saving the value it returned*/
    int was_prime = is_prime(29);

    printf("%d\n",was_prime);

    return 0;
}