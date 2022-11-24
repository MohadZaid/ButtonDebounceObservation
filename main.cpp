/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "platform/mbed_thread.h"

DigitalIn Button(USER_BUTTON);
Serial comp(USBTX,USBRX);

int main(){
int count=0;  //cout is equal to zero 
while(1){   //Super loop 
if(Button==1){   //If button is equal to one 
printf("|");  //print "|"
}
else{
printf("0");  //print zero "0"
         }
    }
}