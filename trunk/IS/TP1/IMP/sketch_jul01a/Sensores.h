/*
  Sensores.h - Librería para manejar los sensores
  Creado por Luis Guanuco. 02 de Julio de 2015   
*/

#ifndef Sensores_h
#define Sensores_h

#include "Arduino.h"

class Sensores {
 private:
  int _pin;
  virtual int _valor;
  bool _conectado;
  
 public:
  Sensores(int pin_number);
  virtual int getValor(void);   
  virtual void updateValor(void);
  virtual void setConectado(void);
  bool detectarConexion(void);
};

#endif
