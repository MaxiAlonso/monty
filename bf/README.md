# Brain F*ck

Brainfuck is an esoteric programming language created in 1993 by Urban Müller.

Notable for its extreme minimalism, the language consists of only eight simple commands., a data pointer and an instruction pointer. While it is fully Turing complete, it is not intended for practical use, but to challenge and amuse programmers. Brainfuck simply requires one to break commands into microscopic steps.

The language's name is a reference to the slang term brainfuck, which refers to things so complicated or unusual that they exceed the limits of one's understanding

## Commands

| Character | Description               |
| :-------- | :------------------------ |
|>|	Increment the data pointer (to point to the next cell to the right).|
|<|	Decrement the data pointer (to point to the next cell to the left).|
|+|	Increment (increase by one) the byte at the data pointer.|
|-|	Decrement (decrease by one) the byte at the data pointer.|
|.|	Output the byte at the data pointer.|
|,|	Accept one byte of input, storing its value in the byte at the data pointer.|
|[|	If the byte at the data pointer is zero, then instead of moving the instruction pointer forward to the next command, jump it forward to the command after the matching ] command.|
|]|	If the byte at the data pointer is nonzero, then instead of moving the instruction pointer forward to the next command, jump it back to the command after the matching [ command.|

## Scripts

To execute the scripts you may need to install the bf interpreter, `sudo apt-get install bf` 

| Scrip | Description               |
| :-------- | :------------------------ |
|1000-school.bf| prints School, followed by a new line|
|1001-add.bf| Add two digits given by the user|
|1002-mul.bf| Multiply two digits given by the user (result of the multiplication will be one digit-long (<10))|
|1003-mul.bf| Multiply two digits given by the user (result of the multiplication will be one digit-long (<100))|
