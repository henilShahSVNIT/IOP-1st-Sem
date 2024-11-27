#include <stdio.h>

// Define an enumeration for color names
enum Color 
{
    RED,
    GREEN,
    BLUE,
    WHITE,
    BLACK,
    YELLOW,
    CYAN,
    MAGENTA
};

int main() 
{
    enum Color selectedColor;

    // Prompt the user to enter a color
    printf("Enter a color code (0: RED, 1: GREEN, 2: BLUE, 3: WHITE, 4: BLACK, 5: YELLOW, 6: CYAN, 7: MAGENTA): ");
    scanf("%d", &selectedColor);

    // Use a switch statement to display the hexadecimal color code
    switch (selectedColor) 
    {
        case RED:
            printf("Hexadecimal color code for RED: #FF0000\n");
            break;
        case GREEN:
            printf("Hexadecimal color code for GREEN: #00FF00\n");
            break;
        case BLUE:
            printf("Hexadecimal color code for BLUE: #0000FF\n");
            break;
        case WHITE:
            printf("Hexadecimal color code for WHITE: #FFFFFF\n");
            break;
        case BLACK:
            printf("Hexadecimal color code for BLACK: #000000\n");
            break;
        case YELLOW:
            printf("Hexadecimal color code for YELLOW: #FFFF00\n");
            break;
        case CYAN:
            printf("Hexadecimal color code for CYAN: #00FFFF\n");
            break;
        case MAGENTA:
            printf("Hexadecimal color code for MAGENTA: #FF00FF\n");
            break;
        default:
            printf("Invalid color code entered!\n");
    }

    return 0;
}
