#include<iostream>
#include"fraction.h"
using namespace std;

bool isCancelling( Fraction &f ){
  int a1=f.nom/10, a2=f.nom%10;
  int b1=f.denom/10, b2=f.denom%10;
  Fraction one( a1, b2);
  Fraction two( a2, b1);
  
  if( one==f || two==f )
    return true;
  return false;
}

int main(){
  Fraction prod(1,1);
  for(int i=10; i<99; i++){
    if(i%10 && i%10!=i/10){
      for(int j=i%10*10+1; j<10*(i%10+1); j++){
        Fraction f( i, j );
        if( isCancelling(f) ){
          prod.multiply( f );
        }
      }
    }
  }
  prod.simplify(); 
  cout << prod.denom<<endl;  
  return 0;
}
