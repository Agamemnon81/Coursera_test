const byte waveform[] = {8,10,12,14,15,15,15,14,12,10,8,6,4,2,1,1,1,2,4,6};
void setup() {DDRB|=0x0F;}
void loop() {for(int i = 0;i < 20;i++){PORTB = waveform[i];
delayMicroseconds(200);}}
