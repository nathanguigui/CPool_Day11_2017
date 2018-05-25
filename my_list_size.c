/*
** EPITECH PROJECT, 2017
** my_list_size.c
** File description:
** 
*/

#include "./include/my.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
	int i = 0;
	linked_list_t *l1;

	l1 = begin;
	while(l1 != NULL) {
		i = i + 1;
		l1 = l1->next;
	}
	return(i);
}
