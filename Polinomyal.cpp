#include "Polinomyal.h"
#include <iostream>
#include <math.h>
#include <complex>
Polinomyal::Polinomyal()
{
    poly = new float[1];
    grade=0;
    poly[0]=0;
}

Polinomyal::Polinomyal(float A,float B){
    poly = new float[2];
    grade=1;
    poly[0]=A;
    poly[1]=B;
   // std::cout << "P1(x)="<< poly[0] <<"X+"<<poly[1]<<endl;
}
Polinomyal::Polinomyal(float A,float B,float C){
    poly = new float[3];
    grade=2;
    poly[0]=A;
    poly[1]=B;
    poly[2]=C;
    //std::cout << "consP2(x)="<< poly[0] <<"X^2+"<<poly[1]<<"X+"<<poly[2]<<endl;
}

Polinomyal::Polinomyal(const Polinomyal& mypoly){
    int i;
    this->grade = mypoly.grade;
    poly = new float[3];
    for(i=0;i<=this->grade;i++){
        poly[i]= mypoly.poly[i];
    }
    //std::cout << "consP2toCopy(x)="<< mypoly.poly[0] <<"X^2+"<<mypoly.poly[1]<<"X+"<<mypoly.poly[2]<<endl;

   // std::cout << "consP2Copy(x)="<<poly[0] <<"X^2+"<<poly[1]<<"X+"<<poly[2]<<endl;
}

void Polinomyal::operator =(Polinomyal mypoly){

    int i;
    this->grade = mypoly.grade;
    poly = new float[3];
    for(i=0;i<=grade;i++){
        poly[i]= mypoly.poly[i];
    }

}
float Polinomyal::Eval(float x){
    int i;
    float temp=0;
    for(i=0;i<= grade;i++){
        temp += poly[i]* pow(x,grade-i);
    }
    return temp;


}
void Polinomyal::getRoots(complex<float>* temp){
    float valA,valB,valC,valX1,valX2,real,imag;
    valA = poly[0];
    valB = poly[1];
    valC = poly[2];
    float discri =  pow(valB,2)- 4*valA*valC;
    if(discri >= 0){
        valX1 =( (-valB) +sqrt(discri))/ (2*valA);
        valX2 =( (-valB) -sqrt(discri))/ (2*valA);
        temp[0]=valX1;
        temp[1]=valX2;
    }else{
        real = (-valB)/(2*valA);
        real = rint(real*100)/100;
        imag = (sqrt(discri*-1))/(2*valA);
        imag = (rint(imag*100)/100);
        temp[0].real(real);
        temp[1].real(real);
        temp[0].imag(imag);
        temp[1].imag(imag);

    }


}
ostream& operator <<(ostream &o,Polinomyal mypoly)
{
    if(mypoly.grade == 2){
            o  << "P(x)=" << mypoly.poly[0] << "X^2+" << mypoly.poly[1] << "X+" <<mypoly.poly[2];
    }else if(mypoly.grade == 1){
            o  << "P(x)=" << mypoly.poly[0] << "X+" <<mypoly.poly[1];
    }if(mypoly.grade == 0){
            o  << "P(x)=" << mypoly.poly[0] ;
    }

    return o;
}

int Polinomyal::Getgrade()
{
    return grade;
}

void Polinomyal::Setgrade(int val) {
    grade = val;
}
