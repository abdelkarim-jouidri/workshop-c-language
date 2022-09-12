#include<stdio.h>
#include<math.h>
#include<time.h>
int main(){
    int integer;
    int number = time(NULL);
    int random = number % 7; 
    switch(random){
    	case 0 : 
    	printf("monday");
    	break;
    	case 1 : 
    	printf("tuesday");
    	break;
		case 2 : 
    	printf("wesdnesday");
    	break;
		case 3 : 
    	printf("thursday");
    	break;
		case 4 : 
    	printf("friday");
    	break;
		case 5 : 
    	printf("saturday");
    	break;
    	case 6 : 
    	printf("sunday");
    	break;
    	default : break;
	}

}
