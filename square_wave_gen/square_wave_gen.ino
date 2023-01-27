// I found this code in an Arduino forum written by Nick Gammon in 2012.
// this will generate 1MHz squre waves on digital Pin 9 (D9).
// tested with an Arduino Uno.
// I used this sketch to reactivate my unlocked avrs (wrong set fuse bits) by using a Arduino uno as external clock for Pin 9 (XTAL1) on the avr
// e.g. an Atmega88 or Atmega48 microprocessor which I program with an USBasp programmer.
// So there is no need for complex circuits with capacitors and crystal oscillators.

void setup(void)
{
    DDRB = _BV(DDB1);                  //set OC1A/PB1 as output (Arduino pin D9, DIP pin 15)
    TCCR1A = _BV(COM1A0);              //toggle OC1A on compare match
    OCR1A = 7;                         //top value for counter
    TCCR1B = _BV(WGM12) | _BV(CS10);   //CTC mode, prescaler clock/1
}

void loop(void)
{
}