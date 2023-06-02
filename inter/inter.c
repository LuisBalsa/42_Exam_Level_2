/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 02:40:57 by luide-so          #+#    #+#             */
/*   Updated: 2023/06/02 02:41:17 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	c[250];

	if (argc == 3)
	{
		i = 250;
		while(i)
			c[--i] = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if ((argv[1][i] == argv[2][j]) && !c[(int)argv[2][j]])
				{
					c[(int)argv[2][j]] = 1;
					write(1, &argv[1][i], 1);
					break;
				}
				j++;
			}
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
