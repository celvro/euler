#include<iostream>
using namespace std;

const int SIZE=10000;

int sum_of_divisors( int num )
{
  int sum=1;
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      if(i*i==n)
        sum+=i;
      else
        sum+=i+n/i;
    }
  }
  return sum;
}

int main(){
  int sum=0;
  for(int i=1; i<SIZE; i++){
    for(int j=i+1; j<SIZE; j++){
      if(sum_of_divisors(i)==j && sum_of_divisors(j)==i){
        cout<<i<<":"<<sum_of_divisors(i)<<endl;
        sum += i + j;
      }
    }
  }
  cout << sum;
  return 0;
}
