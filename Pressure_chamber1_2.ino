#include <AMS.h>

float Atm_Pressure1; // Atmospheric pressure of the first chamber 
float Atm_Pressure2; // Atmospheric pressure of the second chamber
float Pressure_Diff; // Pressure difference between the two chambers
String pressure1String; // String to hold formatted pressure data for Chamber 1
String pressure2String; //  Chamber 2
String pressureDiffString; // pressure difference data

char pressure1[48]; // we get pressure and tempreature data thats why 48 bite
char pressure2[48];
char pressureDiff[48];
AMS AMSa(5915, 0x28, -1000, 1000);

void setup() 
{
  // Set the serial port's baud rate. The COM port's standard parameters are: Data
  // bits: 8, Parity: none, Stop bits: 1, Flow control: none, Baud rate: 9600
  Serial.begin(9600);
}
void loop() 
{
  Serial.println("Which chamber data do you need?");
  Serial.println("Enter '1' for Chamber 1");
  Serial.println("Enter '2' for Chamber 2");
  Serial.println("Enter '3' for Diff_pressure value");

  while (!Serial.available()) {
    // Wait for user input
  }
//Read user's input 
  char chosen_mode = Serial.read();
  Serial.println(chosen_mode);
//check user's choice 
if(chosen_mode == '1')
{  
  if (AMSa.Available())
   {
    // Read pressure1 data 
    Atm_Pressure1 = AMSa.readPressure();
    if (isnan(Atm_Pressure1)) {
      // Use Serial.println for better formatting
      Serial.println("Please check the sensor family name.");
    } 
    else 
    {
      pressure1String = "Chamber 1 Atmospheric Pressure: " + String(Atm_Pressure1) + "mbar";
     pressure1String.toCharArray(pressure1, 48); // data string to char array 
      // Use Serial.println for better formatting
      Serial.println(pressure1String);
    }
  } 
  else 
  {
    // Use Serial.println for better formatting
    Serial.println("The sensor for Chamber 2 didn't answer");
  }
}
else if (chosen_mode == '2')
{  
  if (AMSa.Available())
   {
    // Read pressure1 data 
    Atm_Pressure2 = AMSa.readPressure();
    if (isnan(Atm_Pressure2)) {
      // Use Serial.println for better formatting
      Serial.println("Please check the sensor family name.");
    } 
    else 
    {
      pressure2String = "Chamber 2 Atmospheric Pressure: " + String(Atm_Pressure2) + "mbar";
     pressure2String.toCharArray(pressure2, 48); // data string to char array 
      // Use Serial.println for better formatting
      Serial.println(pressure2String);
    }
  } 
  else 
  {
    // Use Serial.println for better formatting
    Serial.println("The sensor for Chamber 2 didn't answer");
  }
}
else if ( chosen_mode == '3')
 {
  if (AMSa.Available())
   {
    // Read pressure1 data 
    Pressure_Diff = AMSa.readPressure();
    if (isnan(Pressure_Diff)) {
      // Use Serial.println for better formatting
      Serial.println("Please check the sensor family name.");
    } 
    else 
    {
      pressureDiffString = "Differential Pressure: " + String(Pressure_Diff) + "mbar";
      pressureDiffString.toCharArray(pressureDiff, 48); // data string to char array 
      // Use Serial.println for better formatting
      Serial.println(pressureDiffString);
    }
  } 
else
 {
        Serial.println("The sensor didn't answer for pressure difference");
    }
}
else 
{
  Serial.println("Invalid choice. Please enter '1', '2', or '3'.");
}

  // Delay after each loop iteration
  delay(5000);
}

