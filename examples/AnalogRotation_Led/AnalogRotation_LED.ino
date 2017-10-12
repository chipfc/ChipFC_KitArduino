/*********************************************************************************
//  Chương trình  : AnalogRotation.ino
//  Tác giả       : hyu
//  Ngày cập nhật : 21 Oct 2017
//  Mô tả         : Đọc giá trị biến trở qua 1 chân Analog, Sáng Led mạnh/yếu dựa trên giá trị đọc được.
//  Chương trình này hoàn toàn mở và được sử dụng theo điều khoản của mã nguồn mở
//  Tham khảo http://chipfc.com/ để biết thêm chi tiết
//  Hiểu thêm về PWM trong Arduino : https://www.arduino.cc/en/Tutorial/PWM
*********************************************************************************/
int LedDisplay = 9;              // LED được nối vào chân PWM
int KitPotentionMeterPin = A0;  // Tín hiệu từ biến trở được nối vào chân A0
int ADCValue  = 0;
void setup()
{
  pinMode(LedDisplay,OUTPUT);   // Thiết lập chân D9 là chân OUTPUT
}

void loop()
{
  // Đọc giá trị ADC trên chân A0 của board Arduino.
  ADCValue = analogRead(A0);
  analogWrite(LedDisplay, ADCValue);
  // Sau 10ms ( mili giây) lặp lại 1 lần
  delay(10);  
}


