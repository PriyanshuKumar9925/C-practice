// Write a program to find the area of the rectangular garden provided that the length of the rectangular graden is 15 meters and breadth is 10 meters.

#include <stdio.h>

int area(int length, int breadth) {
    return length * breadth;
}

int main() {
    int length = 15;
    int breadth = 10;
    int garden_area = area(length, breadth);

    printf("The area of the rectangular garden is: %d square meters\n", garden_area);

    return 0;
}
