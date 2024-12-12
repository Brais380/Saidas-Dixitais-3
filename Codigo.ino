/*
Parpadeo alternativo de dos leds 10-4 segundo(s)
Autor: Brais Rey Miron
Data: 12/12/2024
*/
// C++ code
//
int i = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH); //Encender pin 13
  delay(10000); //Espera 10 segundo(s)
  digitalWrite(13, LOW); //Apagar pin 13
  delay(4000); //Espera 4 segundo(s) 
  digitalWrite(12, HIGH); //Encender pin 12
  delay(10000); //Espera 10 segundo(s)
  digitalWrite(12, LOW); //Apagar pin 12
  delay(4000); //Espera 4 segundo(s)
}
