#define datapin 12
#define latchpin 11
#define clkpin 10

void inpPos(){
  digitalWrite(datapin,1);
  digitalWrite(clkpin,1);
  digitalWrite(clkpin,0);
  digitalWrite(datapin,0);
}
void inpNeg(){
  digitalWrite(datapin,0);
  digitalWrite(clkpin,1);
  digitalWrite(clkpin,0);
  digitalWrite(datapin,1);
}



void setup(){
  Serial.begin(9600);
  pinMode(datapin,OUTPUT);
  pinMode(latchpin,OUTPUT);
  pinMode(clkpin,OUTPUT);

  //feeding data 00110011
    digitalWrite(latchpin,0);
    inpPos();
    inpPos();
    inpNeg();
    inpNeg();
    inpPos();
    inpPos();
    inpNeg();
    inpNeg();
    digitalWrite(latchpin,1); 
}


void loop(){
  
   
 }
