char d;                      //variable d = dato enviado desde Android

    void setup(){            
    Serial.begin(9600);          // Velocidad de transmision de datos kbps
    pinMode(13,OUTPUT);          
    pinMode(12,OUTPUT);          
    pinMode(11,OUTPUT);          
    pinMode(10,OUTPUT);          
    pinMode(9,OUTPUT);           
    }
  
    void loop() {
    if(Serial.available()){
    d=Serial.read();            // lee el dato enviado desde Android
  
    switch(d){
    case 'A':                  // si dato = A
    digitalWrite(13,HIGH);     // prende puerto 13
    digitalWrite(12,LOW);      // y apaga los demas 
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    break;
    
    case 'V':                  // si dato = V
    digitalWrite(12,HIGH);     // prende puerto 12
    digitalWrite(13,LOW);      // y apaga los demaas
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    break;
    
    case 'R':                  // si dato = R
    digitalWrite(11,HIGH);     // prende puerto 11
    digitalWrite(13,LOW);      // y apaga los demas 
    digitalWrite(12,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    break;
    
    case 'N':                  // si dato = N
    digitalWrite(10,HIGH);     // prende puerto 10
    digitalWrite(13,LOW);      // y apaga los demas
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(9,LOW);
    break;
    
    case 'M':                  // si dato = M
    digitalWrite(9,HIGH);      // prende puerto 9
    digitalWrite(13,LOW);      // y apaga los demas
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    break;
    
    case 'B':                  // si dato = B
    digitalWrite(13,LOW);      // apagamos todos los puertos
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    break;  
     
    case 'X':                  // si dato = x
    digitalWrite(13,HIGH);      // encendemos todos los puertos
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    break;
    }
    }
    }
