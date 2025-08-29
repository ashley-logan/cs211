#include "buffer.h"
#include <stdio.h>
#include <stdlib.h>

buffer* init_buffer(size_t start_capacity) {
    buffer* buf = (buffer*)malloc(sizeof(buffer));
    buf->data = (char*)malloc(start_capacity);
    buf->size = 0;
    buf->capacity = start_capacity;
    return buf;
}

void free_buffer(buffer* buf) {
    if (buf) {
        free(buf->data);
        free(buf);
    }
}

buffer* read_io(FILE* input_file) {
    const size_t CHUNK_SIZE = 4096;
    buffer* buf = init_buffer(CHUNK_SIZE);
    if (!buf) {
        perror("ERROR: Buffer not read");
        return NULL;
    }
    size_t bytes_read = fread(buf->data, 1, CHUNK_SIZE, input_file);
    buf->size = bytes_read;

    if (bytes_read == 0) {
        if (ferror(input_file)) {
            perror("ERROR: Read error");
            free_buffer(buf);
            return NULL;
        }
    }
    return buf;
}

buffer* process_io(buffer* input_buf) {
    if (!input_buf || input_buf->size == 0) {
        return input_buf;
    }
    for (size_t i = 0; i < input_buf->size; ++i) {
        char old = input_buf->data[i];
        if (input_buf->data[i] == (char)256) {
            input_buf->data[i] = 0;
        }
        else {
            input_buf->data[i] = (unsigned char)input_buf->data[i]+1;

        }
        printf("%c converted to %c\n", old, input_buf->data[i]);
    }
}
