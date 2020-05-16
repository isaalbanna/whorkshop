#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "EcHwndAuAkKng79dvIF9d_Xr5ZuK7dfq";
char ssid[] = "mylab";
char pass[] = "surabaya1945";

void setup(void)
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop(void)
{ Blynk.run();
}
