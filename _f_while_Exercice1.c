#include <stdio.h>

int main()
{
    int num=-1;
    int counterPositives =0;
    int counterNegatives =0;

    while (num != 0)
    {
        printf("Introduce a number or 0 to exit the program:\n");
        scanf("%d",&num);

        if (num > 0)
        {
            /* code */
            counterPositives = counterPositives+1;
        }

        if (num < 0)
        {
            /* code */
            counterNegatives= counterNegatives+1;
        }
    }

    printf("cantidad de positivos: %d \n",counterPositives);
    printf("cantidad de negativos: %d \n",counterNegatives);

    return 0;

}