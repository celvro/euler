#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

const int MAX=50;
const int NUM_LINES=100;

int main()
{
  int array[MAX+10];
  memset(array,0,(MAX+10)*sizeof(int));
  int sum=0;
  char c;
  
  ifstream in("13.txt");
  
  for(int i=0; i<NUM_LINES; i++)
  {
    for(int j=0; j<MAX; j++)
    {
      c = in.get();
      if(c-'0'>=0 && c-'0'<=9)
        array[j+10] += c-'0';
    }
    in.ignore(256,'\n');
  }
  
  for(int i=MAX+10; i>=0; i--)
  {
    if(array[i] > 9&&i!=0){
      array[i-1] += array[i]/10;
      array[i] %= 10;
    }
  }
  
  int i=0;
  for(i=0;array[i]==0;i++);
  for(int j=0; j<10; j++)
  {
    cout<<array[i]<<" ";
    i++;
  }
  
  in.close();
  
  return 0;
}
