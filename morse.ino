int led = 13;
int onTimeDot = 200;
int onTimeDash = 750;
int delayTime = 200;
int delayTimeLetters = 1000;
int delayTimeWords = 1750;

void setup()
{
	pinMode(led, OUTPUT);
}

void loop()
{
	printH();
	delay(delayTimeLetters);
	printI();
	delay(delayTimeWords);
	
	printP();
	delay(delayTimeLetters);
	printE();
	delay(delayTimeLetters);
	printR();
	delay(delayTimeLetters);
	printS();
	delay(delayTimeLetters);
	printO();
	delay(delayTimeLetters);
	printN();
	delay(delayTimeWords);
}

void printA()
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printB()
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printC() 
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
}

void printD()
{
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printE()
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printF()
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printG()
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printH()
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printI() 
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printJ()
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printK()
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printL()
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printM()
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
}

void printN() // Dash - Dot
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printO() // Dash - Dash - Dash
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printP() // Dot - Dash - Dash - Dot
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printQ() // Dash - Dash - Dot - Dash
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printR() // Dot - Dash - Dot
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printS() // Dot - Dot - Dot
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}

void printT() // Dash
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printU() // Dot - Dot - Dash
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printV() // Dot - Dot - Dot - Dash
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printW() // Dot - Dash - Dash
{
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printX() // Dash - Dot - Dot - Dash
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printY() // Dash - Dot - Dash - Dash
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
}

void printEX() // printX is already called -- Dash - Dash - Dot - Dot
{
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDash);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
	
	delay(delayTime);
	
	digitalWrite(led, HIGH);
	delay(onTimeDot);
	digitalWrite(led, LOW);
}
