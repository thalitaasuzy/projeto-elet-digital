const int ledPin = 3; // Pino dos LEDs
const int potPin = A0; //Pino do potenciometro

void setup()
{
  pinMode(ledPin, OUTPUT); // Configura o pino dos LEDs como saída
}

void loop()
{
  int potValue = analogRead(potPin); // Lê o valor do potenciometro
  int ledValue;

  // Mapeia o valor do potênciometro para a intensidade do led
  ledValue = map(potValue, 0, 1023, 0, 255); // Mapeia de 0 a 255

  // Acende os LEDs com base no potenciômetro
  analogWrite(ledPin, ledValue); // Define a intensidade do LED

  delay(50); // Pequeno atraso para ter estabilidade
}
