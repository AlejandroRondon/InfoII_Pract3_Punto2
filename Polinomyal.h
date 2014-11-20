#ifndef POLINOMYAL_H
#define POLINOMYAL_H
#include <iostream>     // std::cout
#include <complex>
//#include <complex>      // std::complex
using namespace std;
class Polinomyal
{
    private:
        int grade;
        float *poly;

    public:

        Polinomyal();
        Polinomyal(const Polinomyal&);
        Polinomyal(float ,float );
        Polinomyal(float ,float ,float );
        friend ostream& operator <<(ostream &o,const Polinomyal mypoly);    //friend: With this WORD this method will can to access to the private attributes
        float Eval(float);
        void getRoots(complex<float>*);
        void operator =(Polinomyal);
        int Getgrade();
        void Setgrade(int);

    protected:

};
/*a) El metodo ´ Eval que permita evaluar el polinomio en cualquier numero real ´ x, es decir, si x es una
ra´ız del polinomio, Eval(x) debe retornar 0.
b) El metodo ´ GetRoots que permita obtener todas las ra´ıces del polinomio (complejas y reales).
c) Implemente el constructor copia para la clase Polinomio.
d) Implemente el operador de asignacion ( ´ =) para permitir la asignacion de polinomios. ´
e) Implemente el operador (<<) para imprimir un objeto de la clase Polynomial*/



#endif // POLINOMYAL_H
