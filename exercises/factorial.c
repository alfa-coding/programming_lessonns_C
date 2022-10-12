int computer_factorial(int n)
{
    int i;
    int result =1;
    if(n==0 || n==1) return 1;

    for ( i = 2; i <= n; i++)
    {
        result*=i;
    }
    return result;
    
}