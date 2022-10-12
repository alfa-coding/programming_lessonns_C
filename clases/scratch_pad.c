#include <stdio.h>

int main()
{
    // El simbolo = NO SE COMPORTA como en MATES, sino, como un operador de asignacion
    // para guardar cosas en la RAM
    int primera = 4;
    int segunda = 5 + primera;

    printf("El valor de 2da, es: %d \n", segunda);

    /*algebra boolena -> trabaja con decisiones, cosas pueden ser VERDADERAS(1) o FALSAS(0)*/

    int resultado = (segunda == 9); // cuando una operacion arroja resultado verdadero

    /* Operaciones con resultado booleano
    - comparaciones >,<, == .
    - OPERADOR && y ||
    - NOTA -->Cuando quiero comparar, utilizo 2 simbolos de igual
    */
    printf("El resultado fue: %d\n", resultado);

    /*OPERADOR AND -> &&

    naranjas | mandarinas | grado de satisfaccion (por tu peticion) -> &&
    0           0           0
    0           1           0
    1           0           0
    1           1           1

    El operador && es verdadero cuando ambos operandos, son verdaderos -> multiplicacion para la gente

    */

    /*OPERADOR OR -> ||

     naranjas | mandarinas | grado de satisfaccion (por tu peticion) -> ||
     0           0           0
     0           1           1
     1           0           1
     1           1           1   -> ES DIFERENTE AL OR HUMANO

     El operador || es verdadero cuando al menos uno de los operandos, es verdadero -> Suma para la gente

     */

    /* OPERADOR NOR ->! calcular la negacion de algo

    soy_feliz | resultado de la negacion
    0           1
    1           0
    */

    /*
    condicionales

    //un if es como una funcion, que ejecuta su barriga, SI y SOLO si, la condicion provista es verdadera(1)
    //si esta condicion, no es verdadera, la ejecucion, continuara, en la siguiente linea, despues de la
    //barriga del if

    if (condition )
    {
        //barriga
    }

    */

    int llueve = 1;
    int estoy_en_casa = 0;
    int tengo_hambre = 0;
    int numero_a = 20;
    int numero_b = 20;
    int soy_feliz = (llueve || estoy_en_casa) && !tengo_hambre;

    // EL IF, ELSEIF y el ELSE son mutuamente exclusivos -> que si entro al IF, JAMAS entrare al ELSE y viceversa
    // En medio de un bloque IF -ELSE, puedes colocar, tantos ELSEIF como necesites
    if (numero_a < numero_b)
    {
        printf("Yeah baby, A es menor\n");
        numero_a = 80;
    }
    else if (numero_a > numero_b)
    {
        printf("OMG Im sorry, B es menor\n");
    }
    else
    {
        printf("Son iguales\n");
    }

    /*bucles -> ciclos*/

    // UN BUCLE Sirve para repetir instrucciones en su barriga, siempre que la condicion, sea verdadera(1)
    // CUANDO TENEMOS UN BUCLE, somos RESPONSABLES de detenerlo!!! sino, sera infinito
    /*
    while ( condition )
    {
        //barriga
    }

    */
    int total;
    int veces = 0;
    printf("Introduce por favor el total de veces\n");
    scanf("%d", &total);

    while (veces < total)
    {
        printf("Jeniffer\n");
        veces = veces + 1;
    }

    /*
    CONTAR e imprimir la cantidad de numeros positivos y
    negativos que el usuario ha entrado por teclado, dado
    un N, que representa la cantidad de numeros que seran tecleados
    */

    int n;
    int numero_intrucido;
    int contador_positivos=0;
    int contador_negativos=0;
    printf("Introduce el numero N\n");
    scanf("%d",&n);  // con esto leo N desde la consola 

    while (n>=0)
    {
        printf("Introduce UN numero\n");
        scanf("%d", &numero_intrucido);
        if (numero_intrucido>0)
        {
            contador_positivos = contador_positivos +1;
        }
        else
        {
            contador_negativos = contador_negativos +1;
        }
        n = n -1;
    }

    //imprimir cuantos fueron positivos y cuantos negativos
    printf("La cantidad de Pos fue: %d y la cantidad de Negativos fue: %d\n",contador_positivos,contador_negativos);
    

    printf("FIN PROGRAMA\n");

    return 0;
}
