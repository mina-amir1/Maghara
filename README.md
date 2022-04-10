# Events Library

## event( int pin, char *timeStart , int dur)
### Params:
pin: the pin number : INTEGER <br />
timeStart: The Event Time (mm:ss): String <br />
dur: duration of the event (sec): INTEGER <br />
<hr/>

## flasher(int pin ,char *timeStart ,int speed ,int dur)
### Params:
pin: the pin number : INTEGER <br />
timeStart: The Event Time (mm:ss): String <br />
speed: The Flashing speed (ms): INTEGER
dur: duration of the event (sec): INTEGER <br />

## Example Code:

```
#include "events_lib.h"
void loop() {
    // Open Motor on pin 13 @ 1:05 from the show and will end in 15 sec
   // Motor will stop @ 1:20
  event(13,"1:05":,15);

   //Flash the lights on pin 13 @ 00:05 from the show with speed of 150 milliseconds
   // for 15 seconds ie. The flashes will stop @ 00:20
  flasher(13,"0:5",150,15);
}
```