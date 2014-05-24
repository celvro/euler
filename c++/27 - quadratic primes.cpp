#include<iostream>
#include"prime.h"
using namespace std;

int main(){
  int aMax=0,bMax=0,nMax=0;
  for(int a=-1000; a<=1000; a++){
    for(int b=0; b<=1000; b++){
      int n=0;
      while(isPrime(abs(n*n+a*n+b)))
        n++;
      if(n > nMax){
        aMax=a;
        bMax=b;
        nMax=n;
      }
    }
  }
  cout<<aMax*bMax;
}
