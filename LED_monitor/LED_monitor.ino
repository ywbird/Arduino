
// 시리얼 통신을 통해 받아올 데이터를 저장할 변수를 선언해줍니다.
char data;

void setup() {
  // 시리얼 통신을 사용하기 위해 baudrate를 설정해 줍니다.
  Serial.begin(9600);
  // LED 핀을 OUTPUT으로 설정합니다.
  pinMode(3, OUTPUT);
}

void loop() {
  // 만약 시리얼 통신을 통해 데이터가 전달이 되면,
  if (Serial.available()) {
    // 시리얼 통신을 통해 데이터를 받습니다.
    data = Serial.read();

    // 전달받은 데이터가 문자 1이면
    if (data == '1') {
      // LED를 켜줍니다.
      Serial.println("LED ON");
      digitalWrite(3, HIGH);
    }

    // 전달받은 데이터가 문자 2이면
    else if (data == '2') {
      // LED를 꺼줍니다.
      Serial.println("LED OFF");
      digitalWrite(3, LOW);
    }

    delay(100);
  }
}
