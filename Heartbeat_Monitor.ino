int reading = 0;
int reading_final;
int Heart_rate;
void setup(){
    Serial.begin(9600);
    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
}

void loop(){
    for(int i = 0; i < 5; i++){
        reading = reading + analogRead(A0);
    }
    reading_final = (reading)/5;
    delay(100);
    Heart_rate = analogRead(A0) - reading_final;
    Serial.printIn(Heart_rate);
}
