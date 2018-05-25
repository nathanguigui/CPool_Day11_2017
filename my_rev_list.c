/*
** EPITECH PROJECT, 2017
** my_rev_list.c
** File description:
** 
*/

#include "./include/my.h"
#include <stdlib.h>

void my_rev_list(linked_list_t **begin)
{
	linked_list_t *tmp;
	linked_list_t *prev;
	linked_list_t *next;

	prev = *begin;
	tmp = 0;

	while(prev->next != NULL) {
		next = prev->next;
		prev->next = tmp;
		tmp = prev;
		prev = next;
	}
	prev->next = tmp;
	*begin = prev;
	return;
}