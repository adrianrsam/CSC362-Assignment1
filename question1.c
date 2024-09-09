#include <stdio.h>
#include <stdlib.h> 

int main() {
    int *array;          // dynamically allocated array
    int num_elements;    // Variable to store the number of elements

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &num_elements);

    // Handle case where the number of elements is zero or negative
    if (num_elements <= 0) {
        printf("Invalid number of elements.\n");
        return 1; 
    }

    // Dynamically allocate memory
    array = (int*) malloc(num_elements * sizeof(int));

    // Exception handling (check if malloc failed)
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Fill the array with user input
    printf("Enter %d integers:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        scanf("%d", &array[i]);
    }

    // Print the integers in reverse order
    printf("The integers in reverse order are:\n");  
    for (int i = num_elements - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);    // Free the allocated memory

    return 0;
}