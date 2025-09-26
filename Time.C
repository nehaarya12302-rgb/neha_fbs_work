#include <stdio.h>
int main(){
	int hours;
	int minutes;

	printf("Enter total minutes: ");
    scanf("%d", &minutes);
    
	hours = minutes / 60;  
	minutes =  minutes % 60;
	printf("Time: %d hours and %d minutes\n", hours, minutes);
	return 0; 
}
