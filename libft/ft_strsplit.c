/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 20:21:34 by mpochuka          #+#    #+#             */
/*   Updated: 2016/12/03 20:21:34 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns an array of “fresh”
** strings (all ending with ’\0’, including the array itself) obtained
** by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL.
** Example :
** ft_strsplit("*hello*fellow***students*", ’*’) returns
** the array ["hello", "fellow", "students"].
*/

#include "libft.h"

static int		count_words(const char *str, char c)
{
	int		i;
	int		is_word;
	int		is_space;
	int		word_counter;

	i = 0;
	is_word = 0;
	is_space = 1;
	word_counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && !is_word)
		{
			is_space = 0;
			is_word = 1;
			word_counter++;
		}
		if (str[i] == c && !is_space)
		{
			is_space = 1;
			is_word = 0;
		}
		i++;
	}
	return (word_counter);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		start;
	int		end;
	int		num_words;
	char	**res_arr;

	i = 0;
	if (!s)
		return (NULL);
	num_words = count_words(s, c);
	res_arr = (char **)ft_newarr(num_words);
	if (res_arr)
	{
		end = 0;
		start = 0;
		while (i < num_words)
		{
			start = ft_str_un_i_chr(&s[end], c) + start;
			end = ft_str_i_chr(&s[start], c) + start;
			res_arr[i++] = ft_strsub(s, start, end - start);
			start = end;
		}
	}
	return (res_arr);
}
