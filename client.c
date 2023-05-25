/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehernan <mehernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:55:26 by mehernan          #+#    #+#             */
/*   Updated: 2023/05/25 19:14:51 by mehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <signal.h>

int	send_str(char *str, int pid)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 8)
		{
			if ((str[i] & (1 << j)) == 0)
			{
				if (kill(pid, SIGUSR1) == -1)
					return (1);
			}
			else
			{
				if (kill(pid, SIGUSR2) == -1)
					return (1);
			}
			j++;
			usleep(300);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		pid;
	char	*str;

	if (argc != 3)
	{
		ft_printf("Error, must have three arguments\n");
		exit(0);
	}
	pid = ft_atoi(argv[1]);
	str = argv[2];
	if (send_str(str, pid) == 1)
		ft_printf("ERROR\n");
	return (0);
}
