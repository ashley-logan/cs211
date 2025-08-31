use std::fs;
use::std::io;

struct Buffer {
    let mut data: Vec<char>;
    let mut size: u32;
    let const capacity: u32;
}

fn create_buffer(buf_size: &usize) -> Buffer {
    Buffer {
        data = Vec::new();
        size = 0;
        capacity = *buf_size;
    }
}

fn read_input(file: File) {
    const CHUNK_SIZE: usize = 4096;
    buffer = create_buffer(CHUNK_SIZE: &usize);
    io::Read()
}

