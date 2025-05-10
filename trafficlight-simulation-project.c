#include<stdio.h>
#include<unistd.h>  // sleep ();

#define RED_DUR 10
#define YELLOW_DUR 3
#define GREEN_DUR 10


void displayLight(char* light, int dur);

int main()  {
    printf("\nTraffic Light\t||\tTime remaining\n");
    while(1)
    {
        displayLight("Red",RED_DUR);
        displayLight("Yellow",YELLOW_DUR);
        displayLight("Green",GREEN_DUR);
    }
    return 0;
}

void displayLight(char* light, int dur)
{   
    for(int i = dur; i > 0; i--){
    printf("\r%-15s\t||\t%2d", light, i);
  
    fflush(stdout);
    sleep(1);
    }
}