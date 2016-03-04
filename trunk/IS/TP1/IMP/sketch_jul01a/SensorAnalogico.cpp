/*
  SensorAnalogico.cpp - Librería para adquirir sensor analógico,
  hereda de la clase Sensores.
  Creado por Luis Guanuco. 02 de Julio de 2015.
*/

#include "Arduino.h"
#include "SensorAnalogico.h"

SensorAnalogico::SensorAnalogico(int pin_number):Sensores(pin_number)
{
}

int SensorAnalogico::getValor()
{
  return _valor;
}

void SensorAnalogico::updateValor()
{
  _valor = analogRead(pin_number);
}

void SensorAnalogico::setConectado()
{
  if(getValor() > 500)
	_conectado = LOW;
  else
	_conectado = HIGH;
}
