#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 8;

    // TASK A
    printf("Task A:\n");
    if ( y == 8 ) {
        if ( x == 5 ) {
            puts( "@@@@@" );
            puts( "$$$$$" );
            puts( "&&&&&" );
        }
    }

    // TASK B
    printf("Task B:\n");
    if ( y == 8 ) {
        if ( x == 5 ) {
            puts( "@@@@@" );
        }
    }

    // TASK C
    printf("Task C:\n");
    if ( y == 8 ) {
        if ( x == 5 ) {
            puts( "@@@@@" );
            puts( "&&&&&" );
        }
    }

    y = 7;

    // TASK D
    printf("Task D:\n");
    if ( y == 7 ) {
        if ( x == 5 ) {
            puts( "#####" );
            puts( "$$$$$" );
            puts( "&&&&&" ); 
        }
    }
}