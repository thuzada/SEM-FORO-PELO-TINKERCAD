# Projeto de Semáforo com Arduino

Este projeto demonstra como criar um semáforo simples utilizando um Arduino. O semáforo é controlado por um botão e possui três LEDs que representam as cores do semáforo (vermelho, amarelo e verde). Quando o botão é pressionado, o semáforo segue a sequência típica de transição de um semáforo real.

## Visão Geral

Este projeto foi desenvolvido como um exemplo educacional para demonstrar como usar pinos de entrada e saída no Arduino para controlar LEDs e responder a um botão de entrada.

## Componentes Necessários

- 1 x Arduino (Uno, Mega, etc.)
- 1 x LED Vermelho
- 1 x LED Amarelo
- 1 x LED Verde
- 1 x Botão
- 3 x Resistores (220Ω para os LEDs)
- 1 x Resistor (10kΩ para o botão)
- Fios Jumper
- Breadboard

## Esquema de Montagem

Monte o circuito conforme o diagrama abaixo:

![Esquema de Montagem](ESQUEMAS/SEMAFORO.PDF)

1. Conecte o LED vermelho ao pino 2 do Arduino com um resistor de 220Ω em série.
2. Conecte o LED amarelo ao pino 4 do Arduino com um resistor de 220Ω em série.
3. Conecte o LED verde ao pino 7 do Arduino com um resistor de 220Ω em série.
4. Conecte um dos terminais do botão ao pino 8 do Arduino.
5. Conecte o outro terminal do botão ao GND através de um resistor de 10kΩ.
6. Conecte o outro terminal do botão ao 5V.

