/*
 * Copyright 2014-2016 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *            http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <wiringPi.h>
#include <stdint.h>
#define MAX_TIME    85
#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
int boolSwitchOff=0;
char *text[100];
#define LEN 150

//todo
/*
FILE *fptr;
fptr = fopen("selvamani","w");
if(fptr==NULL)
{
printf("error for create");
exit(1);
}
fprintf(fptr,"%d",10);
fclose(fptr);
*/
char * filename = "/home/pi/Desktop/8refileupload/kaademo.txt";
int butPin = 17; // Active-low button - Broadcom pin 17, P1 pin 11
int btnpressCount=0;

char * dhtbutton_read_val(int butPin) {
	char *btnpress = "2";
	// Set button as INPUT
	pinMode(butPin, INPUT);
	if (digitalRead(butPin)){
		// Button is released if this returns 1 ON
		btnpress = "0";
             
		if (boolSwitchOff== 1){
			btnpressCount++;
                      // writeFile(filename,btnpressCount);
		}
		boolSwitchOff = 0;
		return btnpress;
	} else {
		// If digitalRead returns 0, button is pressed OFF
		btnpress = "2";
		boolSwitchOff=1;
		return btnpress;
	}
	return btnpress;
}

//--Return the button press counts

unsigned long long time_value() {
  struct timeval tv;

   gettimeofday(&tv, NULL);

unsigned long long millisecondsSinceEpoch =
    (unsigned long long)(tv.tv_sec) * 1000 +
    (unsigned long long)(tv.tv_usec) / 1000;

printf("%llu\n", millisecondsSinceEpoch/1000);
char strButton[256];
sprintf(strButton,"%llu",millisecondsSinceEpoch/1000);
printf("%s\n",strButton);
return  strButton;
 
} 
//int dhtbutton_pressCount_val()
//{
// printf("button press count:%d\n",btnpressCount);
//return btnpressCount;
//}
int dhtbutton_pressCount_val()
{
   int countval;
   FILE *fptr;

   if ((fptr = fopen(filename,"rb+")) == NULL){
      	printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
    	exit(1);
   }

   fscanf(fptr,"%d",&btnpressCount);

   printf("Value of countval =%d",btnpressCount);
   fflush(fptr);
   fclose(fptr);

   return btnpressCount;
}
