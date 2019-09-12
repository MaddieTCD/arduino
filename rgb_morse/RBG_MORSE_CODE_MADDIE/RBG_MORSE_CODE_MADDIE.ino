#define SHORT 100
#define LONG 500
#define LETTER_SPACE 300

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

void setup() 
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() 
{
  r_red();
  NextLetter();
  e_red();
  NextLetter();
  d_red();
  delay(700);

  o_orange();
  NextLetter();
  r_orange();
  NextLetter();
  a();
  NextLetter();
  n_orange();
  NextLetter();
  g_orange();
  NextLetter();
  e_orange();
  NextLetter();
  delay(700);

  y_yellow();
  NextLetter();
  e_yellow();
  NextLetter();
  l_yellow();
  NextLetter();
  l_yellow();
  NextLetter();
  o_yellow();
  NextLetter();
  w_yellow();
  delay(700);

  g_green();
  NextLetter();
  r_green();
  NextLetter();
  e_green();
  NextLetter();
  e_green();
  NextLetter();
  n_green();
  delay(700);

  b_blue();
  NextLetter();
  l_blue();
  NextLetter();
  u_blue();
  NextLetter();
  e_blue();
  delay(700);
  
  p_pink();
  NextLetter();
  i();
  NextLetter();
  n_pink();
  NextLetter();
  k();
  delay(300);
  
  color(0,0,255);
  delay(1400);
  color(0,0,0);
  delay(1000);
  
}
void Short(int r, int g, int b)
{
  color(r,g,b);
  delay(SHORT);
  color(0,0,0);
  delay(200);
}
void Long(int r, int g, int b)
{
  color(r,g,b);
  delay(LONG);
  color(0,0,0);
  delay(200);
}
void color(unsigned char red, unsigned char green, unsigned char blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
void NextLetter()
{
  delay(LETTER_SPACE);
}

//for red
void r_red()
{
  Short(255,0,0);
  Long(255,0,0);
  Short(255,0,0);
}
void e_red()
{
  Short(255,0,0);
}
void d_red()
{
  Long(255,0,0);
  Short(255,0,0);
  Short(255,0,0);
}
//for orange
void o_orange()
{
  Long(255,90,0);
  Long(255,90,0);
  Long(255,90,0);
}
void r_orange()
{
  Short(255,90,0);
  Long(255,90,0);
  Short(255,90,0);
}
void a()
{
  Short(255,90,0);
  Long(255,90,0);
}
void n_orange()
{
  Long(255,90,0);
  Short(255,90,0);
}
void g_orange()
{
  Long(255,90,0);
  Long(255,90,0);
  Short(255,90,0);
}
void e_orange()
{
  Short(255,90,0);
}
//for yellow
void y_yellow()
{
  Long(255,120,7);
  Short(255,120,7);
  Long(255,120,7);
  Long(255,120,7);
}
 void e_yellow()
{
  Short(255,120,7);
}
void l_yellow()
{
  Short(255,120,7);
  Long(255,120,7);
  Short(255,120,7);
  Short(255,120,7);
}
void o_yellow()
{
  Long(255,120,7);
  Long(255,120,7);
  Long(255,120,7);
}
void w_yellow()
{
  Short(255,120,7);
  Long(255,120,7);
  Long(255,120,7);
}
//for green
void g_green()
{
  Long(0,255,0);
  Long(0,255,0);
  Short(0,255,0);
}
void r_green()
{
  Short(0,255,0);
  Long(0,255,0);
  Short(0,255,0);
}
void e_green()
{
  Short(0,255,0);
}
void n_green()
{
  Long(0,255,0);
  Short(0,255,0);
}
//for blue
void b_blue()
{
  Long(0,0,255);
  Short(0,0,255);
  Short(0,0,255);
  Short(0,0,255);
}
void l_blue()
{
  Short(0,0,255);
  Long(0,0,255);
  Short(0,0,255);
  Short(0,0,255);
}
void u_blue()
{
  Long(0,0,255);
  Long(0,0,255);
  Long(0,0,255);
}
void e_blue()
{
  Short(0,0,255);
}


//for pink
void p_pink()
{
  Short(255,0,255);
  Long(255,0,255);
  Long(255,0,255);
  Short(255,0,255);
}
void i()
{
  Short(255,0,255);
  Short(255,0,255);
}
void n_pink()
{
  Short(255,0,255);
  Long(255,0,255);
}
void k()
{
  Long(255,0,255);
  Short(255,0,255);
  Long(255,0,255);
}
