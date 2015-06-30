
#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include vector



/**
  * class Sensor
  * 
  */

class Sensor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Sensor ( );

  /**
   * Empty Destructor
   */
  virtual ~Sensor ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  sensorAnalogico
   */
  void setSensorAnalogico (SensorAnalogico sensorAnalogico )
  {
  }


  /**
   * @param  sensorDigital
   */
  void setSensorDigital (SensorDigital sensorDigital )
  {
  }


  /**
   * @return SensorAnalogico
   */
  SensorAnalogico getSensorAnalogico ( )
  {
  }


  /**
   * @return SensorDigital
   */
  SensorDigital getSensorDigital ( )
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

  SensorAnalogico sensorAnalogico;
  SensorDigital sensorDigital;
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
  void setSensorAnalogico ( SensorAnalogico new_var )   {
      sensorAnalogico = new_var;
  }

  /**
   * Get the value of sensorAnalogico
   * @return the value of sensorAnalogico
   */
  SensorAnalogico getSensorAnalogico ( )   {
    return sensorAnalogico;
  }

  /**
   * Set the value of sensorDigital
   * @param new_var the new value of sensorDigital
   */
  void setSensorDigital ( SensorDigital new_var )   {
      sensorDigital = new_var;
  }

  /**
   * Get the value of sensorDigital
   * @return the value of sensorDigital
   */
  SensorDigital getSensorDigital ( )   {
    return sensorDigital;
  }
private:


  void initAttributes ( ) ;

};

#endif // SENSOR_H
