
#ifndef CONTROLARDISPARO_H
#define CONTROLARDISPARO_H

#include <string>

/**
  * class ControlarDisparo
  * 
  */

class ControlarDisparo
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ControlarDisparo ( );

  /**
   * Empty Destructor
   */
  virtual ~ControlarDisparo ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  indicadorLuminoso
   */
  void controlarNivel (int indicadorLuminoso )
  {
  }


  /**
   * @param  sirena
   */
  void enciendeApagaSirena (int sirena )
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

  int sirena;
  int indicadorLuminoso;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of sirena
   * @param new_var the new value of sirena
   */
  void setSirena ( int new_var )   {
      sirena = new_var;
  }

  /**
   * Get the value of sirena
   * @return the value of sirena
   */
  int getSirena ( )   {
    return sirena;
  }

  /**
   * Set the value of indicadorLuminoso
   * @param new_var the new value of indicadorLuminoso
   */
  void setIndicadorLuminoso ( int new_var )   {
      indicadorLuminoso = new_var;
  }

  /**
   * Get the value of indicadorLuminoso
   * @return the value of indicadorLuminoso
   */
  int getIndicadorLuminoso ( )   {
    return indicadorLuminoso;
  }
private:


  void initAttributes ( ) ;

};

#endif // CONTROLARDISPARO_H
