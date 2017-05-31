#include <stdio.h>
#include<wiringPi.h>
int main()
 {
char * filename = "/home/pi/Desktop/8refileupload/kaademo.txt";
int num;
FILE *fptr;
fptr= fopen(filename,"r");
fscanf(fptr,"%d",&num);
fclose(fptr);
 wiringPiSetupGpio();
 int butPin = 17; 
 int boolswitch;
while(1)
{
    if(digitalRead(butPin))
      {
         if(boolswitch==0)
          {
           num++;
           delay(50);      
           printf(" \n num= %d",num);
           char sentence[1000] = {0}; 
           fptr = fopen(filename, "w");
            if(fptr == NULL)
                {
                    printf("Error!");
                    return;
                  }
          sprintf(sentence, "%d",num);
          fputs(sentence, fptr);   
          fclose(fptr);
          }  boolswitch=1; 
     }   
   else
   {
    delay(50);
    boolswitch = 0;
    }
 }
   return 1;
 }
