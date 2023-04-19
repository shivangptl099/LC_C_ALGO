int maxArea(int* height, int heightSize){
    if(heightSize == 2)
    {
        return (height[0]*height[1]);
    }
    int i = 0;
    int j = 0;
    int ma = 1;
    int x;
    int temp;
    while(i<heightSize)
    {
        for(j = heightSize-1;j>=0;j--)
        {
            temp = (height[i]*height[j]*(j-1));
            if(temp > ma)
            {
                ma = temp;
                x = j;
            }
        }
        i++;
    }
    return ma/x;
}