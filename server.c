/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehernan <mehernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:57:33 by mehernan          #+#    #+#             */
/*   Updated: 2023/05/19 19:34:05 by mehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//File to test if my makefile can compile two programs at the same time
#include <unistd.h>
#include "ft_printf.h"
int	print_str(char *str)
{
	printf("%s\n", str);
}
int	main(void)
{
	int server_pid;

	server_pid = getpid();
	printf("%d\n", server_pid);
//	client(server_pid, str);
	while (1)
		;
	printf("server is being printed\n");
}
