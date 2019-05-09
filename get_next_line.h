/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 20:25:31 by kkhabour          #+#    #+#             */
/*   Updated: 2019/05/09 22:19:41 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <stdlib.h>
# include "../libft/libft.h"
# define BUFF_SIZE 90

int						get_next_line(int const fd, char **line);
typedef struct			s_linkedlist
{
	int					fd;
	char				*content;
	struct s_linkedlist	*next;
}						t_linkedlist;

#endif
