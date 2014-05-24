#include<iostream>
using namespace std;

int lcm(int a, int b)
{
  for(int i=1; ; i++)
    if(i%a==0 && i%b ==0)
      return i;
}

int main()
{
  int ans = 1;
  
  for(int i=1; i<=20; i++)
  {
    ans = lcm(i, ans);
  }
  
  cout << ans << endl;
  
  return 0;
}
    
