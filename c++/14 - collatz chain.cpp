#include<iostream>
using namespace std;

int collatz(const unsigned long long& x)
{
  if(x==1)
    return 1;
  if(x%2 == 0)
  {
    return 1+collatz(x/2);
  }
  if(x%2 == 1)
  {
    return 1+collatz(3*x + 1);
  }
  return 0;
}

int main()
{
  unsigned long long index = 1;
  
  for(unsigned long long i=1; i<1000000; i++)
  {
    if(collatz(i)>=collatz(index))
    {
      index=i;
    }
  }
  
  cout << index << endl;
  
  return 0;
}
