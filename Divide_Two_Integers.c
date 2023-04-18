int divide(int dividend, int divisor){
    long int a = dividend;
    if(divisor == 1)
    {
        return dividend;
    }
    int b = divisor;
    if(dividend < 0)
    {
        a = a*(-1);
    }
    if(divisor < 0)
    {
        b = b*(-1);
    }
    if(a == b)
    {
        if(dividend<0 && divisor<0)
        {
            return 1;
        }
        else if(dividend<0 || divisor<0)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    int i = 0;
    while(a>b)
    {
        a = a - b;
        i++;
    }
    if(dividend < 0 && divisor < 0)
    {
       return i;   
    }
    else if(dividend< 0 && divisor > 0)
    {
        return (-1)*i;
    }
    else if(dividend > 0 && divisor < 0)
    {
        return (-1)*i;
    }
    return i;
}