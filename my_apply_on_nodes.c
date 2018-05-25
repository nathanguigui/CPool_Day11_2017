/*
** EPITECH PROJECT, 2017
** my_apply_on_nodes.c
** File description:
** 
*/

#include "./include/my.h"
#include <stdlib.h>

int my_apply_on_nodes(linked_list_t *begin, int(*f) (void *))
{
	while(begin->next != NULL) {
		(*f)(begin->data);
		begin = begin->next;
	}
	return(0);
}
