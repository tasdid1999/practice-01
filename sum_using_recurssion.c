#include<stdio.h>


int natural_sum(int n)
{


    if(n==0)return n;
    else return n + natural_sum(n-1);
}
int main()
{

    int n;

    printf("Enter a number : ");
    scanf("%d",&n);
    printf("natural sum is : %d",natural_sum(n));


}
