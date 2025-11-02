#include <stdio.h>
void determine_quadrant(float x, float y) {
    printf("\nCoordinate: (%.2f, %.2f)\n", x, y); 
    if (x == 0 && y == 0) {
        printf("The point lies at the **Origin** (0, 0). 🎯\n");
    } 
    else if (x == 0) {
        printf("The point lies on the **Y-axis** (%.2f is non-zero). ↕️\n", y);
    }
    else if (y == 0) {
        printf("The point lies on the **X-axis** (%.2f is non-zero). ↔️\n", x);
    }
    else if (x > 0 && y > 0) {
        printf("The point lies in **Quadrant I** (x positive, y positive). 📈\n");
    }
    else if (x < 0 && y > 0) {
        printf("The point lies in **Quadrant II** (x negative, y positive). 📉\n");
    }
    else if (x < 0 && y < 0) {
        printf("The point lies in **Quadrant III** (x negative, y negative). ↙️\n");
    }
    else { 
        printf("The point lies in **Quadrant IV** (x positive, y negative). ↘️\n");
    }
}

int main() {
    float x_coord, y_coord;

    printf("Enter the X coordinate: ");
    scanf("%f", &x_coord);

    printf("Enter the Y coordinate: ");
    scanf("%f", &y_coord);

    determine_quadrant(x_coord, y_coord);
    
    return 0;
}