
#ifndef SENSORES_H
#define SENSORES_H

#include <string>

/**
  * class sensores
  * 
  */

class sensores
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  sensores ( );

  /**
   * Empty Destructor
   */
  virtual ~sensores ( );

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
  void setSensorAnalogico ( )
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

  float sensorAnalogico;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of sensorAnalogico
   * @param new_var the new value of sensorAnalogico
   */
  void setSensorAnalogico ( float new_var )   {
      sensorAnalogico = new_var;
  }

  /**
   * Get the value of sensorAnalogico
   * @return the value of sensorAnalogico
   */
  float getSensorAnalogico ( )   {
    return sensorAnalogico;
  }
private:


  void initAttributes ( ) ;

};

#endif // SENSORES_H
