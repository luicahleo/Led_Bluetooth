
/*enciende led con HC-06*/

int led13=13;
int estado =0;




void setup() {
  
  Serial.begin(9600);
  pinMode(led13,OUTPUT);
  

}

void loop() {

  if(Serial.available()>0)
  {
    estado = Serial.read();
  }

  if(estado == 'a')
  {
    digitalWrite(led13,HIGH);
  }

  if (estado == 'b')
  {
    digitalWrite(led13,LOW);
    }
  

}
