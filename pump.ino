#define MODE_IDLE 0
#define MODE_CLEANING 1
#define MODE_BREATHING 2
//Pin numbers 
const int pumpPin = 10;  // Pin connected to the relay controlling the pump
const int buttonPin = 11; // Pin connected to the push button
const int startPin = 12; //Pin connected to the start push botton 
//Variables 
int mode = MODE_IDLE;            // Default mode to start the simulation 
int start_mode = MODE_CLEANING;
bool pump_on = false;     // track pump state
//timing variables 
unsigned long last_check_time = 0;  // Variable to store the last time the pump state was checked
unsigned long nowtime;    // Variable to store the current time

unsigned long button_pressed_time = 0;  // Variable to store the last time the pump state was checked
unsigned long start_button_pressed_time = 0;  // Variable to store the last time the pump state was checked



void setup() {
  Serial.begin(9600);  
  pinMode(pumpPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(startPin, INPUT_PULLUP);
  // Initialize the pump to be off
  digitalWrite(pumpPin, LOW);
  
  mode = MODE_IDLE;

  Serial.println("STARTING PET");
}

void loop() {
  // Check the mode when the button is pressed
  if (digitalRead(buttonPin) == LOW) {
    
    if((millis() - button_pressed_time) > 200)
    {
      button_pressed_time = millis();
      //toggle between cleaning and breathing modes 
      if(start_mode == MODE_CLEANING)
      {
        start_mode = MODE_BREATHING;
      }
      else
      {
        start_mode = MODE_CLEANING;
      }
      
      Serial.print("Mode toggled to: ");
      Serial.println(start_mode);
      //wait untile the nutton is released 
      while(digitalRead(buttonPin) == LOW);
    }
  }
  
    // Check the mode when the button is pressed
  if (digitalRead(startPin) == LOW) {
    
    if((millis() - start_button_pressed_time) > 200)
    {
      start_button_pressed_time = millis();
      last_check_time = millis();  // Store the current time
      // toggle between idle and last selected mode 
      if(mode == MODE_IDLE)
      {
        mode = start_mode;
      }
      else
      {
        mode = MODE_IDLE;
      }
      
      Serial.print("Operation Mode toggled to: ");
      Serial.println(mode);

      while(digitalRead(startPin) == LOW);
    }
  }
  //Handle different operation modes 
  if(mode == MODE_IDLE)
  {
    //Turn off the pump if its in Idle mode 
    if(pump_on)
    {
      digitalWrite(pumpPin, LOW);
      pump_on = false;
      Serial.println("Idle mode: Pump turned OFF");
    }
  }
  else if(mode == MODE_CLEANING)
  // Turn on the pump if it's off during cleaning mode
  {
  	if(pump_on == false)
    {
      digitalWrite(pumpPin, HIGH);
      pump_on = true;
      Serial.println("Cleaning mode: Pump turned ON");
    }
  }
  else if(mode == MODE_BREATHING)
  // Toggle the pump state based on breathing mode logic
  {
    if (pump_on == true) 
    {
      nowtime = millis();  // Update the current time
      if ((nowtime - last_check_time) >= 1500) //if the pump is currently on and has been for 1.5second
      {
        pump_on = false;
        last_check_time = nowtime;
        digitalWrite(pumpPin, LOW);//turn off
        Serial.println("Breathing mode: Pump turned OFF");
      } 
    } 
    else 
    {
      nowtime = millis();
      if ((nowtime - last_check_time) > 2000) // if the pump is off and at least 2s 
      {
        pump_on = true; //turn the pump on 
        digitalWrite(pumpPin, HIGH);
        last_check_time = nowtime;
        Serial.println("Breathing mode: Pump turned ON");
      }
    }
  }

}