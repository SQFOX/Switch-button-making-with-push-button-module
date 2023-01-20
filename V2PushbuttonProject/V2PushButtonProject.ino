int ii = 2;
int clickEvent = 0;

void setup(){
pinMode(12,INPUT); //the signal of the push button, which is the module wired (modül olan push buttonun sinyal teline bağlı)
Serial.begin(9600);
pinMode(13,OUTPUT); //I didn't take a breadboard with me to develop the code here, so I made the 5V pin on the 13th leg, you can delete the codes that say digitalWrite and pinMode(13,HIGH).
digitalWrite(13,HIGH);//(Burada kodu geliştirmek için yanıma breadboard almadım o yüzden 13 numaralı bacağı 5V pini yaptım siz digitalWrite ve pinMode(13,HIGH) yazan kodları silebilirsiniz.)

}

void loop(){
buttons();
}
void buttons() {
  if (digitalRead(12) == 0 && clickEvent == 0)
  {
    ii = ii + 1;
    clickEvent = clickEvent + 1;
  }
  if(digitalRead(12) == 1 && clickEvent >= 1)
  {
    clickEvent = 0;
    ii = ii;
  }
  if (ii % 2 == 0)
  {
    Serial.println("On"); // Switch On
  }
  if (ii % 2 == 1) {
    Serial.println("Off"); // Switch Off
  }
  }
