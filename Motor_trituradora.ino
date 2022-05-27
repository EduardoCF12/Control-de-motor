int ENA = 10;
int IN1 = 9;
int IN2 = 8;
int btn = 2;
int estado;
int band = 0;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(btn,INPUT);
  Serial.begin(9600);
  
}

void loop() {
    

    estado=digitalRead(btn);
    Serial.println(estado);
    if (estado==HIGH && band == 0){
      
      analogWrite(ENA,200);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2, HIGH);
      delay(2350); 

      analogWrite(ENA,0);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2, LOW);
      band = 1;
      
    }

    else if (estado==HIGH && band == 1){

      analogWrite(ENA,200);
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2, LOW);
      delay(2350);
      
      analogWrite(ENA,0);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2, LOW);
      band = 0;
      
    }
   
}
