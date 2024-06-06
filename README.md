# Projeto: Medidor de Oxigênio Dissolvido em Água com Arduino
Este projeto envolve a criação de um medidor de oxigênio dissolvido em água utilizando uma placa Arduino. O sistema lê valores de um sensor de oxigênio dissolvido e aciona LEDs para indicar se o nível de oxigênio está dentro de uma faixa ideal.

## Funcionamento
O código lê continuamente o valor do sensor de oxigênio dissolvido conectado ao pino A0.
Se o valor lido estiver fora da faixa ideal (entre 4.5 mg/L e 5.5 mg/L), o LED vermelho acende e o LED verde apaga, indicando que o nível de oxigênio está fora do intervalo desejado.
Se o valor estiver dentro da faixa ideal, o LED verde acende e o LED vermelho apaga, indicando que o nível de oxigênio está adequado.
O ciclo se repete a cada segundo.
