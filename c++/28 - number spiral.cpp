#include<iostream>
using namespace std;

const int SIZE=1001;

int main(){
  long num=1,sum=1,interval=2;
  while(num<SIZE*SIZE){
    for(int i=0; i<4; i++){
      num+=interval;
      sum+=num;
    }
    interval+=2;
  }
  cout<<sum;
}

