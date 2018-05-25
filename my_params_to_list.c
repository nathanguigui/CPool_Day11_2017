/*
** EPITECH PROJECT, 2017
** my_params_to_list.c
** File description:
** 
*/

#include "./include/my.h"
#include <stdlib.h>

int add_to_list(linked_list_t **list, char const * const data)
{
    linked_list_t *l1;

	l1 = malloc(sizeof(*l1));
	l1->data = data;
	l1->next = *list;
	*list = l1;
	return(0);
	
}

linked_list_t *my_params_to_list(int ac, char const * const *av)
{
	int i = 0;
	linked_list_t *list;

	list = NULL;
	for (i; i < ac; i = i + 1) {
		add_to_list(&list, av[i]);
	}
	return(list);
}
