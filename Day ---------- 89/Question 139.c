// Q139: Show that enums store integers by printing assigned values.

#include <stdio.h>
#include <string.h>
enum result {SUCCESS, FAILURE, TIMEOUT};
int main()
{
    enum result R;
    for(R=SUCCESS; R<=TIMEOUT; R++)
    {
        switch(R)
        {
            case SUCCESS:
            printf("SUCCESS = %d\n",R);
            break;
            case FAILURE:
            printf("FAILURE = %d\n",R);
            break;
            case TIMEOUT:
            printf("TIMEOUT = %d",R);
            break;
        }
    }
    return 0;
}