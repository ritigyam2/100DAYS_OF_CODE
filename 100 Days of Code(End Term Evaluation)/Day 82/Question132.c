//enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value
#include <stdio.h>

enum TrafficLight {
    RED,    // 0
    YELLOW, // 1
    GREEN   // 2
};

int main() {
    enum TrafficLight current_light = YELLOW; // Example: set the current state

    printf("Current Light: ");

    switch (current_light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Unknown State\n");
    }
    
    // Output for the example: Current Light: Wait

    return 0;
}