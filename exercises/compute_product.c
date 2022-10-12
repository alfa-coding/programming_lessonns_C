
int computer_product(int factorA, int factorB)
{
    int i;
    int result =0;
    if(factorA ==0 || factorB ==0) return 0; 

    for ( i = 0; i < factorB; i++)
    {
        result+=factorA;
    }
    return result;
    
}