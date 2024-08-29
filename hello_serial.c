#include <stdio.h>
#include "pico/stdlib.h"
#include <string.h>

int main() {
    stdio_init_all();

    char input[100];
    int index = 0;

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);

        // Check if USB is connected and ready
        if (stdio_usb_connected()) {
            // Try to read input without blocking
            int c;
            while ((c = getchar_timeout_us(0)) != PICO_ERROR_TIMEOUT && index < sizeof(input) - 1) {
                input[index++] = c;  // Store the character
                input[index] = '\0';  // Null-terminate the string

                // Check if the last three characters are "end"
                if (index >= 3 && input[index - 3] == 'e' && input[index - 2] == 'n' && input[index - 1] == 'd') {
                    input[index - 3] = '\0';  // Null-terminate the string before "end"
                    printf("Received: %s\n", input);
                    index = 0;  // Reset index for next input
                }
            }
        }
    }
}