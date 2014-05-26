#include<iostream>
#include<time.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include"prime.h"
using namespace std;

bool isCircular( int n ){
  if(!isPrime(n))
    return false;
  vector<int> perm;  
  while( n>0 ){
    perm.insert( perm.begin(), n%10 );
    n/=10;
  }
  for(int j=0; j<perm.size(); j++){
    int num=0;
    for(int i=0; i<perm.size(); i++){
      num+=perm[i]* pow(10, perm.size()-(i+1));
    }
    if(!isPrime(num))
      return false;
    perm.push_back(perm.front());
    perm.erase( perm.begin() );
  }
  return true;
}

int main(){
  clock_t start=clock();
  int count=0;
  for(long i=1; i<1000000; i++){
    if( isCircular(i) ){
      cout<<i<<endl;
      count++;
    }
  }
  cout<<"Count: "<<count<<endl;
  cout<<"Time: "<<static_cast<float>(clock()-start)/CLOCKS_PER_SEC<<" sec"<<endl;
}

