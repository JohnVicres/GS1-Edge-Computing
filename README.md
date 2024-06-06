# Projeto: Medidor de Oxigênio Dissolvido em Água com Arduino
Este projeto envolve a criação de um medidor de oxigênio dissolvido em água utilizando uma placa Arduino. O sistema lê valores de um sensor de oxigênio dissolvido e aciona LEDs para indicar se o nível de oxigênio está dentro de uma faixa ideal. A ideia é poder controlar a quantidade de oxigênio dissolvido em áreas com desbalanço ambiental, como com excesso de algas e fitoplânctons.
## Componentes Necessários
- Arduino (UNO, Nano ou qualquer outro compatível)
- Sensor de oxigênio dissolvido (DO Sensor)
- LEDs (Vermelho e Verde)
- Resistores para LEDs
- Protoboard e jumpers
## Esquema de Ligação
- Conecte o pino de saída do sensor de oxigênio dissolvido ao pino A0 do Arduino.
- Conecte o LED vermelho ao pino 9 do Arduino, através de um resistor.
- Conecte o LED verde ao pino 10 do Arduino, através de um resistor.
## Funcionamento
O código lê continuamente o valor do sensor de oxigênio dissolvido conectado ao pino A0. Se o valor lido estiver fora da faixa ideal (entre 4.5 mg/L e 5.5 mg/L), o LED vermelho acende e o LED verde apaga, indicando que o nível de oxigênio está fora do intervalo desejado. Se o valor estiver dentro da faixa ideal, o LED verde acende e o LED vermelho apaga, indicando que o nível de oxigênio está adequado. O ciclo se repete a cada segundo.
## Instruções para Carregar o Código
- Conecte a placa Arduino ao seu computador.
- Abra o Arduino IDE e copie o código fornecido acima.
- Cole o código na janela do editor do Arduino IDE.
- Selecione a placa e a porta correta em Ferramentas > Placa e Ferramentas > Porta.
- Clique no botão Upload para carregar o código na placa Arduino.
## Considerações
- Certifique-se de calibrar o sensor de oxigênio dissolvido de acordo com as especificações do fabricante para obter leituras precisas.
- Ajuste os valores de IDEAL_MIN_OXYGEN e IDEAL_MAX_OXYGEN conforme necessário para seu uso específico.
## Link para o projeto no Tinkercad
https://www.tinkercad.com/things/j2I2AQqbOZZ-fantabulous-kieran

https://github.com/JohnVicres/GS1-Edge-Computing/assets/166719474/9c135e12-f507-4342-8820-4bad5b674e54

