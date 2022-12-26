
void toogle(uint8_t pin){
  static bool mem=HIGH;
  digitalWrite(pin,mem);
  mem=!mem;
}

void setup(){
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int var;
  var=analogRead(A0);
  Serial.println(var);
  toogle(LED_BUILTIN);
  delay(100);
}
