#include<stdio.h>
#include<wiringPi.h>
int main()
{
 wiringPiSetupGpio();

while(1);

{
int pot_Pin = 17;
int bulp = 18;
//digitalWrite(bulp,OUTPUT);
digitalWrite(bulp,HIGH);

}
return 0;
}
