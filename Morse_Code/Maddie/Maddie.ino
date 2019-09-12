#define SHORT 100
#define LONG 500
#define LETTER_SPACE 1500
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(3000); 
  m();
  NextLetter();
  a();
  NextLetter();
  d();
  NextLetter();
  d();
  NextLetter();
  i();
  NextLetter();
  e();
  NextLetter();
  NextLetter();
  NextLetter();
}

void NextLetter()
{
  delay(LETTER_SPACE);
}

void m()
{
  Long();
  Long();
}

void a()
{
  Short();
  Long();
}

void d()
{
  Long();
  Short();
  Short();
}

void i()
{
  Short();
  Short();
}


void e()
{
  Short();
}

void Short()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(SHORT);
  digitalWrite(LED_BUILTIN,LOW);
  delay(200);
}

void Long()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(LONG);
  digitalWrite(LED_BUILTIN,LOW);
  delay(200);
}
