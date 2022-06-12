/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:20:28 by ressalhi          #+#    #+#             */
/*   Updated: 2021/12/06 20:35:43 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char	*s);
size_t	ft_strlen(const char	*s);
char	*ft_substr(char	*s, unsigned int start, size_t	len);
char	*ft_strdup(char *s);
char	*get_next_line(int fd);

#endif
