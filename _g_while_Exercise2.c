#include <stdio.h>

int main()
{
    int numberToRead = -1;
    int sum_acumulator = 0;
    int counter =0;

    while (numberToRead != 0)
    {
        printf("Introduce a number or 0 to exit the program:\n");
        
        scanf("%d", &numberToRead);

        if (numberToRead > 0)
        {
            sum_acumulator = sum_acumulator +numberToRead;
            counter = counter +1;
        }
        
    }
    float promedio = (float)sum_acumulator /counter;
    printf("El promedio es: %f\n",promedio);

    return 0;
}