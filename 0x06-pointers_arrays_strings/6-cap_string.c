char *cap_string(char *myString)
{
	int index = 0;

	while (myString[index])
	{
		while (!(myString[index] >= 'a' && myString[index] <= 'z'))
		{
			index = index + 1;
		}
			if (myString[index - 1] == ',' ||
			myString[index - 1] == '\t' ||
			myString[index - 1] == '\n' ||
			myString[index - 1] == ' ' ||
			myString[index - 1] == '.' ||
			myString[index - 1] == ';' ||
			myString[index - 1] == '?' ||
			myString[index - 1] == '!' ||
			myString[index - 1] == '"' ||
			myString[index - 1] == '(' ||
			myString[index - 1] == ')' ||
			myString[index - 1] == '{' ||
			myString[index - 1] == '}' ||
			index == 0)
				myString[index] = myString[index] - 32;
		index = index + 1;
	}
	return (myString);
}
