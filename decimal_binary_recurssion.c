#include <stdio.h>

void decToBinary(int num)
{
    if (num == 0)
    {
        return ;
    }

    decToBinary(num / 2);
    printf("%d", num % 2);
}

int main()
{
    int number;

    scanf("%d", &number);

    decToBinary(number);
	return 0;
}

