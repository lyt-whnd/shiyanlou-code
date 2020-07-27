#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit(int number,int digit)
{
    int i,n=0;
    if(number==0)
    {
        if(digit==0)
            return 1;
        else
            return 0;
    }
    if(number<0)
        number=-number;
    while(number)
    {
        i=number%10;
        if(i==digit)
            n++;
        number=number/10;
    }
    return n;
}