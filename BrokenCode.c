#include <stdio.h>
#include <time.h>

int main()
{
    /*The code from here to line 13 should work. This code retrieves the time from the system, however it may be in the wrong time zone. Also, ignore the error ending with [-Wint-conversion]*/
    
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [];

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    /* All errors will be from here down */
    
 
 
 
 
 
 
    char timeval= localtime(&(time_t){time(NULL)});
    char str[10];
    printf("Please enter your name: ");
    scanf("%s", str);
    getchar()
    printf("Hello %n. \n", str);
    
    strftime (buffer,80,"The time is currently %I:%M%p.",timeinfo);
    puts (buffer);
    return 0;
}
