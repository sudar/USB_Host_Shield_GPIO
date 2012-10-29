/**
 * @mainpage USB Host Shield GPIO
 *
 * @brief An Arduino library, that allows you to access the GPIO pins fo the Max IC used by [USB Host Shield](http://www.circuitsathome.com/products-page/arduino-shields/usb-host-shield-2-0-for-arduino).
 *
 * @note Requires v2.0 of USB Host Shield Library available at https://github.com/felis/USB_Host_Shield_2.0
 *
 * @author Sudar <http://sudarmuthu.com> <http://hardwarefun.com>
 * @version 0.1
 * @date 2012-10-26
 */

/*
 * Copyright 2011  Sudar Muthu  (http://sudarmuthu.com)
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <sudar@sudarmuthu.com> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer or coffee in return - Sudar
 * ----------------------------------------------------------------------------
 */

#include "USB_Host_Shield_GPIO.h"

MaxGPIO::MaxGPIO() {
    Init();
}

/**
 * Write is performed by calling the regWr function of the USB class
 *
 * @todo Find a better way to check if pin is 0<= pin <= 7
 */
void MaxGPIO::write(byte pin, byte val) {
    //TODO: Find a better way to do this comparison
    if (pin < 8) {
        // process only if the pin is less than 8

        uint8_t bit = pinToBitMask(pin);
        uint8_t reg = pinToRegister(pin);
        uint8_t out = regRd(reg);
        
        if (val == LOW) {
            out &= ~bit;
        } else {
            out |= bit;
        }

        regWr(reg, out);
    } else {
        //Serial.print(pin);Serial.println(" not a pin");
    }
}

/**
 * Read is performed by calling the regRd function of the USB class
 *
 * @todo Find a better way to check if pin is 0<= pin <= 7
 */
byte MaxGPIO::read(byte pin) {

    //TODO: Find a better way to do this comparison
    if (pin < 8) {
        // process only if the pin is less than 8

        uint8_t bit = pinToBitMask(pin);
        uint8_t reg = pinToRegister(pin);
        uint8_t out = regRd(reg);
        
        if (out & bit) {
            return HIGH;
        } else {
            return LOW;
        }
    } else {
        //Serial.print(pin);Serial.println(" not a pin");
        return LOW;
    }
}
