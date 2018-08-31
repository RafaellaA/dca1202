#include <iostream>
#include <cmath>
#include "vetor.h"

using namespace std;

// implementacao do metodo setX
// no ESCOPO (::) da classe Vetor
Vetor::Vetor(){
  x = 0;
  y = 0;
  cout << "chamou o construtor\n";
}

void Vetor::setX(float mx){
  x = mx;
}

float Vetor::getX(void){
  return x;
}

void Vetor::setY(float my){
  y = my;
}

float Vetor::getY(void){
  return y;
}

float Vetor::tamanho(void){
  return sqrt(x*x+y*y);
}

float Vetor::angulo(void){
  return 180.0/3.1415*atan(y/x);
}

Vetor Vetor::unitario(void){
  Vetor ret;
  ret.x = x / tamanho();
  ret.y = y / tamanho();
  return ret;
}

void Vetor::print(void){
  cout << "(" << x << ","
       << y << ")";
}

float Vetor::escalar(Vetor v2){
  return x*v2.x+y*v2.y;
}

Vetor Vetor::soma(Vetor v2){
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return ret;
}




