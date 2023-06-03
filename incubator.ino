#define BLYNK_TEMPLATE_ID "TMPL3c0RbKaMG"
#define BLYNK_TEMPLATE_NAME "Incubator"
#define BLYNK_AUTH_TOKEN "znTA8bhlHFSx9fgybG3ZBaQfIXTTaQan"

#define BLYNK_PRINT Serial
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Never Connect";
char pass[] = "231567**9**";
#include <dht11.h>
dht11 DHT;

#define DHT11_PIN 2
const int LED_PIN=5;
const int LED_PIN2=4;

BlynkTimer timer;

boolean countStatus;
int beat, bpm;
unsigned long millisBefore;
void check_humidity_temp();
void find_bpm();

void led_high(){
  if(bpm<60 || bpm>100){
  Serial.println("Success");
  Blynk.virtualWrite(V3,1);
  digitalWrite(LED_PIN, HIGH); 

  }
  else{
  Serial.println("fail");
  Blynk.virtualWrite(V3,0);
  digitalWrite(LED_PIN, LOW);
  }
}

void led_high_temp1(){
  Serial.println("Success");
  Blynk.virtualWrite(V4,1);
  digitalWrite(LED_PIN2, HIGH); 
}

void led_high_temp(){
  Serial.println("Fail");
  Blynk.virtualWrite(V4,0);
  digitalWrite(LED_PIN2, LOW); 
}
void find_bpm()
{
  for(int i=0;i<20;i++)
  {
  int sensorValue = analogRead(A0);
  if (countStatus == 0)
  {
    if (sensorValue > 600)
    {
      countStatus = 1;
      beat++;
      Serial.println("Beat Detected!");
      Serial.print("Beat : ");
      Serial.println(beat);
     }
    }
  else
  {
    if (sensorValue < 500)
    {
      countStatus = 0;
    }
  }
  if (millis() - millisBefore > 15000 )
  {
    bpm = beat * 4;
    beat = 0;
    Blynk.virtualWrite(V2,bpm);
    Serial.print("BPM : ");
    Serial.println(bpm);
   
    millisBefore = millis();
    check_humidity_temp();
    led_high();  
      }
    delay(1);
}
}
void check_humidity_temp()
{
  int chk;
  chk = DHT.read(DHT11_PIN);

  Blynk.virtualWrite(V0,DHT.humidity);
  Blynk.virtualWrite(V1,DHT.temperature);

  Serial.print("Humidity\t");
  Serial.print(DHT.humidity,1);
  Serial.print(",\t");
  Serial.print("Temperature\t");
  Serial.println(DHT.temperature,1);

  if((DHT.humidity>40 && DHT.humidity<80) && (DHT.temperature>34 && DHT.temperature<38))
  {
    led_high_temp();
    Serial.println("ideal incubator humidity and temperature");
  }
  else
  {
    led_high_temp1();
    Serial.println("Not an ideal incubator humidity and temperature...........Please adjust!!!");
  }
  delay(100);
}

void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  Blynk.begin(auth,ssid,pass);
  timer.setInterval(100L,find_bpm);
}

void loop(){
  Blynk.run();
  timer.run();
}
