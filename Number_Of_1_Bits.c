int hammingWeight(uint32_t n) {
    int r;
    int x = 0;
    while(n>0)
    {
        r = 0;
        r = n % 2;
        if(r == 1)
        {
            x++;
        }
        n = n / 2;
    }
    return x;
}
