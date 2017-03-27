#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float x;
  float y;
public:
//  Vetor(); // construtor padrao (default)
  Vetor(float mx=0, float my=0);
  ~Vetor();
  Vetor(Vetor& copia);
  void setX(float mx);
  float getX(void);
  void setY(float my);
  float getY(void);
  Vetor soma(Vetor v2);
  Vetor soma(float a);
  Vetor subt(Vetor v2);
  float produtoEscalar(Vetor v2);
  void print();

  Vetor operator+ (Vetor v2);
  Vetor operator- (Vetor v2);
  float operator* (Vetor v2);
  Vetor operator* (float a);

  // as duas funcoes seguintes
  // NAO SAO METODOS DA CLASSE VETOR
  friend float modulo(Vetor v1);
  friend Vetor operator*(float a, Vetor v2);

}; // <- nao esqueca do ";"


#endif // VETOR_H
