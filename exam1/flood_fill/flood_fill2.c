
#include <stdio.h>
#include "t_point.h" // Include the t_point structure definition

void flood_fill(char **tab, t_point size, t_point begin) {
    // Check if the starting point is within the array bounds
    if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y) {
        return; // Stop if the point is out of bounds
    }

    // Get the character at the starting point
    char target_char = tab[begin.y][begin.x];

    // Check if the current character is different from the target character
    if (tab[begin.y][begin.x] != target_char) {
        return; // Stop if it's a different character
    }

    // Replace the current character with 'F'
    tab[begin.y][begin.x] = 'F';

    // Recursively fill in adjacent cells (up, down, left, right)
    t_point left = {begin.x - 1, begin.y};
    t_point right = {begin.x + 1, begin.y};
    t_point up = {begin.x, begin.y - 1};
    t_point down = {begin.x, begin.y + 1};

    flood_fill(tab, size, left);
    flood_fill(tab, size, right);
    flood_fill(tab, size, up);
    flood_fill(tab, size, down);
}

// Function to print the 2D character array
void printArray(char **tab, t_point size) {
    for (int i = 0; i < size.y; i++) {
        for (int j = 0; j < size.x; j++) {
            printf("%c ", tab[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Define the size of the 2D array
    t_point size = {5, 4};

    // Create a 2D character array
	char	tab[5][5] = {
		"11111",
		"10001",
		"10110",
		"00000",
		"11111"};
	char	**area;	
	

    // Print the initial array
    printf("Initial Array:\n");
    printArray(tab, size);

    // Define the starting point for flood fill
    t_point begin = {1, 1};

    // Perform flood fill
    flood_fill(tab, size, begin);

    // Print the modified array after flood fill
    printf("\nArray After Flood Fill:\n");
    printArray(tab, size);

    return 0;
}
