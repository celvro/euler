#include<iostream>
using namespace std;

bool isPandigital( int a, int b, int c ){
  bool numbers[] = {0,0,0,0,0,0,0,0,0,0};
  //int a
  while( a > 0 ){
    int r=a%10;
    if( numbers[r] )
      return false;
    numbers[r]=true;
    a/=10;
  }
  //b
  while( b > 0 ){
    int r=b%10;
    if( numbers[r] )
      return false;
    numbers[r]=true;
    b/=10;
  }
  while( c > 0 ){
    int r=c%10;
    if( numbers[r] )
      return false;
    numbers[r]=true;
    c/=10;
  }
  for( int i=1; i<10; i++ )
    if( !numbers[i] )
      return false;
  return true;
}

int main(){
  double sum=0;
  bool used[100000];
  for(int i=0; i<100000; i++)
    used[i]=0;
  for(int i=1; i<99; i++){
    
    int j, end;
    if( i<10 ){
      j=1000;
      end=4550;
    }
    else{
      j=100;
      end=999;
    }
  
    for(j; j< end; j++)
      for(int k=3; k<9999; k++)
        if( i*j==k && !used[k] && isPandigital( i, j, k) ){
          cout<<i<<" "<<j<<" "<<k<<endl;
          used[k]=1;
          sum+= static_cast<double>(k);
        }
  }
          
  cout<<sum<<endl;
  return 0;
}
