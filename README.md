# 0x19. C - Stacks, Queues - LIFO, FIFO

## Learning Objectives
-   What do LIFO and FIFO mean
-   What is a stack, and when to use it
-   What is a queue, and when to use it
-   What are the common implementations of stacks and queues
-   What are the most common use cases of stacks and queues
-   What is the proper way to use global variables

The goal of this project is to create an interpreter for Monty ByteCodes files.

## The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it.

## Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument.

## Enviroment
-   **OS:** Ubuntu 20.04 LTS
-   **Language:** C
-   **Style guidelines:** [Betty style](https://github.com/holbertonschool/Betty/wiki)
-   **Compiler:** GCC 

## The monty program

-   Usage: monty file

    Where `file` is the path to the file containing Monty byte code.

-   If the user does not give any file or more than one argument to your program, print the error message `USAGE: monty file`, followed by a new line, and exit with the status `EXIT_FAILURE`

-   If, for any reason, it’s not possible to open the file, print the error message `Error: Can't open file <file>`, followed by a new line, and exit with the status `EXIT_FAILURE` 
    
    Where `<file>` is the name of the file

-   If the file contains an invalid instruction, print the error message `L<line_number>: unknown instruction <opcode>`, followed by a new line, and exit with the status `EXIT_FAILURE` 
    
    Where `line_number` is the line number where the instruction appears.
    Line numbers always start at 1

-   The monty program runs the bytecodes line by line and stop if either:
    
    It executed properly every line of the file
        
    It finds an error in the file 
    
    An error occured

-   If can’t malloc anymore, print the error message `Error: malloc failed`, followed by a new line, and exit with status EXIT_FAILURE.

-   Use only `malloc` and `free` and are not allowed to use any other function from man malloc (realloc, calloc, …)

## Installation

- Clone this repository: `https://github.com/MaxiHBTN/monty.git`
- Go to the the monty directory: `cd monty`
- Compile `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o monty"`
- Execute the program `./monty bytecodes/file.m`
    
    
## Implemented opcodes

| Parameter | Description               |
| :-------- | :------------------------ |
| push| pushes an element to the stack|
| pall| prints all the values on the stack, starting from the top of the stack.|
| pint| prints the value at the top of the stack, followed by a new line.|
| pop| removes the top element of the stack.|
| swap| swaps the top two elements of the stack.|
| add| adds the top two elements of the stack.|
| nop| doesn’t do anything.|
| sub| subtracts the top element of the stack from the second top element of the stack.|
| div| divides the second top element of the stack by the top element of the stack.|
| mul| multiplies the second top element of the stack with the top element of the stack.|
| mod| computes the rest of the division of the second top element of the stack by the top element of the stack.|
| pchar| prints the char at the top of the stack, followed by a new line.|
| pstr| prints the string starting at the top of the stack, followed by a new line.|
| rotl| rotates the stack to the top.|
| rote| rotates the stack to the bottom.|
| stack| sets the format of the data to a stack (LIFO). This is the default behavior of the program.|
| queue| sets the format of the data to a queue (FIFO).|

## Author

**Maximiliano Alonso**

## Social Medias
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/maximiliano-alonso-262b05123/)

[![twitter](https://img.shields.io/badge/Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/Maxalon3194)

