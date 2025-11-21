# ft_printf

In this project I implemented the function **printf**.

Most of what the original printf do, this ft_printf also do.

## Why the f of the printf? This function write something, so why not to use only putstr?
- The difference of this function to putstr is the fact that printf consider the **format identifiers**.
- The format identifiers are the character % followed by one letter that **represents the kind of data to replace to**.
- **%s** for strings, **%c** for characters, **%d** and **%i** for integers, **%x** and **%X** for numbers in your hexadecimal form,...

## In this project I faced a new concept in C, the **variadic functions**.
- The variadic functions are **functions with a variable number of arguments**.
- This new concept allows me to call the best function for each format identifier.
- va_start: The va_list startes, considering the first argument right after the mandatory argument.
- va_list: It's a structure containing pointers to the arguments and a internal cursor that advances with the use of va_arg.
- va_arg: Function that will return the argument and move on to the next argument. This function considers the list and the data type of the specific argument.
- va_list: invalidate the va_list, ending the proccess, not that usefull nowadays, but guarantees portability.

## The logic:
  - First of all, my function has to write the main text, this one is always passed as the first argument, for this I simply write it until find a '%'.
  - If there is a '%' and another character right after, my function will check which is this next character.
  - So depending on the letter my program will call one of this functions: ft_putchar, ft_putstr, ft_puthexadecimal_lowercase, ft_puthexadecimal_uppercase, ft_putnbr, ft_putunbr or ft_address.
  - If the % is followed by another % or if there is no significative character next, my program just replace it for one % in the output.
