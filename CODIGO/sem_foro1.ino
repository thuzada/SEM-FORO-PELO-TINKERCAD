const int VERMELHO = 2;
const int AMARELO = 4;
const int VERDE = 7;
const int BOTAO = 8;

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(BOTAO, INPUT);
}

void loop() {
  if (digitalRead(BOTAO)) {
    digitalWrite(VERDE, LOW);
    delay(200);
    digitalWrite(AMARELO, HIGH);
    delay(1000);
    digitalWrite(AMARELO, LOW);
    delay(200);
    digitalWrite(VERMELHO, HIGH);
    delay(5000);
    digitalWrite(VERMELHO, LOW);
  } else {
    digitalWrite(VERDE, HIGH);
    
  }
}
