#define led  11
float pos;
int v;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(11, INPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
 Serial.println(analogRead(A0));
 pos = analogRead(A0);
 pos = pos/4.1;
 analogWrite(led,v);
}
