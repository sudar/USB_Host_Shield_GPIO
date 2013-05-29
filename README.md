USB_Host_Shield_GPIO
====================

An Arduino library, that allows you access the GPIO pins of the Max 3421 IC present in the [USB Host Shield](http://www.circuitsathome.com/products-page/arduino-shields/usb-host-shield-2-0-for-arduino/).

Features
-------------

This library allows both read and write operations on the GPIO pins of the Max 3421 IC. Each pin can be read or written separately like the `digitalWrite` or `digitalRead`.

Also note that only digital write and read are supported, since the IC don't support PWM.

Installation
-------------

Download or checkout from github the library and place the `USB_Host_Shield_GPIO` folder inside your Arduino's /library folder. 

This library requires the [USB Host Shield library](https://github.com/felis/USB_Host_Shield_2.0), without which this can't work.

Hardware Setup
-------------

Stack the USB Host shield on top of Arduino. After that connect the GIn or GOut pins of the shield to your circuit as needed.

Usage
-------------

To use the library, you have to include the `USB_Host_Shield_GPIO.h` header file. After including the header file, create an instance of the `MaxGPIO` class. You can call the `write()` or `read()` method on that object that you have created. These functions are similar to the `digitalWrite()` and `digitalRead()` functions which is present in the core.

I have included an example sketch inside the `examples` folder that explains how you can access the library.

Also checkout my [blog post](http://hardwarefun.com/tutorials/accessing-gpio-pins-of-max-3421-ic-in-usb-host-shield), which explains how to use this library.

Demo Video
-------------

I have also [uploaded a video](http://www.youtube.com/watch?v=nQTmjkOqtaE), which shows how you can use this library to access the GPIO pins. In the video, I have added 8 LED’s to the 8 GOut pins and I control each of them separately.

License
-------------

The library and the examples are released under released under BeerWare license.

I would, however, consider it a great courtesy if you could email me and tell me about your project and how this code was used, just for my own continued personal gratification.

Stay updated
-------------

Updates about this library will be posted in the [Hardware Fun](http://hardwarefun.com) blog. You can also follow [@hardwarefun](http://twitter.com/hardwarefun) in twitter.

Versioning
-------------

The current version of the library is `1.0.0`. You can find the full history in the [HISTORY.md](HISTORY.md) file

This library adheres to [Semantic Versioning 2.0](http://semver.org/).
