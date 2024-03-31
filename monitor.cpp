#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the monitor screen
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(100, 100, 500, 400);

    // Draw the frame of the screen
    setcolor(DARKGRAY);
    rectangle(100, 100, 500, 400);

    // Draw the stand
    setfillstyle(SOLID_FILL, DARKGRAY);
    bar(250, 400, 350, 450);

    // Add a base for the stand
    rectangle(225, 450, 375, 460);

    getch();
    closegraph();
    return 0;
}
