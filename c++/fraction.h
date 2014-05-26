#ifndef FRACTION_H
#define FRACTION_H

class Fraction{
  public:
    int nom;
    int denom;
    Fraction(){
      nom=0; denom=1;
    }
    Fraction(int a, int b){
      nom=a; denom=b;
    }
    void simplify(){
      int gcd = getGCD( nom, denom );
      nom /= gcd;
      denom /= gcd;
    }
    void multiply( Fraction &f ){
      nom *= f.nom;
      denom *= f.denom;
      simplify();
    }
    int getGCD( int a, int b ){
      while( a!=b ){
        if( a>b )
          a=a-b;
        else
          b=b-a;
      }
      return a;
    }
    bool operator== ( Fraction &f){
      f.simplify(); simplify();
      if( f.nom==nom && f.denom==denom)
        return true;
      return false;
    }
};

#endif
