/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 15:44:16 by ydang             #+#    #+#             */
/*   Updated: 2016/10/29 15:44:18 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "niander.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_quesnans(argv[1]);
	}
	else
		ft_printerror();
	return (0);
}
