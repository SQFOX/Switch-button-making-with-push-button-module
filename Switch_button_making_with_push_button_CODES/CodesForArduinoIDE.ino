int ii;

void setup(){
pinMode(9,INPUT); //the signal of the push button, which is the module wired (modül olan push buttonun sinyal teline bağlı)
Serial.begin(9600);
}

void loop(){

}
void buttons() {
  if (digitalRead(9) == 0)
  {
    ii = ii + 1;
  }
  else
  {
    ii = ii;
  }
  delay(400);
  if (ii % 2 == 0)
  {
    Serial.println("On"); // Switch On
  }
  if (ii % 2 == 1) {
    Serial.println("Off"); // Switch Off
  }
  delay(300);
}
