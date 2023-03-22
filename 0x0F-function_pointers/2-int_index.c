/**
  *int_index - Write a function that searches for an integer.
  *@array: array
  *@size: is the number of elements in the array array
  *@cmp: points to fiunction
  *Return: i
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int index;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		index = cmp(array[i]);
		if (index != 0)
		{
			return (i);
		}
	}
	return (-1);
}
