const int ledPin = 3; //pino led
const int potPin = A0; //pino potenciometro

void setup()
{
  pinMode(ledPin, OUTPUT); //configura o pino do led como saida
}

void loop()
{
  int potValue = analogRead(potPin); //lê o valor do potenciometro
  int ledValue;

  //mapeia o valor do potênciometro para a intensidade do led
  ledValue = map(potValue, 0, 1023, 0, 255); //mapeia de 0 a 255

  //Acende os LED com base no potenciometro
  analogWrite(ledPin, ledValue); //Define a intensidade do LED

  delay(50); //Atraso para ter estabilidade
}
