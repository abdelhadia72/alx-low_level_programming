/**
 * print_name - Prints the name using a function pointer
 * @name: Name to be printed
 * @f: Function pointer to a function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if(!name)
		return (NULL);
	(*f)(name);
}
