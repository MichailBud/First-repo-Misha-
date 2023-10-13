const int BUZ = 9;
const byte COUNT_NOTES = 20;
int frequences [COUNT_NOTES] = {698,659,659,587,587,698,659,587,587,659,698,932,880,880,698,698,932,880,659,0}; 
int durations [COUNT_NOTES] =  {250,250/2,250,250/2,250,250/2,250,250,250/2,250/2,250/2,250,250/2,250,250/2,250,250/2,250,240*2,20};



 
void setup() {
pinMode(BUZ,OUTPUT);
}

void loop() {
 for(int i = 0; i <= COUNT_NOTES-1; i++){
  tone(BUZ ,frequences[i],durations[i]*2);
  delay (durations[i]*2);
  noTone(BUZ);
 }
}
