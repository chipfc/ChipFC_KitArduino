/*********************************************************************************
//  Chương trình  : AnalogRotation.ino
//  Tác giả       : hyu
//  Ngày cập nhật : 21 Oct 2017
//  Mô tả         : Đọc giá trị biến trở qua 1 chân Analog, sau đó xuất giá trị đọc được qua cổng UART-Serial.
//  Chương trình này hoàn toàn mở và được sử dụng theo điều khoản của mã nguồn mở
//  Tham khảo http://chipfc.com/ để biết thêm chi tiết
*********************************************************************************/

int KitPotentionMeterPin = A0;  // Tín hiệu từ biến trở được nối vào chân A0
int ADCValue  = 0;
float Voltage = 0;
void setup()
{  
  //Khởi tạo cổng giao tiếp với máy tính
  Serial.begin(9600);      
  Serial.println("begin!");
}

void loop()
{
  // Đọc giá trị ADC trên chân A0 của board Arduino.
  ADCValue = analogRead(A0);
  // Xuất giá trị ADC đọc được
  // Giá trị ADC là số 10bit, tức có giá trị từ 0 - 0123
  Serial.print("Gia tri ADC = ");
  Serial.println(ADCValue);
  // Chuyển đổi giá trị Analog đọc được ( 0 - 1023) sang giá trị hiệu điện thế ( 0 - 5V)
  Voltage = ADCValue * (5.0 / 1023.0);
  Serial.print("Gia tri hieu dien the = ");
  Serial.println(Voltage);
  // Sau 200ms ( mili giây) lặp lại 1 lần
  delay(200);  
}


