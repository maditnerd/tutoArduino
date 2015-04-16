//Bouton branche sur Pin 9

int bouton = 9;
int ledArduino = 13;
bool EtatBouton = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(bouton,INPUT_PULLUP);
  pinMode(ledArduino,OUTPUT);

  //Le port serial permet d'envoyer/recevoir du texte depuis le PC (Le moniteur serie est la loupe en haut)  
  Serial.begin(9600);
  Serial.println("SERIAL ACTIF");
}

void loop() {
  // put your main code here, to run repeatedly:
  EtatBouton = digitalRead(bouton);
  
  //Avec le pullup l'etat est inverse (false=appuye true=pas appuye)
  if(EtatBouton == false){
    digitalWrite(ledArduino,HIGH);
    Serial.print("BOUTON APPUYE: ");
    Serial.println(EtatBouton);
  }
  else{
    digitalWrite(ledArduino,LOW);
  }
   
}
