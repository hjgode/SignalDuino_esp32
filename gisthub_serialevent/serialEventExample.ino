void IRAM_ATTR serialEvent(){
while(Serial.available())
  Serial.print((char)Serial.read());
if(!Serial.available())
  Serial.print('1');
}
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Serial.print("test");
Serial.setInterrupt(&serialEvent);

}
String x = "";

void loop() {
  // put your main code here, to run repeatedly:
 //serialEvent();
}