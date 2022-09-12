#include<stdio.h>
int main(){
    float year, month, day, hour, min, sec;
    int index;
    puts("enter number of years : ");
    scanf("%f", &year);
    
	month = year * 12;
    day = year * 365;
    hour = year *8760;
    min = year * 525600;
    sec = year * 31540000;
    
    printf("select number from menu : \n 1) convert to years     2) convert to months \n");
    printf(" 3) convert to days     4) convert to hours \n");
    printf(" 5) convert to minutes     6) convert to seconds \n");
    
	scanf("%d",&index);
	
    switch(index){
    	case 1 : 
    	printf("%.2f years has %.2f years ", year,year);
    	break;
    	case 2 : 
    	printf("%.2f years has %.2f months", year, month);
    	break;
    	case 3 : 
    	printf("%.2f years has %.2f days", year, day);
    	break;
    	case 4 : 
    	printf("%.2f years has %.2f hours", year, hour);
    	break;
    	case 5 : 
    	printf("%.2f years has %.2f minutes", year, min);
    	break;
    	case 6 : 
    	printf("%.2f years has %.2f seconds", year, sec);
    	break;
    	default : puts("please enter a valid number");
    	break;
	}
//    printf("%.2f year(s) has %.2f months , %.2f days , %.2f hours , %.2f minutes and %.2f seconds  "
//           , year, month, day, hour, min, sec);

    return 0;
}
