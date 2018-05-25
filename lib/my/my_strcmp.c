/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** 
*/

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;
	char *p = s1;
	char *q = s2;
	int result = 0;	
	
	while (s1[i] != '\0') {
		if (s1[i] != s2[i]) {
			return (s2[i] - s1[i]);
		}
		i = i + 1;
	}
	return (0);
}
