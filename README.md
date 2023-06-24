0x11. C - printf
C
Group project

By: Julien Barbier, co-founder & CEO
Project to be done in teams of 2 people

</benkeyben> Yankey (benkeyben66@gmail.com)
Siyanda Sithole (siyasi19@gmail.com)

Start Jun 23, 2023 6:00 AM, must end by Jun 28, 2023 6:00 AM
Checker will be released at Jun 24, 2023 12:00 PM

Repository: printf ( Created 24/06/23)

Concepts
For this project, we expect you to look at these concepts:

Group Projects
Pair Programming - How To
Flowcharts
Technical Writing

Resources
Read or watch:

Secrets of printf
Group Projects concept page (Don’t forget to read this)
Flowcharts concept page
man or help:

printf (3)

GitHub
There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

Compilation
Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

We strongly encourage you to work all together on a set of tests
If the task does not specify what to do with an edge case, do the same as printf

##0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%

#1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:

d
i

#2. With a face like mine, I do better in print
Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary

#3. What one has not experienced, one will never understand in print
Handle the following conversion specifiers:

u
o
x
X

#4. Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.

#5. My weakness is wearing too much leopard print
Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

#6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier: p.

#7. The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:

+
space
#

#8. Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X

#9. Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

#10. The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

#11. It's depressing when you're still around and your albums are out of print

Handle the 0 flag character for non-custom conversion specifiers.

#12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

#13. Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:

r : prints the reversed string

#14. The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:

R: prints the rot13'ed string

#15. *
All the above options work well together.

