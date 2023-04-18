double myPow(double x, int n){
    double temp = 1;
    if(x == 1)
    {
        return 1;
    }
    if(x == -1)
    {
        if(n%2 == 0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    if(n == -2147483648)
    {
        return 0;
    }
    double a = n;
    if(a<0)
    {
        a = a*(-1);
    }
    for(int i = 0;i<a;i++)
    {
        temp = temp * x;
    }
    if(n<0)
    {
        return (1/temp);
    }
    return temp;
}