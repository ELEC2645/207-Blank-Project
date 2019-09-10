/*
ELEC2645 Embedded Systems Project
School of Electronic & Electrical Engineering
University of Leeds
Name: 
Username: 
Student ID Number: 
Date: XX/XX/XXXX
*/

// Includes
#include "mbed.h"
#include "Gamepad.h"
#include "N5110.h"
#include "stdio.h"


// objects
Gamepad pad;
N5110 lcd;


int main()
{
    // Initalise objects
    lcd.init();
    pad.init();
   
   // Main loop
    while (1) {
        pad.leds_on();
        pad.tone(1000,1);
        wait(1);
        pad.leds_off();
        pad.tone(1500,1);
        wait(1);
    }
        
}
