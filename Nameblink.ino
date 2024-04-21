/* We are printing name Devanshu with morse code  
   Dot will be represented with 1000 ms HIGH on voltage
   Dash will be represented with 2000 ms HIGH on voltage   
   Timout will be 500 ms Low on volatge

  
*/
int dot=1000;
int dash=2000;
int timeout=500;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
void dasher(){
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(dash);
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(timeout);

}
void doter(){
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(dot);
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(timeout);
}



// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW for start
  delay(20000);
  // Printing  D
  dasher();
  doter();
  doter();
  //Printing E
  doter();
  //Printing V
  doter();
  doter();
  doter();
  dasher();
  //Printing A
  doter();
  dasher ();
  //Printing N
  dasher();
  doter();
  //Printing S
  doter();
  doter();
  doter();
  //Printing H
  doter();
  doter();
  doter();
  doter();
  //Printing U 
  doter();
  doter();
  dasher();
  //END
 
}
