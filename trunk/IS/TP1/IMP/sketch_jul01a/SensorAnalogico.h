/*
  Led.cpp - Librería para manejar los leds, heredan de perifericos salida.
  Creado por Leandro Alem. 30 de Junio de 2015.
*/

#ifndef __LED_H__
#define __LED_H__

#include "Arduino.h"
#include "PerifericosSalida.h"

class Led : public  PerifericosSalida
{
  public:
  Led(int pin_number);

};

#endif //__LED_H__



