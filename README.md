# Arduino LED Chaser with Push Button

## Overview

This project is an Arduino-based LED chaser controlled using a push button.

When the push button is not pressed, one LED remains ON. When the button is pressed, the LEDs turn ON sequentially, creating a running/chasing LED effect.

## Components Used

* Arduino board
* 11 LEDs
* Push button
* Current-limiting resistors for LEDs
* Pull-down/pull-up resistor for push button, depending on circuit configuration
* Breadboard
* Jumper wires

## Pin Configuration

| Arduino Pin | Function          |
| ----------- | ----------------- |
| D2          | Push button input |
| D3          | LED 1             |
| D4          | LED 2             |
| D5          | LED 3             |
| D6          | LED 4             |
| D7          | LED 5             |
| D8          | LED 6             |
| D9          | LED 7             |
| D10         | LED 8             |
| D11         | LED 9             |
| D12         | LED 10            |
| D13         | LED 11            |

## Working

The Arduino continuously reads the state of the push button connected to digital pin 2.

### Button Not Pressed

When the button input is LOW:

* LED connected to pin 3 remains ON.
* All other LEDs remain OFF.

### Button Pressed

When the button input becomes HIGH:

* The LED on pin 3 turns OFF.
* LEDs connected from pins 4 to 13 turn ON sequentially.
* Each LED remains ON for approximately 100 ms.
* This produces a running LED/chaser effect.
* The sequence repeats while the button remains pressed.

## Concepts Learned

This project helped me understand:

* Arduino digital input and output
* `pinMode()`
* `digitalRead()`
* `digitalWrite()`
* Push-button interfacing
* LED interfacing
* Pull-up/pull-down resistors
* Conditional statements (`if` / `else`)
* Timing using `delay()`
* Sequential control of multiple outputs

## Future Improvements

Possible improvements include:

* Replacing repeated LED commands with arrays and `for` loops
* Adding adjustable LED chasing speed
* Using a potentiometer to control the speed
* Adding different LED animation patterns
* Using button presses to switch between patterns
* Replacing `delay()` with `millis()` for non-blocking timing

## Author

Rachit Verma
