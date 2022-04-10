void event(int pin , char *timeStart , int dur){
  char time[strlen(timeStart) + 1];
  strcpy(time, timeStart);
  char *tok= NULL;
  char* rest = time ;
  tok = strtok_r(rest,":",&rest);
  int mints = atoi(tok);
  tok = strtok_r(rest,":",&rest);
  int secs = atoi(tok) + (mints * 60);
  unsigned long microStart = secs * 1000000;
  unsigned long microStop = microStart + (dur * 1000000);
  if(microStart < micros() && microStop >micros())
   {
      digitalWrite(pin, HIGH);
   }
   else {
     digitalWrite(pin, LOW);
     }
}