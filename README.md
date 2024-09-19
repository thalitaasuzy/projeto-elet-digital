<h2>Projeto Eletrônica Digital</h2>



Vamos acender os LEDs de maneira que todos respondam ao mesmo valor lido pelo potenciômetro.

### Materiais Necessários:
- 1 Placa Arduino Uno
- 4 LEDs
- 4 Resistores de 220 ohm
- 1 Potenciômetro (10kΩ é comum)
- Jumpers macho-macho
- Protoboard (opcional)

### Conexões:

1. **LEDs**:
   - Conecte o ânodo (perna longa) de todos os 4 LEDs ao pino 3 do Arduino.
   - Conecte o cátodo (perna curta) de cada LED ao GND através de um resistor de 220 ohm.

2. **Potenciômetro**:
   - Conecte um dos terminais do potenciômetro ao GND.
   - Conecte o outro terminal ao VCC (5V) do Arduino.
   - Conecte o terminal do meio (wiper) do potenciômetro ao pino analógico A0 do Arduino.

### Código:

Aqui está o código atualizado para controlar os 4 LEDs usando o potenciômetro:

>Link

### Explicação do Código:

1. **Definições**:
   - `ledPin`: Pino que controla os LEDs (pino 3).
   - `potPin`: Pino do potenciômetro.

2. **Setup**:
   - Configura o pino do LED como saída.

3. **Loop**:
   - Lê o valor do potenciômetro (0 a 1023).
   - Mapeia esse valor para um intervalo de 0 a 255.
   - Acende os LEDs no pino 3 com a intensidade correspondente ao valor do potenciômetro.

### Montagem Visual:

#### Layout Básico:
![Captura de Tela 2024-09-19 às 16 07 02](https://github.com/user-attachments/assets/2280f600-618d-4c1e-a5fc-d96227919a7e)

### Observações:
- Todos os LEDs estão conectados ao mesmo pino (3). Eles acenderão juntos.
- Ajuste o potenciômetro para controlar a intensidade luminosa dos LEDs.
