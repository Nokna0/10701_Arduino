#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
  {'0', '1', '2', '3'},
  {'4', '5', '6', '7'},
  {'8', '9', 'a', 'b'},
  {'c', 'd', 'e', 'f'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {10, 11, 12, 13};

char customKey;
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), 
rowPins, colPins, ROWS, COLS);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  keyPress();
}

void keyPress()
{                                 
  customKey = customKeypad.getKey();
  if (customKey) 
  {
    Serial.println(customKey);
    delay(100);
  }
}
