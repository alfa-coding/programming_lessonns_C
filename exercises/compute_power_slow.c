
int computer_power(int base, int exponent)
{
    int i;
    int result =1;
    if(base ==0 && exponent ==0) exit(1); 
    if(exponent==0 && base!=0) return 1;
    if(base ==0) return 0;

    for ( i = 2; i <= exponent; i++)
    {
        result*=base;
    }
    return result;
    
}