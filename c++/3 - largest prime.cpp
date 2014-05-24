#include<iostream>
#include<math.h>
#include"prime.h"
using namespace std;

int main()
{
  unsigned long long num =600851475143ULL;
  
  for(int i=1; i<sqrt(num); i++)
  {
    if(num%i==0 && isPrime(i))
      cout << i << endl;
  }
  
  return 0;
}
