# MakerNano
Arduino Code for Maker Nano Education Microcontroller

# Layout

![image](https://user-images.githubusercontent.com/52134197/187786035-81562c90-e004-4f04-ac65-cc848d7089c9.png)


# Pinout
![image](https://user-images.githubusercontent.com/52134197/187784991-94ed8a67-fbf3-4b7d-a2ee-227714b21448.png)
  

## Digital IO pins:
- Pins D0 and D1 cannot be used as they are reserved for serial (USB) communication.
- Pin D2 - D13 can be addressed but certain pins have specific functions.
- Pin A0 - A5 can also be used as digital IOs.



## Analog Inputs:
- Pin A0 - A7 can be used to read analog signals.
These are variable voltage values. Where 0V - 5V is
read and converted to a numerical value from 0 - 1023,
(eg. if a signal of 2.5V is input, a value of 512 will be returned.

## The controller has 12 addressable LEDS.(D2 - D13)
Using the LEDS on D2,D3,D8 should be avoided, as:
- D2 is the button pin and can handle interupts.
- D3 is the other pin that can handle interupts.
- D8 is the Piezo Buzzer's pin

# Tips

When not using Piezo Buzzer (Pin 8) use switch it off.



