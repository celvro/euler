#include<iostream>
using namespace std;

int main()
{
  int sum=0, prev=1, next=2, temp;
  while(next<4000000)
  {
    if(!(next%2))
      sum+=next;
    temp=next;
    next+=prev;
    prev=temp;
  }
  cout << sum << endl;
  cin.get();
  return 0;
}
