#include<iostream>
#include<fstream>
using namespace std;

int main() 
{
  int matrix[20][20];
  int max = 0;
  int a, b, c, d;
  
  
  for(int i=0; i<20; i++)
  {
    for(int j=0; j<20; j++)
    {
      matrix[i][j] = 0;
    }
  }
  
  ifstream file("11.txt");
  
  for(int i=0; i<20; i++)
  {
    for(int j=0; j<20; j++)
    {
      file >> matrix [i][j];
    }
  }
  
  file.close();
  
  //horizontal
  for(int i=0; i<20; i++)
  {
    for(int j=0; j<17; j++)
    {
      a = matrix[i][j];
      b = matrix[i][j+1];
      c = matrix[i][j+2];
      d = matrix[i][j+3];
      
      if(a*b*c*d > max)
        max = a*b*c*d;
    }
  }
  
  //vertical
  for(int i=0; i<17; i++)
  {
    for(int j=0; j<20; j++)
    {
      a = matrix[i][j];
      b = matrix[i][j+1];
      c = matrix[i][j+2];
      d = matrix[i][j+3];
      
      if(a*b*c*d > max)
        max = a*b*c*d;
    }
  }
  
  //diagonal right
  for(int i=0; i<17; i++)
  {
    for(int j=0; j<17; j++)
    {
      a = matrix[i][j];
      b = matrix[i+1][j+1];
      c = matrix[i+2][j+2];
      d = matrix[i+3][j+3];
      
      if(a*b*c*d > max)
        max = a*b*c*d;
    }
  }
  
  //diagonal left
  for(int i=0; i<17; i++)
  {
    for(int j=3; j<20; j++)
    {
      a = matrix[i][j];
      b = matrix[i+1][j-1];
      c = matrix[i+2][j-2];
      d = matrix[i+3][j-3];
      
      if(a*b*c*d > max)
        max = a*b*c*d;
    }
  }
  
  cout << max << endl;
  
  return 0;
}
