# Events Library

## event( int pin, char *timeStart , int dur)
### Params:
pin: the pin number : INTEGER <br />
timeStart: The Event Time (mm:ss): String <br />
dur: duration of the event (sec): INTEGER <br />


## Example Code:

```
void loop() {
    // Open Motor on pin 13 @ 1:05 from the show and will end in 15 sec
   // Motor will stop @ 1:20
  event(13,"1:05:,15);
}
```