#include<stdio.h>
#include<wiringPi.h>
int main()
{
 wiringPiSetupGpio();

int pot_Pin = 18;
int bulp = 17;
digitalWrite(bulp,OUTPUT);
digitalWrite(bulp,HIGH);
while(1)
{

int sensorValue =digitalRead(pot_Pin);
if(digitalRead(pot_Pin))
{
printf("\nbulp glow");
digitalWrite(bulp,HIGH);
}
else
{
printf("\nbulp notglow");
digitalWrite(bulp,LOW);
}
//float voltage = sensorValue * (5.0 / 1023.0);
//printf("%d\n",sensorValue);
//printf("%f",voltage);

//digitalWrite(bulp,HIGH);
}
return 0;
}

