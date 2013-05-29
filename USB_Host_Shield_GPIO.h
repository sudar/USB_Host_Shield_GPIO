/**
 * @mainpage USB Host Shield GPIO
 *
 * An Arduino library, that allows you to access the GPIO pins fo the Max IC used by [USB Host Shield](http://www.circuitsathome.com/products-page/arduino-shields/usb-host-shield-2-0-for-arduino).
 *
 * @note Requires v2.0 of USB Host Shield Library available at https://github.com/felis/USB_Host_Shield_2.0
 *
 * @author Sudar <http://sudarmuthu.com> <http://hardwarefun.com>
 * @version 1.0.0
 * @copyright BEERWARE
 * @date 2012-10-26
 * http://hardwarefun.com/projects/usb-host-shield-gpio
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

#include <Usb.h>
#include <avr/pgmspace.h>

#ifndef USB_Host_Shield_GPIO_H
#define USB_Host_Shield_GPIO_H

#define pinToRegister(P) ( pgm_read_byte( pin_to_register_PGM + (P) ) )
#define pinToBitMask(P) ( pgm_read_byte( pin_to_bit_mask_PGM + (P) ) )

const uint8_t PROGMEM pin_to_register_PGM[] = {
	rIOPINS1, /* 0 */
	rIOPINS1,
	rIOPINS1,
	rIOPINS1,
	rIOPINS2, /* 4 */
	rIOPINS2,
	rIOPINS2,
	rIOPINS2,
};

const uint8_t PROGMEM pin_to_bit_mask_PGM[] = {
	_BV(0), /* rIOPINS1 */
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(0), /* rIOPINS2 */
	_BV(1),
	_BV(2),
	_BV(3),
};

/**
 * Allows you to access the GPIO pins of the Max IC used by [USB Host Shield](http://www.circuitsathome.com/products-page/arduino-shields/usb-host-shield-2-0-for-arduino)
 *
 * @headerfile <>
 */
class MaxGPIO : public USB {

public:

    /**
     * Default constructor
     */
    MaxGPIO();

    /**
     * Write data to a GPIO pin.
     *
     * @param pin - The pin to which the data has to be written
     * @param val - The value that needs to be written
     */
    void write(byte pin, byte val);

    /**
     * Read data from a GPIO pin.
     *
     * @param pin - The pin from which the data has to be read
     *
     * @return The value that was read
     */
    byte read(byte pin);
};

#endif
