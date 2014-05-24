#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

const int SIZE=100;

int main()
{
  ifstream in;
  in.open("18.txt");
  int tri[SIZE][SIZE];
  
  for(int i=0; i<SIZE; i++){
    for(int j=0; j<SIZE; j++){
      tri[i][j] = 0;
    }    
  }
  
  for(int i=0; i<SIZE; i++){
    for(int j=0; j<=i; j++){
      in >> tri[i][j];
    }    
  }
  
  for(int i=SIZE-2; i>=0; i--){
    for(int j=0; j<SIZE-2; j++){
      if(tri[i+1][j] > tri[i+1][j+1])
        tri[i][j] += tri[i+1][j];
      else
        tri[i][j] += tri[i+1][j+1];
    }
  }
  
  cout << tri[0][0];
  
  in.close();
  return 0;
}
