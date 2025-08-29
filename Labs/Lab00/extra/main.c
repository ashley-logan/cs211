#include "buffer.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
    FILE* input_file = fopen(argv[1], "rb");
    printf("Processing\n");
    while (1) {
        buffer* buf = read_io(input_file);
        if (!buf) {break;}
        if(buf->size == 0) {
            free_buffer(buf);
            break;
        }
        buf = process_io(buf);
    }
    printf("Done\n");
    fclose(input_file);
    return 0;
}