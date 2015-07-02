/*
  PerifericosSalida.h - Librería para manejar los periféricos de salida
  Creado por Leandro Alem. 30 de Junio de 2015   
*/

#ifndef PerifericosSalida_h
#define PerifericosSalida_h

#include "Arduino.h"

class PerifericosSalida {
private:
 int _pin;
 bool _estado;
 
public:
 PerifericosSalida(int pin_number);
 bool getEstado();   
 void setEstado(bool);
 int getPin(void);
 virtual void RunEstado (void);
};

#endif

