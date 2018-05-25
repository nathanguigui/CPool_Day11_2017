/*
** EPITECH PROJECT, 2017
** my_apply_on_matching_nodes.c
** File description:
** 
*/

#include "./include/my.h"
#include <stdlib.h>

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f) (void *), void const *data_ref, int (*cmp)(void *, void const *)){
	while(begin->next != NULL) {
	    if (cmp(begin->data, data_ref)) {
	    	(*f)(begin->data);
	    }
	    begin = begin->next;
	}
}