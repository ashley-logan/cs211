#ifndef BUFFER_H
#define BUFFER_H

#include <stdio.h>

typedef struct {
    char* data;
    size_t size;
    size_t capacity;
} buffer;

buffer* read_io(FILE* input_file);
buffer* process_io(buffer* input_buffer);

void free_buffer(buffer* buf);
buffer* init_buffer(size_t start_capacity);

#endif