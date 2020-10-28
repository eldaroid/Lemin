/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 18:30:10 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:44:17 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char *str, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (!(str[i] == c))
			if (str[i] != '\0')
				i++;
			else
				break ;
		while (str[i] == c)
			i++;
		words++;
	}
	return (words);
}
