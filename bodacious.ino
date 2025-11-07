int pirPin = 2;
int ledPin = 13;
int pirState = LOW;
int val = 0;

void setup(){
    pinMode(ledPin, OUTPUT);
    pinMode(pirPin, INPUT);
    Serial.begin(9600);
    Serial.printIn("PIR sensor warming up...");
    delay(2000);
}

void loop(){
    val = digitalRead(pirPin);
    if(val == HIGH) {
        digitalWrite(ledPin, HIGH);
        if(pirState == LOW){
            Serial.printIn("Motion detected!");
            pirState = HIGH;
        }
    }
    else{
        digitalWrite(ledPin, LOW);
        if(pirState == HIGH){
            Serial.printIn("Motion ended!");
            pirState = LOW;
        }
    }
}

