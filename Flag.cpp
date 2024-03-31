#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw green rectangle for the background
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(50, 50, 600, 400);
    floodfill(300,200,GREEN);


    // Draw red circle for the circle in the center
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(325, 225, 100);
    floodfill(325,225,RED);


    getch();
    closegraph();
    return 0;
}
