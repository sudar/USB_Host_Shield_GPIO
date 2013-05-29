/**
 * Example sketch to demonstrate USB_Host_Shield_GPIO Library
 *
 * @note Requires the following Arduino Libraries
 *      - v2.0 of USB Host Shield Library available at https://github.com/felis/USB_Host_Shield_2.0
 *      - v1.0.0 of USB Host Shield GPIO Library available at http://hardwarefun.com/projects/usb-host-shield-gpio
 *
 * @author Sudar <http://sudarmuthu.com> <http://hardwarefun.com>
 * @version 0.1
 * @date 2012-10-26
 */

/*
 * Copyright 2012  Sudar Muthu  (http://sudarmuthu.com)
 * ------------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * Sudar <http://sudarmuthu.com> wrote this file. 
 * As long as you retain this notice you can do whatever you want with this stuff.
 * If we ever meet and you are overcome with gratitude,
 * feel free to express your feelings via beverage :)
 * ------------------------------------------------------------------------------
 */

#include <Usb.h> // needed by Arduino IDE
#include <USB_Host_Shield_GPIO.h>

MaxGPIO max;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    max.write(0, HIGH);
    max.write(1, HIGH);
    max.write(2, HIGH);
    max.write(3, HIGH);
    max.write(4, LOW);
    max.write(5, LOW);
    max.write(6, LOW);
    max.write(7, LOW);
    Serial.print("0: "); Serial.println(max.read(0));
    Serial.print("1: "); Serial.println(max.read(1));

    delay(1000);

    max.write(0, LOW);
    max.write(1, LOW);
    max.write(2, LOW);
    max.write(3, LOW);
    max.write(4, HIGH);
    max.write(5, HIGH);
    max.write(6, HIGH);
    max.write(7, HIGH);
    Serial.print("0: "); Serial.println(max.read(0));
    Serial.print("1: "); Serial.println(max.read(1));

    delay(1000);
}
