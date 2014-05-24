#include<iostream>
using namespace std;

int main()
{
  int c=0;
  for(int a=1; a<=500; a++){
    for(int b=1; b<=500; b++){
      c=1000-a-b;
      if(a*a+b*b==c*c){
        cout << a*b*c;
        cin.get();
        return 0;
      }
    }
  }
}
