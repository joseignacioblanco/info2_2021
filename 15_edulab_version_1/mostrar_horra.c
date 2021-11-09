/*The following C source code prints the current time to the standard output stream.
*/
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    time_t current_time;
    char* c_time_string;

    /* Obtain current time. */
    current_time = time(NULL);

    if (current_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to obtain the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

    if (c_time_string == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Print to stdout. ctime() has already added a terminating newline character. */
    (void) printf("Current time is:---> %s", c_time_string);
    exit(EXIT_SUCCESS);
}
/*The output is:

Current time is Thu Sep 15 21:18:23 2016*/
