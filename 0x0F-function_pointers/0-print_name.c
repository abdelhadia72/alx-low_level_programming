void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
