//RGB LED
//The RGB LED will appear red, green, and blue first, then red, orange, yellow, green, blue, indigo, and purple.
//Email:support@sunfounder.com
//Website:www.sunfounder.com
//2015.5.7
#define SHORT 100
#define LONG 300
#define LETTER_SPACE 300
/*************************************************************************/
const int redPin = 11;  // R petal on RGB LED module connected to digital pin 11 
const int greenPin = 10;  // G petal on RGB LED module connected to digital pin 10 
const int bluePin = 9;  // B petal on RGB LED module connected to digital pin 9 
/**************************************************************************/
void setup()
{ 
  pinMode(redPin, OUTPUT); // sets the redPin to be an output 
  pinMode(greenPin, OUTPUT); // sets the greenPin to be an output 
  pinMode(bluePin, OUTPUT); // sets the bluePin to be an output 
}    
/***************************************************************************/
void loop()  // run over and over again  
{    
  r();
  NextLetter();
  e_red();
  NextLetter();
  d();
  delay(700);
  b();
  NextLetter();
  l();
  NextLetter();
  u();
  NextLetter();
  e_blue();
  delay(700);
}     
/******************************************************/
void color (unsigned char red, unsigned char green, unsigned char blue)// the color generating function  
{    
  analogWrite(redPin, red);   
  analogWrite(greenPin, green); 
  analogWrite(bluePin, blue); 
}

void Short(int r, int g, int b)
{
  color(r,g,b);
  delay(SHORT);
  color(0,0,0); // turn the RGB LED off
  delay(200);
}

void Long(int r, int g, int b)
{
  color(r,g,b);
  delay(LONG);
  color(0,0,0); // turn the RGB LED off
  delay(200);
}

void NextLetter()
{
  delay(LETTER_SPACE);
}

//for red
void r()
{
  Short(255,0,0);
  Long(255,0,0);
  Short(255,0,0);
}
void e_red()
{
  Short(255,0,0);
}
void d()
{
  
  Long(255,0,0);
  Short(255,0,0);
  Short(255,0,0);
}
//blue
void b()
{
  Long(0,0,255);
  Short(0,0,255);
  Short(0,0,255);
  Short(0,0,255);
}
void l()
{
  Short(0,0,255);
  Long(0,0,255);
  Short(0,0,255);
  Short(0,0,255);
}
void u()
{
  Short(0,0,255);
  Short(0,0,255);
  Long(0,0,255);
}
void e_blue()
{
  Short(0,0,255);
}

/******************************************************/
