#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


char characters[] = {'H' , 'e' , 'l' , 'l' , 'o'};
int delayofchar = 50;
int delayofblank = 500;
const int b[] = {0,1,2,3,4,5,6,7,8,9};
/*digital*/
#define b1 13
#define b2 10
#define b3 9
#define b4 8
#define b5 7
#define b6 6
/*Analog*/
#define b7 A0
#define b8 A1
#define b9 A2
#define b0 A3
#define EN A4
#define LED A5

  bool b1_b = 1;
  bool b2_b = 1;
  bool b3_b = 1;
  bool b4_b = 1;
  bool b5_b = 1;
  bool b6_b = 1;
  bool b7_b = 1;
  bool b8_b = 1;
  bool b9_b = 1;
  bool b0_b = 1;
  bool EN_b = 1;
  bool HW = 1;
  int a = 0;
  int Pass = 0;
  int wrong = 0;
  bool Passopan = true;
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  Serial.begin(9600);
  pinMode(EN , INPUT_PULLUP);
  pinMode(b1 , INPUT_PULLUP);
  pinMode(b2 , INPUT_PULLUP);
  pinMode(b3 , INPUT_PULLUP);
  pinMode(b4 , INPUT_PULLUP);
  pinMode(b5 , INPUT_PULLUP);
  pinMode(b6 , INPUT_PULLUP);
  pinMode(b7 , INPUT_PULLUP);
  pinMode(b8 , INPUT_PULLUP);
  pinMode(b9 , INPUT_PULLUP);
  pinMode(b0 , INPUT_PULLUP);
  pinMode(LED , OUTPUT);
  /*
  for(int i = 0 ; i <= 9 ; i++ ){
    int jac = b + b[i];
    Serial.println(jac);
    pinMode(jac, INPUT_PULLUP);
    }
*/
}

void loop() {
  int EN_state = digitalRead(EN);
  int b1_state = digitalRead(b1);
  int b2_state = digitalRead(b2);
  int b3_state = digitalRead(b3);
  int b4_state = digitalRead(b4);
  int b5_state = digitalRead(b5);
  int b6_state = digitalRead(b6);
  int b7_state = digitalRead(b7);
  int b8_state = digitalRead(b8);
  int b9_state = digitalRead(b9);
  int b0_state = digitalRead(b0);
  if(Passopan == true and HW == 1){
  lcd.setCursor(1,0);
  lcd.print("Write Password:");
  lcd.setCursor(0,1);
  HW = 0;
    }
 
    /*----------------button-1----------------------*/
      lcd.setCursor(a,1);
  if(b1_state == 0 and b1_b == 1 and Passopan == true){
    b1_b = 0;
    a++;
    lcd.print('#');
    Serial.println(b1_state);
    }
  if(b1_state == 1 and b1_b == 0){b1_b = 1;}


    /*--------------------button-1------------------*/

    /*----------------button-2----------------------*/
  if(b2_state == 0 and b2_b == 1 and Passopan == true ){
    b2_b = 0;
    a++;
    lcd.print('#');
    Serial.println(b2_state);
    }
  if(b2_state == 1 and b2_b == 0){b2_b = 1;}


    /*--------------------button-2------------------*/

    /*----------------button-1----------------------*/
  if(b3_state == 0 and b3_b == 1 and Passopan == true){
    b3_b = 0;
    a++;
    lcd.print('#');
    Serial.println(b3_state);
    }
  if(b3_state == 1 and b3_b == 0){b3_b = 1;}


    /*--------------------button-1------------------*/

    /*----------------button-1----------------------*/
  if(b4_state == 0 and b4_b == 1 and Passopan == true){
    b4_b = 0;
    a++;
    lcd.print('#');
    Serial.println(b4_state);
    if(a == 1){Pass = 1;};
    if(a == 3 and Pass == 2){Pass = 3;};
    }
  if(b4_state == 1 and b4_b == 0){b4_b = 1;}


    /*--------------------button-1------------------*/

    /*----------------button-1----------------------*/
  if(b5_state == 0 and b5_b == 1 and Passopan == true){
    b5_b = 0;
    a++;
    lcd.print('#');
    Serial.println(b5_state);
    }
  if(b5_state == 1 and b5_b == 0){b5_b = 1;}


    /*--------------------button-1------------------*/

    /*----------------button-1----------------------*/
  if(b6_state == 0 and b6_b == 1 and Passopan == true){
    b6_b = 0;
    a++;
    lcd.print('#');
    Serial.println(b6_state);
    }
  if(b6_state == 1 and b6_b == 0){b6_b = 1;}


    /*--------------------button-1------------------*/

    /*----------------button-1----------------------*/
  if(b7_state == 0 and b7_b == 1 and Passopan == true){
    b7_b = 0;
    a++;
    lcd.print('#');
    Serial.println(b7_state);
    if(a == 2 and Pass == 1){Pass = 2;};
    }
  if(b7_state == 1 and b7_b == 0){b7_b = 1;}


    /*--------------------button-1------------------*/

    /*----------------button-1----------------------*/
  if(b8_state == 0 and b8_b == 1 and Passopan == true){
    b8_b = 0;
    a++;
    lcd.print('#');
    Serial.println(b8_state);
    if(a == 4 and Pass == 3){Pass = 4;};
    }
  if(b8_state == 1 and b8_b == 0){b8_b = 1;}


    /*--------------------button-1------------------*/

    /*----------------button-1----------------------*/
  if(b9_state == 0 and b9_b == 1 and Passopan == true){
    b9_b = 0;
    a++;
    lcd.print('#');
    Serial.println(b9_state);
    }
  if(b9_state == 1 and b9_b == 0){b9_b = 1;}


    /*--------------------button-1------------------*/


    /*----------------button-1----------------------*/
  if(b0_state == 0 and b0_b == 1 and Passopan == true){
    b0_b = 0;
    a++;
    lcd.print('#');
    Serial.println(b0_state);
    }
  if(b0_state == 1 and b0_b == 0 and Passopan == true){b0_b = 1;}


    /*--------------------button-1------------------*/

    /*----------------button-1----------------------*/
  if(EN_state == 0 and EN_b == 1 and Passopan == true){
    EN_b = 0;
    if(Pass == 4 and a == 4){
      lcd.clear();
      Passopan = false;
      digitalWrite(LED , HIGH);
      lcd.print("opan your door");
      Serial.println("This ia Congratiolation!!!!!!!!!!");
      }else if(wrong <= 3){
        lcd.clear();
        lcd.print("try agin!!");
        delay(1500);
        lcd.clear();
        Passopan = true;
        HW = 1;
        a = 0;
        wrong++;
        Serial.println("This ia not exist");
        }else{
        lcd.clear();
        lcd.print("try agin after:3");
        delay(3000);
        lcd.clear();
        Passopan = true;
        HW = 1;
        a = 0;
        wrong = 0;
          }
    Serial.println(EN_state);
    }
  if(EN_state == 1 and EN_b == 0){EN_b = 1;}


    /*--------------------button-1------------------*/















    
}
