#include <stdio.h>

// Function to convert a string to an integer
int string_to_int(const char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Handle optional sign
    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    // Process each character of the string
    for (; str[i] != '\0'; ++i) {
        // Skip non-digit characters
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        }
    }

    return sign * result;
}

int main() {
    FILE* file;
    char line[100]; // Assuming maximum line length is 100 characters
    int sum = 0;

    // Open file for reading
    file = fopen("in.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read each line from the file and calculate the sum of numbers
    while (fgets(line, sizeof(line), file)) {
        // Convert string to integer and add to sum
        sum += string_to_int(line);
    }

    // Close the file
    fclose(file);

    // Print the sum
    printf("Sum of numbers: %d\n", sum);

    return 0;
}