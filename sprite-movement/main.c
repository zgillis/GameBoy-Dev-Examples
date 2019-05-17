#include <gb/gb.h>
#include <stdio.h>
#include "sprites.c"

const int MOVE_DISTANCE = 8;

int main()
{
    set_sprite_data(0, 2, Smiler);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    while(1)
    {
        switch(joypad()) {
            case J_LEFT:
                scroll_sprite(0, -MOVE_DISTANCE, 0);
                break;
            case J_RIGHT:
                scroll_sprite(0, MOVE_DISTANCE, 0);
                break;
            case J_UP:
                scroll_sprite(0, 0, -MOVE_DISTANCE);
                break;
            case J_DOWN:
                scroll_sprite(0, 0, MOVE_DISTANCE);
                break;
            case J_START:
                printf("NIGGER!");
                break;
        }

        
        delay(100);
    }
}
