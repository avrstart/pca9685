#include <fcntl.h>   
#include <stdio.h>   
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <stdint.h> 
#include "pca9685.h"

 
int main(int argc, char *argv[])
{

   int channel = 0;
   int servo_us = 0;
   init_9685();

   while(1){

       printf("set channel\n");
       scanf("%d", &channel );
       printf("channel = %d\n", channel );  
       
       printf("set servo us\n");
       scanf("%d", &servo_us);

       set_servo(servo_us, channel);
       printf("==========\n");
     
   }
   
   return 0;
}