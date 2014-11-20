#include <iostream>     // std::cout
//#include <complex>      // std::complex
#include "Polinomyal.h"
#include <complex>

#include<iomanip>


int main ()
{
using namespace std;

Polinomyal myPolgrad1(4,8);
Polinomyal myPolgrad1copy(myPolgrad1);
Polinomyal myPolgrad2(1,4,3);
Polinomyal myPolgrad2copy(myPolgrad2);
Polinomyal myPolgrad22(4,3,22);
float X=2;

/*Learning Complex class
complex<float> Roottry(1,2);
complex<float> a[5];
complex<float>* c;

c=a;
*c=X;*/

complex<float> roots[2];
cout << setprecision(3);
cout << "Printing poly grad 1: " << myPolgrad1 <<endl;
cout << "Printing copy: " << myPolgrad1copy <<endl;
cout << "Printing poly grad 2: " << myPolgrad2 <<endl;
cout << "Printing copy: " << myPolgrad2copy <<endl;

cout << "\n\nPrinting poly grad 22: " << myPolgrad22 <<endl;

myPolgrad2 =  myPolgrad22;


cout << "\n\nPrinting poly grad 2  = 22(after equal operator): " << myPolgrad2 <<endl;

cout <<"eval("<<myPolgrad1 << ","<<X<<")="<<myPolgrad1.Eval(2) <<endl;
cout <<"eval("<<myPolgrad2 << ","<<X<<")="<<myPolgrad2.Eval(2) <<endl;


/*
cout <<"\nprinting random complex x:" <<Roottry;
a[1]=2+4i;
cout <<"\nprinting random complex:a" <<a[1];
c[1]=a[1];
cout <<"\nprinting random complex:c=a" <<c[1];
*/
myPolgrad2.getRoots(roots);
cout <<"\nRoots(" <<myPolgrad2 <<") : X1"<<roots[0] <<" X2"<<roots[1];

cout <<"\nPrinting poly pointer " << *(new Polinomyal(6,8,14));
/*DARD v2*/
Polinomyal* a=  (new Polinomyal(6,72,14));
Polinomyal b=  *(new Polinomyal(4,16,16));

a->getRoots(roots);
cout <<"\nRoots(" <<*a <<") : X1"<<roots[0] <<" X2"<<roots[1];
b.getRoots(roots);
cout<<"\nRoots(" <<b <<") : X1"<<roots[0] <<" X2"<<roots[1];

//cout << "\n" << setprecision(2) <<2.3578<<"\n";
  return 0;
}
