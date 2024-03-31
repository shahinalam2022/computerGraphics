#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

   setcolor(15);
setfillstyle(1,1);
ellipse(300,200,0,360,150,80);
floodfill(301,201,15);


setfillstyle(1,YELLOW);
line(154,180,110,165);
line(110,165,120,200);
line(120,200,110,235);
line(110,235,154,220);
floodfill(121,199,15);


setcolor(15);
setfillstyle(1, YELLOW);
line(320,278,280,350);
line(345,276,280,352);
floodfill(321,279,15);


setcolor(15);
setfillstyle(1,YELLOW);
line(320,120,280,48);
line(280,48,345,124);
floodfill(321,119,15);

setcolor(15);
setfillstyle(1,BLUE);
line(360,128,340,200);
line(340,200, 360, 271);
floodfill(365,133,15);


setcolor(15);
setfillstyle(1,GREEN);
circle(400,200,20);
floodfill(401,201,15);

circle(480,200,20);
circle(520,200,8);
circle(515,220,8);
circle(510,180,10);
    getch();
    closegraph();
    return 0;
}
