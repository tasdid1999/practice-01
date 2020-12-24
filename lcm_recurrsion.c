#include<stdio.h>
int gcd(int a, int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main()
{
    int a,b;

    printf("enter two number : ");
    scanf("%d%d",&a,&b);
    int lcm = (a * b )/gcd(a,b);
    printf("lcm of %d and %d is : %d",a,b,lcm);

}
