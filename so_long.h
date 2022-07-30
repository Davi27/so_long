/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:41:56 by damartin          #+#    #+#             */
/*   Updated: 2022/07/30 19:42:05 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct
{
    void    *mlx;
    void    *mlx_window;
    char    **map;
    char    *file;
    char    *hero_dir;
    int     map_x;
    int     map_y;
    int     map_total;
    int     x;
    int     y;
    int     pixel;
    int     hero;
    int     hero_x;
    int     hero_y;
    int     hero_steps;
    int     coins;
    int     exit;
} t_game

