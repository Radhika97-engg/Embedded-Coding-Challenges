#include <stdio.h>
#include "bit_utils.h" // Include function declarations

int main()
 {
    unsigned int input;
    int choice, position;

    printf("Enter an unsigned integer: ");
    scanf("%u", &input);

    do {
        show_menu();  // Displays the menu from bit_utils.c
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Set bits (Loop): %d\n", count_set_bits_loop(input));
                break;

            case 2:
                printf("Set bits (Bit Trick): %d\n", count_set_bits_trick(input));
                break;

            case 3:
                printf("Bit-reversed: %u\n", reverse_bits(input));
                break;

            case 4:
                print_binary(input);
                break;

            case 5:
                printf("Enter position to toggle (0-31): ");
                scanf("%d", &position);
                printf("After toggling bit %d: %u\n", position, toggle_bit(input, position));
                break;

            case 6:
                if (power_of_two(input))
                    printf("%u is a power of 2\n", input);
                else
                    printf("%u is NOT a power of 2\n", input);
                break;

            case 7:
                printf("Enter number of bits to rotate left: ");
                scanf("%d", &position);
                printf("After rotating left: %u\n", rotate_left(input, position));
                break;

            case 8:
                printf("Enter number of bits to rotate right: ");
                scanf("%d", &position);
                printf("After rotating right: %u\n", rotate_right(input, position));
                break;

            case 0:
                printf("Exiting toolkit.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
