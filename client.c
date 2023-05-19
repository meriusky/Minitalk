/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehernan <mehernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:55:26 by mehernan          #+#    #+#             */
/*   Updated: 2023/05/19 19:34:05 by mehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this file is just a test to check if my makefile is compilen two files at the same time
#include "ft_printf.h"
#include "libft.h"
// is needed to pas the strig with the fuction kill instead of calling the fuctuin
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
//	print_str(str);//no funciona, hay que pasarlo con la funcion kill
	printf("client is being printed\n");
//	return(&argv);
}
