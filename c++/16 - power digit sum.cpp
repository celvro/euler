//16.cpp sum of digits

#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> num;
  num.push_back( 1 );
  for(int i=0; i<1000; i++){
    int carry = 0;
    
    for(vector<int>::iterator iter = num.begin(); iter != num.end(); iter++){
      *iter = *iter * 2 + carry;
      if( *iter > 9 && iter+1 != num.end() ){
        *iter -= 10;
        carry = 1;
      }
      else if( *iter>9 && iter+1 == num.end() ){
        *iter -= 10;
        num.push_back(1);
        break;
      }
      else if( *iter<=9 )
        carry=0;
    }
  }
  int sum = 0;
  for( vector<int>::iterator iter=num.begin(); iter!=num.end(); iter++ ){
    cout << *iter;
    sum+=*iter;
  }
  cout << endl << sum << endl;
  
  return 0;
}
