/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehernan <mehernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:57:33 by mehernan          #+#    #+#             */
/*   Updated: 2023/05/22 18:10:54 by mehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//File to test if my makefile can compile two programs at the same time
#include <unistd.h>
#include "ft_printf.h"

//int	print_str(char *str)
//{
//	printf("%s\n", str);
//}
int	main(void)
{
	int server_pid;

	server_pid = getpid();
	printf("%d\n", server_pid);
//	printf("
	while (1)
		;
	printf("server is being printed\n");
}
