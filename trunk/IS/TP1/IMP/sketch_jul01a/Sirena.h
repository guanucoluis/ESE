/*
  Led.cpp - Librería para manejar los leds, heredan de perifericos salida.
  Creado por Leandro Alem. 30 de Junio de 2015.
*/

#ifndef __SIRENA_H__
#define __SIRENA_H__

#include "Arduino.h"
#include "PerifericosSalida.h"

class Sirena : public  PerifericosSalida
{
  private:
    bool _toggle_sirena;
    unsigned long _tiempo;
    unsigned long _tiempo_delay;
	public:
    Sirena(int pin_sirena);
    void RunEstado(void);
};

#endif //__SIRENA_H__



