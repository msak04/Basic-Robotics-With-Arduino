    //Use Serial Monitor to view the value of sonar sensor
    
    int TrigPin = 2;                        // Assigning Arduino PIN 
    int EchoPin = 3;                        // Assigning Arduino PIN 
    int Duration;                           // Declaring Variable
    int Distance;                           // Declaring Variable
    void setup ( ) 
    {
        Serial.begin (9600);                // Sets the data rate in bits per second for serial data transmission
        pinMode (TrigPin , OUTPUT);         // Setting PIN As Output
        pinMode (EchoPin , INPUT);          // Setting PIN As Input
    }
    void loop ( ) 
    {
        digitalWrite (TrigPin, HIGH);       // Setting Trig PIN HIGH to Send Wave
        delay(10);                          // Delay 10 Microsecond 
        digitalWrite (TrigPin, LOW);        // Setting Trig PIN LOW
        Duration = pulseIn (EchoPin, HIGH); // Setting EchoPin HIGH to Receve the Wave
        Distance = (Duration * 0.034) / 2;  // Distance = Duration * Speed Of sound / 2(s=vt)
        Serial.print ("Distance: ");        // Print       
        Serial.println (Distance);          // Print the value of the distance
    }
