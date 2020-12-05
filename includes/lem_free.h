/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_free.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukelly <ukelly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:44:03 by ukelly            #+#    #+#             */
/*   Updated: 2020/11/26 20:44:03 by ukelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_FREE_H
# define LEM_FREE_H

# include "lem_structs.h"
# include "list.h"

void	free_path(void *data);
void	free_graph(t_graph **g);

#endif
