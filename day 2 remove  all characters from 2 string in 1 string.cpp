while (string1[count1] != '\0')
		count1 ++;
 
	while (string2[count2] != '\0')
		count2 ++;
 
	i = 0;
 
	while (string1[i] == string2[i] && string1[i] != '\0')
	{
		i ++;
	}
 
	if (string1[i] > string2[i])
		printf ("First string is greater than Second string\n");
	else if (string1[i] < string2[i])
		printf("Second string is greater than First string\n");
	else
		printf ("Both strings are EQUAL\n");
 
	return 0;
}
