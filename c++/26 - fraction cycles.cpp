#include<iostream>
using namespace std;

int main(){
  int length=0;
  
  for(int i=1000; i>1; i--){
    if(length>=i)break;
    int* found = new int[i];
    for(int j=0; j<i; j++)found[j]=0;
    int num=1,count=0;
    while(found[num]==0 && num!=0){
      found[num]=count;
      num=(num*10)%i;
      count++;
    }
    if(count>length)
      length=count;
  }
  
  cout<<length;
}
