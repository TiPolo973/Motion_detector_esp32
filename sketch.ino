int motion = 15;
int relay = 2;
unsigned long startTime = 0;


bool etat = false;

void setup() {
  Serial.begin(115200);
  pinMode(motion, INPUT);
  pinMode(relay, OUTPUT);
}


void loop() {
  bool motion = digitalRead(motion);

  if (motion == HIGH && etat == false) {
    etat = true;
    digitalWrite(relay, etat);
    startTime = millis();
    Serial.println("Mouvement détecter");
  }

  if( etat && millis() - startTime >= 10000){
    etat = false;
    digitalWrite(relay, etat);
    Serial.println("Relais éteint");
  }

}