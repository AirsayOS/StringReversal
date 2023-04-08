# ReverseString
A C program that takes string input from the keyboard, reverses the string and prints it out to console.
# StringReversal
This code includes several header files, including stdio.h, stdlib.h, and string.h, which contain standard functions for input/output, memory allocation, and string manipulation respectively. It also includes a custom header file called header.h, which contains function prototypes which are called to main.c.
This code is a simple program that reads in a string of up to 100 characters from the console, reverses it, and prints the reversed string to the console.
The program starts by declaring a pointer variable called ch and allocating memory for a character array of size 102 using the allocate_memory function. If the memory allocation fails, an error message is printed to the console and the program exits with an error code.

The program then calls the get_input function to read in a string of up to 100 characters from the console. If there is an error reading the input or the input is too long, an error message is printed to the console and the program exits with an error code.

After the input string is read in, the program calculates its length using the strlen function and prints the characters of the string in reverse order using a for loop and the printf function.

Finally, the program frees the dynamically allocated memory using the free function and exits with a success code.

The program also includes two other functions, "allocate_memory" and "get_input", which are defined in a separate header file called header.h. The allocate_memory function dynamically allocates memory for a character array of a specified size using the malloc function. The get_input function reads in a string of up to a specified length from the console using the fgets function and removes any newline characters from the end of the string.
