#include <stdio.h>



int main()
{
    int a = 3;

    int condicion_a_evaluar = (a >7);

    if(condicion_a_evaluar)
    {
        printf("como en efecto, A es mayor 7");
    }
    else
    {
        a=20;
        printf("No, no es mayor que 7");
    }

    
    return 0;
}
