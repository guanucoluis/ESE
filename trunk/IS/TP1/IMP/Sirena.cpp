/*
  Sirena.cpp - Librería para manejar la sirena, hereda de los periféricos de salida.
  Creado por Leandro Alem. 30 de Junio de 2015.
*/

#include "Arduino.h"
#include "Sirena.h"

Sirena::Sirena(int pin_number):PerifericosSalida(pin_number)
{
	_toggle_sirena = 0;
 _tiempo = 0;
 _tiempo_delay = 300;
}

void Sirena::RunEstado (void) 
{
  if ( getEstado() )
  {
    if ((millis() - _tiempo) > (_tiempo_delay))
    {
      _tiempo = millis();
      _toggle_sirena = !_toggle_sirena;
      digitalWrite(getPin(), _toggle_sirena);
    }
  }
  else
  {
    digitalWrite(getPin(),1);
  }
  return;
}




