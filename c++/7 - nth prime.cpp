#include<iostream>
#include"prime.h"
using namespace std;

int main()
{
  int primes = 0, i = 0;
  while(primes < 10001)
  {
    i++;
    if(isPrime(i))
      primes++;
  }
  cout << i << endl;
  return 0;
}
