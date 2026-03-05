// Pins
const int x_pin = A0;
const int y_pin = A1;
const int z_pin = A2;

const int led1_pin = 7;
const int led2_pin = 6;

const int speaker_pin = 3;

// Alarm Bell
int alarmFreq[] = {1500, 700};

// Volts per G-Force
const float sensitivity = 0.206;

// Acceptable tolerance 
const float tolerance = 0.1;

float init_x;
float init_y;
float init_z;

void setup()
{
  analogReference(EXTERNAL);
  pinMode(led1_pin, OUTPUT);
  pinMode(led2_pin, OUTPUT);
  pinMode(speaker_pin, OUTPUT);
  
  // Initial acceleration
  init_x = (analogRead(x_pin) - 512) * 3.3 / (sensitivity * 1023);
  init_y = (analogRead(y_pin) - 512) * 3.3 / (sensitivity * 1023);
  init_z = (analogRead(z_pin) - 512) * 3.3 / (sensitivity * 1023);
}

void loop()
{
  float x;
  float y;
  float z;
  
  x = (analogRead(x_pin) - 512) * 3.3 / (sensitivity * 1023);
  y = (analogRead(y_pin) - 512) * 3.3 / (sensitivity * 1023);
  z = (analogRead(z_pin) - 512) * 3.3 / (sensitivity * 1023);
  
  if( (x > init_x - tolerance) && (x < init_x + tolerance) &&
      (y > init_y - tolerance) && (y < init_y + tolerance) &&
      (z > init_z - tolerance) && (z < init_z + tolerance) )
  {}
  else {
    Alarm();
  }
}

void Alarm()
{
  for(int i=0; i<100; i++)
  {
    tone(speaker_pin, alarmFreq[0], 150);
    digitalWrite(led1_pin, HIGH);
    digitalWrite(led2_pin, LOW);
    delay(100);
    tone(speaker_pin, alarmFreq[1], 150);
    digitalWrite(led1_pin, LOW);
    digitalWrite(led2_pin, HIGH);
    delay(100);
  } 
}

