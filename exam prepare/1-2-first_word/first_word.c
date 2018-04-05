/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 10:48:52 by shuang            #+#    #+#             */
/*   Updated: 2018/03/22 11:16:48 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int	j;

	if (argc == 2)
	{
		j = 0;
		while (argv[1][j] && ((argv[1][j] == ' ') || (argv[1][j] == '\t')))
			j++;
		while ((argv[1][j] != '\0') && (argv[1][j] != ' ') 
				&& (argv[1][j] != '\t'))
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
