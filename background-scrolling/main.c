#include <gb/gb.h>
#include "bgtiles.c"
#include "map.c"

int main()
{
    // Load tileset into memory
    set_bkg_data(0, 7, BgTiles);
    // Set background map (where loaded tiles are placed)
    set_bkg_tiles(0, 0, 40, 18, SimpleMap);

    SHOW_BKG;
    DISPLAY_ON;

    while(1)
    {
        scroll_bkg(1, 0);
        delay(100);
    }
}