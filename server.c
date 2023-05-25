/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehernan <mehernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:57:33 by mehernan          #+#    #+#             */
/*   Updated: 2023/05/25 19:18:37 by mehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	print_string(int sign)
{
	static int	count = 0;
	static char	c = '\0';

	if (sign == SIGUSR2)
		c = c | (1 << count);
	count++;
	if (count > 7)
	{
		ft_printf("%c", c);
		count = 0;
		c = '\0';
	}
}

int	main(int argc, char *argv[])
{
	int	server_pid;

	(void)argv;
	if (argc > 1)
	{
		ft_printf("No arguments allowed\n");
		return (0);
	}
	server_pid = getpid();
	ft_printf("%d\n", server_pid);
	signal(SIGUSR1, &print_string);
	signal(SIGUSR2, &print_string);
	while (1)
		;
	return (0);
}
