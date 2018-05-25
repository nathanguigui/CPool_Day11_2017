/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** 
*/

int	my_put_nbr(int nb)
{
	int n;

	if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	if (nb > 9) {
		my_put_nbr(nb / 10);
	}
	n = nb % 10 + '0';
	my_putchar(n);
	return(0);
}
