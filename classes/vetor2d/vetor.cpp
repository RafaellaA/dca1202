#include "vetor.h"
#include <iostream>
#include <cmath>

using namespace std;

/*
Vetor::Vetor(){
  x = y = 0;
  cout << "construtor padrao\n";
}*/

Vetor::Vetor(float mx, float my){
  x = mx;
  y = my;
//  cout << "construtor com argumentos\n";
}

Vetor::Vetor(Vetor &copia){
  x = copia.x;
  y = copia.y;
//  cout << "construtor de copia\n";
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

Vetor::~Vetor(){
//  cout << "destrutor" << endl;
}

Vetor Vetor::soma(Vetor v2){
  Vetor v3;
  v3.x = x + v2.x;
  v3.y = y + v2.y;
  return(v3);
}

// sobrecarga de funcoes
Vetor Vetor::soma(float a){
  Vetor v3;
  v3.x = x + a;
  v3.y = y + a;
  return(v3);
}

Vetor Vetor::subt(Vetor v2){
  Vetor v3;
  v3.x = x - v2.x;
  v3.y = y - v2.y;
  return(v3);
}

float Vetor::produtoEscalar(Vetor v2){
  return(x*v2.x + y*v2.y);
}

void Vetor::print(){
  cout << "(" << x << "," << y << ")";
}

Vetor Vetor::operator+(Vetor v2){
  Vetor v3;
//  cout << "x = " << v2.x << endl;
  v3.x = x + v2.x;
  v3.y = y + v2.y;
//  cout << "v2x = " << v2.x << endl;
  return(v3);
}

Vetor Vetor::operator- (Vetor v2){
  Vetor v3;
  v3.x = x - v2.x;
  v3.y = y - v2.y;
  return(v3);
}

float Vetor::operator* (Vetor v2){
  return(x*v2.x + y*v2.y);
}

Vetor Vetor::operator* (float a){
  Vetor v3;
  v3.x = a*x;
  v3.y = a*y;
  return(v3);
}

Vetor operator*(float a, Vetor v2){
  Vetor v3;
  v3.x = a*v2.x;
//  v3.setX(a*v2.getX());
  v3.y = a*v2.y;
  return(v3);
}

float modulo(Vetor v1){
  float mod;
  mod = sqrt(v1.x*v1.x+v1.y*v1.y);
  return(mod);
}
