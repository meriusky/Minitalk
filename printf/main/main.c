/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehernan <mehernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:33:51 by mehernan          #+#    #+#             */
/*   Updated: 2022/10/12 19:40:22 by mehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	main(void)
{
	int				count1;
	int				count2;
	char			c;
	char			*s;
	char			*p;
	int				d;
	unsigned int	u;
	unsigned int	x;
	unsigned int	bigx;

	c = 'C';
	s = "holaiuyfytfyt";
	p = &c;
	d = 9;
	u = -1;
	x = 11;
	bigx = 12;
/*	ft_character(c);
	printf("\n");
	ft_string(s);
	printf("\n");
	ft_pointer((unsigned long long)p);
	printf("\n");
//	printf("\nprintf: %d\nNuestro printf: %d\n", printf("%p", p), ft_pointer((unsigned long long)p));
	ft_decimal(d);
	printf("\n");
	ft_num_no_sign(u);
	printf("\n");
	ft_hexadecimal_min(x);
	printf("\n");
	ft_hexadecimal_cap(bigx);
	printf("\n");
*/	count1 = printf("Puntatore: %p\n", "");
	count2 = ft_printf("Puntatore: %p\n", "");
	printf("1: %d\n2: %d\n", count1, count2);
}
