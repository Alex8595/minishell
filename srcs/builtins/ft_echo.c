/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:44:56 by ahernand          #+#    #+#             */
/*   Updated: 2021/11/02 17:38:12 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ft_echo(char *line, int arg_n)
{
	char	*clean_line;

	if (arg_n == 0)
		clean_line = ft_strdup(line + 5);
	else
		clean_line = ft_strdup(line + 8);
	printf("%s", clean_line);
	if (arg_n == 0)
		printf("\n");
	free(clean_line);
	return (1);
}
