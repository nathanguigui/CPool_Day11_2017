/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** 
*/

#include "../../include/my.h"

int	my_putstr(char const *str)
{
	int numero_carac;
	numero_carac = 0;
	while (str[numero_carac] != '\0'){
		my_putchar(str[numero_carac]);
		numero_carac = numero_carac + 1;
	}
	return (0);
}
