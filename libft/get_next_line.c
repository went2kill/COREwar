/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 17:38:33 by mpochuka          #+#    #+#             */
/*   Updated: 2017/03/17 17:38:35 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	init_it(t_list_n **ls, int fd)
{
	if (!(ls[fd]))
	{
		(ls[fd]) = (t_list_n *)malloc(sizeof(t_list_n));
		if (!(ls[fd]))
		{
			write(2, "\nCannot allocate memory in gnl->init_it!\n", 41);
			exit(-1);
		}
		(ls[fd])->str = ft_strnew(BUFF_SIZE);
		(ls[fd])->clr = NULL;
		(ls[fd])->end = 0;
		(ls[fd])->r_len = 0;
	}
}

void	cut_it(t_list_n **ls, int fd, char **line)
{
	char *n;

	n = ft_strchr((ls[fd])->str, '\n');
	if (!n)
	{
		*line = ft_strdup((ls[fd])->str);
		ft_strdel(&((ls[fd])->str));
		(ls[fd])->str = ft_strnew(0);
	}
	else
	{
		*line = ft_strsub((ls[fd])->str, 0, n - (ls[fd])->str);
		ls[fd]->clr = ls[fd]->str;
		(ls[fd])->str = ft_strsub((ls[fd])->str, n - (ls[fd])->str + 1,
			ft_strlen((ls[fd])->str));
		ft_strdel(&((ls[fd])->clr));
	}
}

int		get_next_line(int fd, char **line)
{
	char			*buf;
	static t_list_n	*ls[6000];
	char			*n;

	n = NULL;
	if (fd < 0 || fd > 6000 || !line || BUFF_SIZE < 1
		|| !(buf = ft_strnew(BUFF_SIZE)) || read(fd, NULL, 0) == -1)
		return (-1);
	init_it(ls, fd);
	while ((n = ft_strchr((ls[fd])->str, '\n')) == NULL
		&& ((ls[fd])->r_len = read(fd, buf, BUFF_SIZE)) == BUFF_SIZE)
	{
		(ls[fd])->str = ft_strjoin_d(&((ls[fd])->str), &buf, 1);
		ft_bzero(buf, BUFF_SIZE + 1);
	}
	if (*buf)
		(ls[fd])->str = ft_strjoin_d(&((ls[fd])->str), &buf, 1);
	ft_strdel(&buf);
	if ((ls[fd])->r_len < 0)
		return (-1);
	if ((ls[fd])->r_len == 0 && (ls[fd])->str && ((ls[fd])->str[0] == '\0'))
		return (0);
	cut_it(ls, fd, line);
	return (1);
}
