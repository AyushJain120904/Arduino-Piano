#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_F 349
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_B 493
#define ACTIVATED LOW
const int PIEZO = 11;
const int LED = 13;
const int BUTTON_C = 10;
const int BUTTON_D = 9;
const int BUTTON_E = 8;
const int BUTTON_F = 7;
const int BUTTON_G = 6;
const int BUTTON_A = 5;
const int BUTTON_B = 4;
void{
setup()
pinMode(LED, OUTPUT);
pinMode(BUTTON_C, INPUT);
digitalWrite(BUTTON_C,HIGH);
pinMode(BUTTON_D, INPUT);
digitalWrite(BUTTON_D,HIGH);
pinMode(BUTTON_E, INPUT);
digitalWrite(BUTTON_E,HIGH);
pinMode(BUTTON_F, INPUT);
digitalWrite(BUTTON_F,HIGH);
pinMode(BUTTON_G, INPUT);
digitalWrite(BUTTON_G,HIGH);
pinMode(BUTTON_A, INPUT);
digitalWrite(BUTTON_A,HIGH);
pinMode(BUTTON_B, INPUT);
digitalWrite(BUTTON_B,HIGH);
}
digitalWrite(LED,LOW);
void{
loop()
while(digitalRead(BUTTON_C) == ACTIVATED)
{
tone(PIEZO,NOTE_C);
digitalWrite(LED,HIGH);
}
while(digitalRead(BUTTON_D) == ACTIVATED)
{
tone(PIEZO,NOTE_D);
digitalWrite(LED,HIGH);
}
while(digitalRead(BUTTON_E) == ACTIVATED)
{
tone(PIEZO,NOTE_E);
digitalWrite(LED,HIGH);
}
while(digitalRead(BUTTON_F) == ACTIVATED)
{
tone(PIEZO,NOTE_F);
digitalWrite(LED,HIGH);
}
while(digitalRead(BUTTON_G) == ACTIVATED)
{
tone(PIEZO,NOTE_G);
digitalWrite(LED,HIGH);
}
while(digitalRead(BUTTON_A) == ACTIVATED)
{
tone(PIEZO,NOTE_A);
digitalWrite(LED,HIGH);
}
while(digitalRead(BUTTON_B) == ACTIVATED)
{
tone(PIEZO,NOTE_B);
digitalWrite(LED,HIGH);
}
}
noTone(PIEZO);
digitalWrite(LED,LOW);