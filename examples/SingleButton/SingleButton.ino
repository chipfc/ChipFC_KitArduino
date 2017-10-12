/*********************************************************************************
//  Chương trình  : SingleButton.ino
//  Tác giả       : hyu
//  Ngày cập nhật : 21 Oct 2017
//  Mô tả         : Đọc trạng thái của nút nhấn. Khi được nhấn thì đèn led trên board sáng, nhả thì đèn led tắt
//  Tham khảo http://chipfc.com/ để biết thêm chi tiết
*********************************************************************************/
const int ButtonPin = 12;      //  Tín hiệu từ nút nhấn nối vào board Arduino
const int LedBuiltInPin =  13;   //  Led có sẵn trên mạch nối vào chân D13, LED được tích cực mức cao.

// Biến khởi tạo trạng thái của nút nhấn
int ButtonState = 0;

void setup() {
  // Khởi tạo chân nối với LED là OUTPUT
  pinMode(LedBuiltInPin, OUTPUT);
  // Khởi tạo chân nối với nút nhấn là INPUT
  pinMode(ButtonPin, INPUT);
}

void loop() {
  // Đọc trạng thái của nút nhấn
  ButtonState = digitalRead(ButtonPin);

  // Vì một chân nút nhấn nối vô board, chân còn lại nối nguồn. Nên khi nhấn, chân của board được nối nguồn. 
  // Do đó, khi kiểm tra trạng thái của nút nhấn, nếu được nhấn thì = HIGH
  if (ButtonState == HIGH) {
    // Bật LED
    digitalWrite(LedBuiltInPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(LedBuiltInPin, LOW);
  }
}

