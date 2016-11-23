#rint_all(const char * const format, ...)
{
	op_f ops[] = {
		{"c", print_c},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	unsigned int count, count2;
	va_list add;
	char *p;

	count = 0;
	p = "";
	va_start(add, format);
	while (format != NULL && format[count] != '\0')
	{
		count2 = 0;
		while (count2 < 4)
		{
			if (format[count] == (*ops[count2].op))
			{
				ops[count2].f(add, p);
				p = (", ");
			}
			count2++;
		}
		count++;
	}
	va_end(add);
	printf("\n");
}
