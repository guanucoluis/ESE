/*
  SensorAnalogico.h -  - Librería para adquirir sensor analógico,
  hereda de la clase Sensores.
  Creado por Luis Guanuco. 02 de Julio de 2015.
*/

#ifndef __SENSORANALOGICO_H__
#define __SENSORANALOGICO_H__

#include "Arduino.h"
#include "Sensores.h"

class SensorAnalogico : public  Sensores
{
 private:
  int _valor; //Re-defino tipo  a INT
  
 public:
  SensorAnalogico(int pin_number);
  int getValor(void); //Re-defino el retorno
  void updateValor(void);
  void setConectado(void);
};

#endif //__SENSORANALOGICO_H__
