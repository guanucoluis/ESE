
#ifndef CONTROLARSISTEMA_H
#define CONTROLARSISTEMA_H
#include "ControlUsuario.h"

#include <string>

/**
  * class ControlarSistema
  * 
  */

class ControlarSistema : public ControlUsuario
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ControlarSistema ( );

  /**
   * Empty Destructor
   */
  virtual ~ControlarSistema ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  ledEncendido
   */
  void apagarSistema (void ledEncendido )
  {
  }


  /**
   * @param  sirena
   * @param  luzAlarma
   */
  void apagarIndicadoresAlarma (int sirena, int luzAlarma )
  {
  }


  /**
   */
  void ponerAlarmaPosicionArmado ( )
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

  int ledEncendido;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ledEncendido
   * @param new_var the new value of ledEncendido
   */
  void setLedEncendido ( int new_var )   {
      ledEncendido = new_var;
  }

  /**
   * Get the value of ledEncendido
   * @return the value of ledEncendido
   */
  int getLedEncendido ( )   {
    return ledEncendido;
  }
private:


  void initAttributes ( ) ;

};

#endif // CONTROLARSISTEMA_H
