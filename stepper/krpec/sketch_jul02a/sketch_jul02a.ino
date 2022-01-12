#define A 2
#define B 3
#define C 4
#define D 5
#define NUMBER_OF_STEPS_PER_REV 512

void setup() {
  // put your setup code here, to run once:
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
}
void write(int a,int b,int c,int d){
digitalWrite(A,a);
digitalWrite(B,b);
digitalWrite(C,c);
digitalWrite(D,d);
}

void onestep(){
  int a =1;
write(1,0,0,1);
delay(a);
write(1,1,0,0);
delay(a);
write(0,0,0,1);
delay(a);
write(0,0,1,1);
delay(a);
write(0,0,1,0);
delay(a);
write(0,1,1,0);
delay(a);
write(0,1,0,0);
delay(a);
write(1,0,0,0);
delay(a);
}
void loop() {
  // put your main code here, to run repeatedly:
int i;
i=0;
while(i<NUMBER_OF_STEPS_PER_REV){
onestep();
i++;
}
}
