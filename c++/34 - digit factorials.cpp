#include<iostream>
#include<time.h>
using namespace std;

bool isDigitFactorial( int n ){
  int fact[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
  int sum=0, N=n;
  while( n>0 ){
    sum+=fact[ n%10 ];
    n/=10;
  }
  return (N==sum)?true:false;
}

int main(){
  clock_t start=clock();
  int sum=0;
  for( long i=3; i<999999; i++)
  {
    if( isDigitFactorial(i) ){
      cout<<i<<endl;
      sum+=i;
    }
  }
  cout<<sum<<endl;
  cout<<"Time took: "<<static_cast<float>(clock()-start)/CLOCKS_PER_SEC<<"sec"<<endl;
}
