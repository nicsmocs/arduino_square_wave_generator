# arduino_square_wave_generator
I found this code in an Arduino forum written by J.Christensen in 2012.   
This will generate 1MHz squre waves on digital Pin 9 (D9).   
I used this sketch to reactivate my unlocked avrs (wrong set fuse bits) by using a Arduino uno as external clock for Pin 9 (XTAL1) on the avr e.g. an Atmega88 or Atmega48 microprocessor which I program with an USBasp programmer.   
So there is no need for complex circuits with capacitors and crystal oscillators.   
Tested with an Arduino Uno.