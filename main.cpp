/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "platform/mbed_thread.h"

DigitalIn Button(USER_BUTTON);
Serial comp(USBTX,USBRX);

int main(){

int count=0;
while(1){
if(Button==1){
printf("|");
}
else{
printf("0");
}
}
}