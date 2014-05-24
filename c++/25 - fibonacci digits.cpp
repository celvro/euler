#include<iostream>
using namespace std;

int num_digits( int n ){
  int num=0;
  while(n>=1){
    n/=10;
    num++;
  }
  return num;
}

int main(){
  cout<<num_digits(1200);
}
