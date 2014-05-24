#include<iostream>
#include<boost/lexical_cast.hpp>
#include<string.h>
using namespace std;

int main()
{
  int max = 111111;
  for(int i=990; i>0; i-=11)
  {
    for(int j=999; j>0; j--)
    {
      string s( boost::lexical_cast<string>( i*j ) );
      string reverse( s.rbegin(), s.rend() );
      if(i*j>max && !strcmp(s.c_str(), reverse.c_str()))
      {
        max = i*j;
      }
    }
  }
  
  cout << max << endl;
  
  return 0;
}
