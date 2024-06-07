#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 8;

    // TASK A
    printf("Task A:\n");
    if ( y == 8 ) {

        if ( x == 5 ) {
             puts( "@@@@@" );
        } else {
            puts( "#####" );
        }

        puts( "$$$$$" );
        puts( "&&&&&" );
    }

    // TASK B
    printf("\nTask B:\n");
    if ( y == 8 ) {

        if ( x == 5 ) {
            puts( "@@@@@" );
        } else {
            puts( "#####" );
            puts( "$$$$$" );
            puts( "&&&&&" );  
        }
    
    }
    
    // TASK C
    printf("\nTask C:\n");
    if ( y == 8 ) {
        if ( x == 5 ) {
            puts( "@@@@@" );
        } else {
            puts( "#####" );
            puts( "$$$$$" );
        }
        puts( "&&&&&" ); 
    }

    y = 7;

    // TASK D
    printf("\nTask D:\n");
    if ( y == 8 ) {
        if ( x == 5 ) {
           puts( "@@@@@" ); 
        }
    } else {
        puts( "#####" );
        puts( "$$$$$" );
        puts( "&&&&&" ); 
    }  
}