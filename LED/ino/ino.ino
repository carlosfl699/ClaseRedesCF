const int LED_PIN 13;

void setup(){
 pinMode(LED_PIN, OUTPUT);
 digitalWrite(LED_PIN, LOW);
 Serial.beggin(9600);
}

void loop(){
 if (serial.available()){
  String cmd = Serial.readStringUntill('\m');
  cmd.trin();

 if (cmd == "LED_ON") {
   digitalWrite(LED_PIN, HIGH);
   Serial.println("OK:LED_ON");
 } else if (cmd == "LED_OFF") {
   digitalWrite(LED_PIN, LOW);
   Serial.println("OK:LED_OFF");
   } else {

