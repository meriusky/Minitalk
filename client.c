/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehernan <mehernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:55:26 by mehernan          #+#    #+#             */
/*   Updated: 2023/05/22 18:10:54 by mehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this file is just a test to check if my makefile is compilen two files at the same time
#include "ft_printf.h"
#include "libft.h"
#include <signal.h>

// is needed to pas the strig with the fuction kill instead of calling the fuctuin
int	send_str(char *str, int pid)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
		while(j < 8)
		{
			if((str[i] & (1 << j)) == 1)
			{
				printf("its a 1\n");
				if (kill(pid, SIGUSR2) == -1)
					return(1);
			}
			else
			{
				printf("ist a 0\n");
				if (kill(pid, SIGUSR1) == -1)
					return(1);
			}
			j++;
		}
		i++;
	}
	return(0);
}
int	main(int argc, char *argv[])
{
	int	pid;
	char	*str;

	if(argc != 3)
	{
		printf("Error, must have three arguments\n");
		exit(0);
	}
	pid = ft_atoi(argv[1]);// I send the pid to converter to an int 
	str = argv[2];
	if (send_str(str, pid) == 1)
		printf("ERROR\n");
	printf("client is being printed\n");
//	return(&argv);
}
