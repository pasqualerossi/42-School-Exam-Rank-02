Assignment name : first\_word Expected files : first\_word.c Allowed
functions: write ——————————————————————————–

Write a program that takes a string and displays its first word,
followed by a newline.

A word is a section of string delimited by spaces/tabs or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply
display a newline.

Examples:

\(> ./first_word "FOR PONY" | cat -e FOR\)
\(> ./first_word "this ... is sparta, then again, maybe not" | cat -e this\)
$\> ./first\_word " " | cat -e $ $\> ./first\_word “a” “b” | cat -e $
\(> ./first_word " lorem,ipsum " | cat -e lorem,ipsum\) $\>
