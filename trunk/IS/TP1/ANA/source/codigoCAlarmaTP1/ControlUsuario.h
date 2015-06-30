
#ifndef CONTROLUSUARIO_H
#define CONTROLUSUARIO_H
#include "ControlarSistema.h"

#include <string>
#include vector



/**
  * class ControlUsuario
  * 
  */

class ControlUsuario : public ControlarSistema
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ControlUsuario ( );

  /**
   * Empty Destructor
   */
  virtual ~ControlUsuario ( );

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
  void enciendeAlarma (int ledEncendido )
  {
  }


  /**
   * @param  ledEncendido
   */
  void apagaAlarma (int ledEncendido )
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

  int ledEncedido;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ledEncedido
   * @param new_var the new value of ledEncedido
   */
  void setLedEncedido ( int new_var )   {
      ledEncedido = new_var;
  }

  /**
   * Get the value of ledEncedido
   * @return the value of ledEncedido
   */
  int getLedEncedido ( )   {
    return ledEncedido;
  }
private:


  void initAttributes ( ) ;

};

#endif // CONTROLUSUARIO_H
