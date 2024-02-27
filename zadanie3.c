#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
}; 

struct Rect{
    int bokA;
    int bokB;
};

void move(struct Point *p_ptr, int moveByX, int moveByY) {
    p_ptr->x += moveByX;
    p_ptr->y += moveByY;
}

int calcRectArea(struct Rect *rect){
    return rect->bokA * rect->bokB;
}

int main() {
    struct Point punkt = {3, 5};
    move(&punkt, 2, 2);
    printf("Nowe wspolrzedne: (%d, %d)\n", punkt.x, punkt.y);

    struct Rect prostokat = {2, 5};
    int pole = calcRectArea(&prostokat);
    printf("pole prostokata to: %d", pole);
    return 0;
}