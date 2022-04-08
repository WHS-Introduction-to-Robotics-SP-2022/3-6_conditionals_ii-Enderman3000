int r=9;
int g=10;
int b=11;
int n;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
    
  analogWrite(r,0);

  analogWrite(g,0);
  
  analogWrite(b,0);  
}

void loop() {
  n=analogRead(A0);
  Serial.println(n); 
  if(n<147){
    analogWrite(r,255);
    
    analogWrite(g,0);
  
    analogWrite(b,0);
  } 
  else if (n<293&&n>146){
    analogWrite(r,255);
    
    analogWrite(g,127);
  
    analogWrite(b,0);
  }
  else if (n<438&&n>293){
    analogWrite(r,255);
    
    analogWrite(g,255);
  
    analogWrite(b,0);
  }
  else if (n<584&&n>439){
    analogWrite(r,0);
    
    analogWrite(g,255);
  
    analogWrite(b,0);
  }
  else if (n<730&&n>585){
    analogWrite(r,0);
    
    analogWrite(g,0);
  
    analogWrite(b,255);
  }
  else if (n<876&&n>731){
    analogWrite(r,255);
    
    analogWrite(g,0);
  
    analogWrite(b,255);
  }
  else {
    analogWrite(r,127);
    
    analogWrite(g,0);
  
    analogWrite(b,255);
  }
}
