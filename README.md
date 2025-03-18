# get_next_line

get_next_line's goal  is to write a function that reads a file line by line, handling different file descriptors efficiently.
This project is an excellent way to improve skills in file handling, memory management, and dynamic allocation in C.

1-How get_next_line Works

Read from a file descriptor (fd) until it encounters a newline (\n) or reaches the end of the file (EOF).
Return each line as a separate string, without including the newline (\n) in the next call.
Manage memory dynamically to handle files of any size and different buffer sizes.
Work efficiently with multiple file descriptors simultaneously (e.g., reading from different files at the same time).

2-Key Components of get_next_line

Reading from the File Descriptor
read() is used to read from fd into a buffer of BUFFER_SIZE.
The function keeps reading until a newline or EOF is found.

3-Storing the Remaining Data

Since read() does not guarantee reading a full line at once, extra data must be stored for the next function call.
A static variable is used to retain the remaining part of the buffer.

4-Extracting a Line

The function must find the first newline character and return everything before it.
The leftover content after \n is stored for the next call.

5-Handling Multiple File Descriptors

Since multiple files can be read at the same time, get_next_line must correctly track and separate data for each file descriptor.
