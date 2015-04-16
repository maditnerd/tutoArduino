//Deux libraries sont necessaires (a copier dans documents/arduino/libraries)
#include <OneWire.h>
#include <DallasTemperature.h>


//Le capteur de temperature est branche sur D2 (voir schéma)
//On peut utiliser n'importe quel entrée
//Ce capteur utilise le systeme OneWire (Un cable) qui permet de relier plusieurs capteurs sur un meme cable 
#define ONE_WIRE_BUS 2

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

void setup(void)
{
  // start serial port
  Serial.begin(9600);
  Serial.println("Test du capteur de temperature Dallas DS18B20");

  // Start up the library
  sensors.begin();
}

void loop(void)
{ 
  // call sensors.requestTemperatures() to issue a global temperature 
  // request to all devices on the bus
  Serial.print("Recuperation des temperatures...");
  sensors.requestTemperatures(); // Send the command to get temperatures
  Serial.println("DONE");
  
  Serial.print("La temperature pour le device 1 (index 0) est: ");
  Serial.print(sensors.getTempCByIndex(0));
  Serial.println(" C");
}
