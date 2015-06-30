
#ifndef ARMAALARMA_H
#define ARMAALARMA_H
#include "ControlUsuario.h"
#include "ControlarSistema.h"

#include <string>
#include vector



/**
  * class ArmaAlarma
  * 
  */

class ArmaAlarma : public ControlUsuario, public ControlarSistema
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ArmaAlarma ( );

  /**
   * Empty Destructor
   */
  virtual ~ArmaAlarma ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void establecerNivelDisparo ( )
  {
  }


  /**
   * @param  ledArmado
   */
  void activarIndicadorArmadoAlarma (int ledArmado = 0 )
  {
  }


  /**
   * @param  sensor
   */
  void controlFuncionamiento (Sensor sensor )
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  int ledArmado;
  Sensor sensor;
  int ledFuncionamiento;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ledArmado
   * @param new_var the new value of ledArmado
   */
  void setLedArmado ( int new_var )   {
      ledArmado = new_var;
  }

  /**
   * Get the value of ledArmado
   * @return the value of ledArmado
   */
  int getLedArmado ( )   {
    return ledArmado;
  }

  /**
   * Set the value of sensor
   * @param new_var the new value of sensor
   */
  void setSensor ( Sensor new_var )   {
      sensor = new_var;
  }

  /**
   * Get the value of sensor
   * @return the value of sensor
   */
  Sensor getSensor ( )   {
    return sensor;
  }

  /**
   * Set the value of ledFuncionamiento
   * @param new_var the new value of ledFuncionamiento
   */
  void setLedFuncionamiento ( int new_var )   {
      ledFuncionamiento = new_var;
  }

  /**
   * Get the value of ledFuncionamiento
   * @return the value of ledFuncionamiento
   */
  int getLedFuncionamiento ( )   {
    return ledFuncionamiento;
  }
private:


  void initAttributes ( ) ;

};

#endif // ARMAALARMA_H
