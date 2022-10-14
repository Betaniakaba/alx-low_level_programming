Task 0. Beauty is variable, ugliness is constant

	Write a function that returns the sum of all its parameters
	- Prototype: int sum_them_all(const unsigned int n, ...);
	- if n == 0, return 0

Task 1.
	To be is to be the value of a variable

	Write a function that prints numbers, followed by a new line.
	- Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
	- where separator is the string to be printed between numbers
	- and n is the number of integers passed to the function
	- You are allowed to use printf
	- If separator is NULL, don’t print it
	- Print a new line at the end of your function

Task 2. One woman's constant is another woman's variable

	Write a function that prints strings, followed by a new line.
	- Prototype: void print_strings(const char *separator, const unsigned int n, ...);
	- where separator is the string to be printed between the strings
	- and n is the number of strings passed to the function
	- You are allowed to use printf
	- If separator is NULL, don't print it
	- If one of the strings is NULL, print (nil) instead
	- Print a new line at the end of your function

Task 3. To be is a to be the value of a variable

	Write a function that prints anything
	- Prototype: void print_all(const char * const format, ...);
	- Where format is a list of types of arguments passed to the function
		- c: char
		- i: integer
		- f: float
		- s: char * (if the strign is NULL, print (nil) instead
		- any other char should be ignored
		- see example
