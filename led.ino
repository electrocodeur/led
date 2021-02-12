int led = 8;//pin digital 8 de l'arduino

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);//on dit que la led est en sortie
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);//on envoie du courant sur la led (elle s'allume)
  delay(1000);//on dit à la carte arduino d'attendre 1 seconde
  digitalWrite(led, LOW);//on n'envoie plus du courant sur la led (elle s'éteint)
  delay(1000);//on dit à la carte arduino d'attendre 1 seconde
}
