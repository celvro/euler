#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
  int num = 0, j = 0;
  int f=0;
  
  while(f<500)
  {
    j++;
    f = 0;
    num = num+j;
    for(int i=1; i<sqrt(num); i++)
    {
      if(num%i==0)
        f+=2;
    }
  }
  
  cout << num << endl;
  
  return 0;
}
