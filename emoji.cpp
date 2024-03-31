#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set the color to yellow for the face
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);

    // Draw the face (a yellow circle)
    circle(250, 250, 100);
    floodfill(250, 250, YELLOW);

    // Set the color to black for the eyes
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);

    // Draw the eyes (two black circles)
    circle(200, 220, 10);
    floodfill(200, 220, BLACK);
    circle(300, 220, 10);
    floodfill(300, 220, BLACK);

    // Set the color to black for the mouth
    setcolor(BLACK);

    // Draw the mouth (a curved line)
    arc(250, 250, 200, 340, 50);

    getch();
    closegraph();
    return 0;
}
