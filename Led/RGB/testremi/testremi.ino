//Rouge branche sur 9
//Vert branche sur 10
//Bleu branche sur 11
int ledRouge = 11;
int ledVert = 12;
int ledBleu = 13;

// run once, when the sketch starts
void setup()                    
{
    pinMode(ledRouge, OUTPUT);
    pinMode(ledVert,OUTPUT);
    pinMode(ledBleu,OUTPUT);
    //La led est blanche pendant 3 secondes (etat par defaut)
    delay(3000);
    //La led s'eteint
    Off();
    delay(3000);
    Rouge();
    delay(3000);
    Vert();
    delay(3000);
    Bleu();
    delay(3000);
    Blanc();
}

// run over and over again
void loop()                   
{

}

//Voila les fonctions qui font la magie

void Off(){
  digitalWrite(ledVert,HIGH);
  digitalWrite(ledBleu,HIGH);
  digitalWrite(ledRouge,HIGH);
}

void Rouge(){
  digitalWrite(ledVert,HIGH);
  digitalWrite(ledBleu,HIGH);
  digitalWrite(ledRouge,LOW);
}

void Vert(){
  digitalWrite(ledVert,LOW);
  digitalWrite(ledBleu,HIGH);
  digitalWrite(ledRouge,HIGH);
}

void Bleu(){
  digitalWrite(ledVert,HIGH);
  digitalWrite(ledBleu,LOW);
  digitalWrite(ledRouge,HIGH);
}

void Cyan(){
  digitalWrite(ledVert,LOW);
  digitalWrite(ledBleu,LOW);
  digitalWrite(ledRouge,HIGH);
}

void Rose(){
  digitalWrite(ledVert,HIGH);
  digitalWrite(ledBleu,LOW);
  digitalWrite(ledRouge,LOW);
}

void Jaune(){
  digitalWrite(ledVert,LOW);
  digitalWrite(ledBleu,HIGH);
  digitalWrite(ledRouge,LOW);
}

void Blanc(){
  digitalWrite(ledVert,LOW);
  digitalWrite(ledBleu,LOW);
  digitalWrite(ledRouge,LOW);
}


