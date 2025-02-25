#include <stdio.h>
#include <stdlib.h>  

int find_lonely_integer(int count, int* arr) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result ^= arr[i];  // XOR logic to find unique element
    }
    return result;
}
int* get_sensor_readings(int* count) {
    printf("Enter number of sensor readings (odd number): ");
    scanf("%d", count);

    // Allocate memory dynamically
    int* arr = malloc((*count) * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Taking input for sensor readings
    printf("Enter %d readings (all values appear twice except one): ", *count);
    for (int i = 0; i < *count; i++) {
        scanf("%d", &arr[i]);
    }

    return arr;
}
int main() {
    int n;
    int* sensor_data = get_sensor_readings(&n);  

    int lonely_integer = find_lonely_integer(n, sensor_data);
    printf("\nDetected Corrupted Sensor Data: %d\n", lonely_integer);

    free(sensor_data);  // Free allocated memory
    return 0;
}


