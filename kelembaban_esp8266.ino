#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "EcHwndAuAkKng79dvIF9d_Xr5ZuK7dfq";
char ssid[] = "mylab";
char pass[] = "surabaya1945";

int tombol;

BLYNK_WRITE(V1) // button
{
  tombol = param.asInt();
  Serial.println(tombol);
}

void setup(void)
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(14, OUTPUT);
  digitalWrite(14, LOW);
}

void loop(void)
{ Blynk.run();
  int kelembaban = analogRead(0);
  Blynk.virtualWrite(V0, kelembaban);
  delay(1000);
  Serial.println(kelembaban);
  if (tombol == 1) {
    digitalWrite(14, HIGH);
  } else {
    digitalWrite(14, LOW);
  }
}
