int Gas_Sensors = A0;  // Nous connectons le pin du signal du capteur au A0 de la carte
void setup() {
  // Le capteur nous renvoie les données au rythme de 9600 bps (~9600 baud)
  Serial.begin(9600);
}

void loop() {
  // lecture du signal renvoillé par le capteur
  int sensorValue = analogRead(Gas_Sensors);                      
  // Affichage de la valeur renvoyé par le capteur
  Serial.print("Gas Sensors = " );                       
  Serial.println(sensorValue);
  //délait d’attente entre de relever du signal du capteur
  delay(500);                     
}
