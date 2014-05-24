#ifndef PRIME_H
#define PRIME_H

#include<cmath>

bool isPrime(int n)
{
  if (n<=1) return false;
  else if (n<4) return true;
  else if (n%2==0) return false;
  else if (n<9) return true;
  else if (n%3==0) return false;
  else {
    int f = 5;
    int r = sqrt(n);
    while(f<=r) {
      if(n%f==0) return false;
      else if(n%(f+2)==0) return false;
      f+=6;
    }
  }
  return true;
}

#endif
