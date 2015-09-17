// Programa de teste do modulo rele
// Autor : Arduino e Cia.
//
// Ligar o pino S do rele no pino 7 do Arduino
// Ligar o pino + do rele no pino 5V do Arduino
// Ligar o pino - do rele no pino GND do Arduino

//define a saida a ser utilizada para o acionamento do rele
int rele = 7; 

void setup()
{
  pinMode(rele, OUTPUT); //Define o pino como saida
}

void loop()

{
  digitalWrite(rele, HIGH); //Aciona o rele
  delay(5000); //Aguarda 5 segundos
  digitalWrite(rele, LOW); //Desliga o rele
  delay(5000); //Aguarda 5 segundos e reinicia o processo
}
