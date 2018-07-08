int vphoto = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  //analogRead(A0);

  vphoto = (analogRead(A0));

  digitalWrite(5, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);

  if (vphoto < 300) {
digitalWrite(5, HIGH);

  }
  else if (vphoto < 550) {
    digitalWrite(2, HIGH);
  }
  else if (vphoto > 550) {
    digitalWrite(3, HIGH);
  }

  delay(300);

  Serial.println(analogRead(A0));
}
