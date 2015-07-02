/*
  Boton.h - Librería para manejar los botones
  Creado por Leandro Alem. 30 de Junio de 2015   
*/

#ifndef Boton_h
#define Boton_h

#include "Arduino.h"

class Boton {
private:
 int _pin;
 bool _estado_actual;
 bool _estado_anterior;
 bool _boton_activado;
 unsigned long _tiempo;
 unsigned long _tiempo_antirrebote;
 
public:
 Boton(int pin_number);
 bool getEstado();    // obtiene el estado actual   
 bool getBoton ();    // obtiene si está activado o no
  void RunBoton (void);
};

#endif

