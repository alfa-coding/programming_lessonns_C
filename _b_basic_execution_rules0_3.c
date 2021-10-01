#include <stdio.h>

int main()
{
    int a =4;
    int b =7;
    int c= a +1;
    int d =a +c;


    printf("variable a:  %d\n",a);

    printf("variable d before altering a: %d\n",d);
    a = a +1;
    printf("variable d after altering a: %d\n",d);



    printf("insideout rule, a: %d\n",a+7);


    return 0;
}