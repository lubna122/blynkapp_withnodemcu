#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "kckznLramGvPJgOrT_XDQSn9k67Uu9mv";
char ssid[] = "Mooazam";
char pass[] = "mooazam123";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
