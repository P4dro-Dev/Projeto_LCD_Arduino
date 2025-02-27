
#include <LiquidCrystal.h>
// LCD - Modelo ACM 1602K
// Pin Sigla Função Conectar
// 1 Vss Ground GND
// 2 Vdd +5V VCC
// 3 Vo LCD contrast adjust Potenciômetro
// 4 RS Register select Arduino 12
// 5 R/W Read/write GND
// 6 E Enable Arduino 11
// 7 DB0 Data bit 0 NC
// 8 DB1 Data bit 1 NC
// 9 DB2 Data bit 2 NC
// 10 DB3 Data bit 3 NC
// 11 DB4 Data bit 4 Arduino 5
// 12 DB5 Data bit 5 Arduino 4
// 13 DB6 Data bit 6 Arduino 3
// 14 DB7 Data bit 7 Arduino 2
// + BL+ Alimentação (+) Resistor de 1k 
// para VCC
// - BL- Alimentação (-) GND

#define TEMPO_ATUALIZACAO 500

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

void setup() {
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
 // Inicia o LCD com dimensões 16 x 2 (Colunas 
 // x Linhas)
 lcd.begin (16, 2);
}

void loop() {
 lcd.clear();
 lcd.setCursor(0, 0); // Linha 0 e Coluna 0
 lcd.print("Hello");
 lcd.setCursor(0, 1); // Linha 1 e Coluna 0
 lcd.print("Word!");
 delay(TEMPO_ATUALIZACAO);
}