/**
  *print_name - prints a name
  *@name: points to a name
  *@f: points to function
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}