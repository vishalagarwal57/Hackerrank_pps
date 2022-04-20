#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int totalSeconds;
    scanf("%d",&totalSeconds);
     int seconds = (totalSeconds % 60); 
     int minutes = (totalSeconds % 3600) / 60; 
     int hours = (totalSeconds % 86400) / 3600;
     int days = (totalSeconds % (86400 * 30)) / 86400; 
     printf("The Duration is %d days %d hours %d minutes %d seconds",days,hours,minutes,seconds);
     return 0;
}
