/*
** EPITECH PROJECT, 2017
** my_show_list.c
** File description:
** 
*/

#include "../../include/my.h"
#include <stdlib.h>

void my_show_list(linked_list_t *list)
{
	linked_list_t *tmp;
	tmp = list;

	while(tmp != NULL)
	{
		my_putstr(tmp->data);
		my_putchar('\n');
		tmp = tmp->next;
	}
}
