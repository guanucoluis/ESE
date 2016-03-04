/*
  Sensores.cpp - Librería para manejar los sensores
  Creado por Luis Guanuco. 02 de Julio de 2015.
*/

#include "Arduino.h"
#include "Sensores.h"

Sensores::Sensores(int pin_number)
{
  _pin = pin_number;
  _valor = 0;
  _conectado = LOW,
}

int Sensores::getValor()
{
}

void Sensores::updateValor() 
{
}

void setConectado()
{
}

bool Sensores::detectarConexion()
{
  if(_conectado == HIGH)
	return HIGH;
  else
	return LOW;
}

