// yui_maker using AtTiny 85 with multiplixer
//blinking one LED at every 500 ms. 
//code made from the library example
#include <light_CD74HC4067.h>

int rand_num;
               // s0 s1 s2 s3: select pins
CD74HC4067 mux(0, 1, 3, 4);   // create a new CD74HC4067 object with its four select lines

const int signal_pin = 2; // Pin Connected to Sig pin of CD74HC4067

void setup()
{
    pinMode(signal_pin, OUTPUT);      // set as output to write on mux channels
    digitalWrite(signal_pin, HIGH);   // HIGH will be written on Sig pin of MUX
}

void loop()
{
  rand_num = random(0, 17);
  mux.channel(rand_num);
  delay(500);
//  // loop through channels 0 - 15
//    for (int i = 0; i < 16; i++) {
//        mux.channel(i);
//        delay(1000);
//    }
}
