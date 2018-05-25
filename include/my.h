/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** 
*/

#ifndef MY_H_
#define MY_H_

typedef struct linked_list
{
	void *data;
	struct linked_list *next;
} linked_list_t;

int add_to_list(linked_list_t **list, char const * const data);
int my_list_size(linked_list_t const *begin);
int	my_put_nbr(int nb);
int	my_putstr(char const *str);
void my_putchar(char c);
void my_show_list(linked_list_t *list);
linked_list_t *my_params_to_list(int ac, char const * const *av);
void my_rev_list(linked_list_t **begin);
int my_apply_on_nodes(linked_list_t *begin, int(*f) (void*));
int my_apply_on_matching_nodes(linked_list_t *begin, int (*f) (), void const *data_ref, int (*cmp)());
int *my_revstr(char *str);
int my_strcmp(char const *s1, char const *s2);


#endif
