#include <Arduino.h>

String someString = "2019";

void setup() {
  //Replace instead of whatever you want number
  if(isNumeric(someString)){
    Serial.println("TRUE");
  }else{
    Serial.println("FALSE");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}

boolean isNumeric(String str) {
    unsigned int stringLength = str.length();
 
    if (stringLength == 0) {
        return false;
    }
    boolean seenDecimal = false;
 
    for(unsigned int i = 0; i < stringLength; ++i) {
        if (isDigit(str.charAt(i))) {
            continue;
        }
        if (str.charAt(i) == '.') {
            if (seenDecimal) {
                return false;
            }
            seenDecimal = true;
            continue;
        }
        return false;
    }
    return true;
}//fin isNumeric