/*
  PerifericosSalida.cpp - Librería para manejar los periféricos de salida.
  Creado por Leandro Alem. 30 de Junio de 2015.
*/

#include "Arduino.h"
#include "PerifericosSalida.h"

PerifericosSalida::PerifericosSalida(int pin_number)
{
  pinMode(pin_number, OUTPUT);
  _pin = pin_number;
}

bool PerifericosSalida::getEstado()
{
  return _estado;
}

void PerifericosSalida::setEstado (bool estado_set) 
{
  _estado = estado_set;
}

void PerifericosSalida::RunEstado (void)
{
  digitalWrite(_pin, _estado);
  return;
}

int PerifericosSalida::getPin()
{
  return _pin;
}



