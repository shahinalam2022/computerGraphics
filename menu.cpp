#include <graphics.h>
#include <conio.h>
#include <iostream>

using namespace std;


void car() {
    int i;
   for(i=0; i<700; i++)
    {

        line(20+i,250,60+i,200);
        line(60+i,200,100+i,250);
        line(10+i,250,110+i,250);
        //flag
        line(110+i,250,110+i,200);
        rectangle(90+i,200,110+i,210);

        circle(102+i, 205, 4);
        //tires
        circle(33+i,261,10);
        circle(80+i,261,10);
        //road
        line(0,270,700+i,270);

        setfillstyle(8,3);
        floodfill(61+i,210,WHITE);

        delay(10);
        cleardevice();
    }

}


void house() {
      line(100,100,150,50);
    line(150,50,200,100);

    line(150,50,350,50);
    line(350,50,400,100);

    rectangle(100,100,200,200);
    rectangle(200,100,400,200);
    rectangle(130,130,170,200);
    rectangle(250,120,350,180);

    //color start
    setfillstyle(2,3);
    floodfill(131,131,WHITE);
    floodfill(201,101,WHITE);

    setfillstyle(11,7);
    floodfill(101,101,WHITE);
    floodfill(150,52,WHITE);
    floodfill(163,55,WHITE);
    floodfill(251,121,WHITE);
}
void monitor() {
   setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(100, 100, 500, 400);


    setcolor(DARKGRAY);
    rectangle(100, 100, 500, 400);


    setfillstyle(SOLID_FILL, DARKGRAY);
    bar(250, 400, 350, 450);


    rectangle(225, 450, 375, 460);

}

void flag() {
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(50, 50, 600, 400);
    floodfill(300,200,GREEN);



    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(325, 225, 100);
    floodfill(325,225,RED);

}

void emoji() {

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);


    circle(250, 250, 100);
    floodfill(250, 250, YELLOW);


    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);

    circle(200, 220, 10);
    floodfill(200, 220, BLACK);
    circle(300, 220, 10);
    floodfill(300, 220, BLACK);


    setcolor(BLACK);


    arc(250, 250, 200, 340, 50);

}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int option;
    char ch;

    do {
        cleardevice();


        cout << "Select an option:" << endl;
        cout << "1. Car" << endl;
        cout << "2. House" << endl;
        cout << "3. Monitor" << endl;
        cout << "4. Flag" << endl;
        cout << "5. Emoji" << endl;
        cout << "6. Exit" << endl;


        cout << "Enter your choice: ";
        cin >> option;


        switch(option) {
            case 1:
                car();
                break;
            case 2:
                house();
                break;
            case 3:
                monitor();
                break;
            case 4:
                flag();
                break;
            case 5:
                emoji();
                break;

            case 6:
                exit(0);
            default:
                cout << "Invalid option! Please enter a number from 1 to 6." << endl;
        }

        cout << "Press any key to continue or 'q' to quit: ";
        cin >> ch;
    } while(ch != 'q');

    closegraph();
    return 0;
}
