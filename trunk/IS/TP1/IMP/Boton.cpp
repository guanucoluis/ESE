/*
  PerifericosSalida.cpp - Librería para manejar los periféricos de salida.
  Creado por Leandro Alem. 30 de Junio de 2015.
*/

#include "Arduino.h"
#include "Boton.h"

Boton::Boton(int pin_number)
{
  pinMode(pin_number, INPUT);
  _pin = pin_number;
  _tiempo_antirrebote = 50;
  _estado_anterior=1;
  _estado_actual=1;
  _boton_activado=0;
}

bool Boton::getEstado()
{
  return _estado_actual;
}

bool Boton::getBoton()
{
  return _boton_activado;
}

void Boton::RunBoton ()   // debe llamarse periodicamente
{
  bool aux;
  aux = digitalRead(_pin);
  if ( aux != _estado_anterior )
    _tiempo = millis();
  if ((millis() - _tiempo) > (_tiempo_antirrebote))
  {
     if (aux != _estado_actual)
     {
        _estado_actual = aux;
        if (_estado_actual == HIGH)
        _boton_activado = !_boton_activado;  
    }
  }
  _estado_anterior = aux;
}


