#include <stdio.h>
#include<wiringPi.h>
int main()
 {
while(1)
{
char * filename = "/home/pi/Desktop/Date/selva.txt";
int num;
FILE *fptr;
fptr= fopen(filename,"r");
fscanf(fptr,"%d",&num);
printf("%d",num);
fclose(fptr);
 wiringPiSetupGpio();
 int LED = 18;
pinMode(LED,OUTPUT);
if(num==1)
 {
	digitalWrite(LED,HIGH);
 }
else if(num==0)
  {
	digitalWrite(LED,LOW);
  }	 
}
return 0;
}
