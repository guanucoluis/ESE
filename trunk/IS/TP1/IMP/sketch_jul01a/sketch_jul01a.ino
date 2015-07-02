//#include "PerifericosSalida.h"
#include "Boton.h"
#include "Led.h"
#include "Sirena.h"

Led led_encendido(13);
Sirena sirena (10);
Boton bot1(5);

void setup() {
  //led_encendido.setEstado(0);

}

void loop() {


  switch(MaqEstado)
  {
    case dConfigurar:
    {
      if(DispositivoDeControl.configurar());
      {
        DispositivoDeControl.activarAlarma();
        MaqEstado = dActivada;
      }
      else
        MaqEstado = dSensNoDisp;
      break;
    }
    case dSensNoDisp:
    { 
      if ((millis() - tiempo1_interm_led_amarillo) > 5000)  // 5 segundos
        {
          tiempo1_interm_led_amarillo = millis();
          toggle_led_amarillo = !toggle_led_amarillo;
          digitalWrite(led_amarillo.getPin(), toggle_led_amarillo);
        }
      MaqEstado = dConfigurar;
      break;
    }
    case dActivada:
    {
      
      break;
    }
    default:
    {
      break;
    }
  }
  
  //led_encendido.setEstado(1);
  //delay(2000);
  //led_encendido.setEstado(0);
  //delay(2000);

  //led_encendido.setEstado(!led_encendido.getEstado());
  //delay(2000);

  led_encendido.setEstado(bot1.getBoton());
   sirena.setEstado(bot1.getBoton());

  // Ejecutar periodicamente
  bot1.RunBoton();
  sirena.RunEstado();
  led_encendido.RunEstado();

  //if (digitalRead(7))
    //led_encendido.setEstado(1);
  //else
    //led_encendido.setEstado(0);
    
}
