#include<iostream>
#include"prime.h"
using namespace std;

int main()
{
  long long int sum = 0;

  for(long int i=1; i<2000000; i++)
  {
    if(isPrime(i))
      sum += i;
  }
  
  cout << sum << endl;
  cin.get();
  
  return 0;
}
