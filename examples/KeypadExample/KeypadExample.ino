/*********************************************************************************
//  Chương trình  : KeypadExample.ino
//  Tác giả       : hyu
//  Ngày cập nhật : 21 Oct 2017
//  Mô tả         : Đọc giá trị của ma trận phím. Xuất giá trị lên máy tính.
//  Chương trình này hoàn toàn mở và được sử dụng theo điều khoản của mã nguồn mở.
//  Tham khảo http://wiki.chipfc.com/ để biết thêm chi tiết
//  Thảo luận http://forum.chipfc.com/
*********************************************************************************/
#include <Keypad.h>

const byte ROWS = 4; // Bốn hàng
const byte COLS = 4; // Bốn cột
// Bảng giá trị tương ứng với bàn phím thực tế
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
// Thứ tự chân của bàn phím
// Chân 1 -> 4 : Hàng 1 -> Hàng 4
// Chân 5 -> 8 : Cột 1 -> Cột 4
byte rowPins[ROWS] = {11, 10, 9, 8}; //Kết nối Hàng 1 -> Hàng 4 theo thứ tự D11 -> D8
byte colPins[COLS] = {7, 6, 5, 4};  // Kết nối Cột  1 -> Cột 4 theo thứ tự D7 -> D4

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char key = keypad.getKey();
  
  if (key){
    Serial.println(key);
  }
}
