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
