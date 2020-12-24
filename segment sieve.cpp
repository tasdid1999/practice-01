#include<bits/stdc++.h>
using namespace std;
#define max 32000
vector<int>primes;
bool isprime[max];

void seive()
{
    for(int i = 0; i<max; i++)isprime[i]=true;
    for(int i = 3; i * i <= max; i+=2)
    {
        if(isprime[i]){
            for(int j = i * i; j<=max; j+=i)
            {
                isprime[j]=false;
            }
        }

    }
    primes.push_back(2);
    for(int i = 3; i< max ; i+=2)if(isprime[i])primes.push_back(i);

}
int main()
{
    int t;
    cin >> t;
    while( t-- )
    {


    }


}
