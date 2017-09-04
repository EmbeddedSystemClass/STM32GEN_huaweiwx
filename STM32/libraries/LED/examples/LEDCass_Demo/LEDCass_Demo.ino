#include <LED.h>
//example for LED lib  LEDClass application   by huawei<huaweiwx@sina.com> 2016.10.28

//LEDClass myLed;                  //init LEDClass myLed(default LED_BUILTIN)  HIGH ON;
LEDClass myLed(LED_BUILTIN, LOW);  //init LEDClass LeD(LED_BUILTIN, LOW)  LOW ON;

#if BOARD_NR_LED>1
  LEDClass myLed1(LED1_BUILTIN, LOW);   //init LEDClass Led2  LOW ON;
#endif

#if BOARD_NR_LED>2
  LEDClass myLed2(LED2_BUILTIN, LOW);   //init LEDClass Led3  LOW ON;
#endif


void setup() {
  //  put your setup code here, to run once:
  myLed.Init();

#if BOARD_NR_LED>1
  myLed1.Init();
#endif

#if BOARD_NR_LED>2
  myLed2.Init();
#endif
}

void loop() {
  // put your main code here, to run repeatedly:

  myLed.flash(10, 990, 1);   

#if BOARD_NR_LED>1
  myLed1.flash(10, 490, 2);
#endif

#if BOARD_NR_LED>2
  myLed2.flash(10, 320, 3);
#endif
}
