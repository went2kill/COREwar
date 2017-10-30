/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 22:33:13 by mpochuka          #+#    #+#             */
/*   Updated: 2017/10/27 22:33:13 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H
# include "op.h"
# include "libft/libft.h"

typedef struct		s_player
{
	char			*name;
	char			*comment;
	unsigned char	*program_code;
	char			*path_player;
	size_t			last_live;
	unsigned int	sum_lives_in_current_period;
	unsigned int	sum_lives_in_previous_period;
	int				num;
	int				fd;
	int				size_code;
}					t_player;

typedef struct		s_arg
{
	int			cnt_arg;
	int			fl_dump;
	int			fl_debug;
	int			fl_visual;
	int			fl_width;
	int			fl_original;
	int			fl_music;
	size_t		num_dump;
	size_t		num_debug;
	int			width_dump;
	int			cnt_player;
	t_player	**player;
	char		*path_players[5];
	int			num[4];
}					t_arg;

typedef struct		s_proc
{
	size_t			pc;
	int				reg[REG_NUMBER + 1];
	unsigned char	is_alive;
	char			carry;
	size_t			execute_at;
	unsigned char	opcode_to_execute;
	size_t			alive_at;
	char			belong_to_player;
	unsigned char	coding_byte;
	size_t			old_pc;
	int				par[3];
	size_t			number;
	struct s_core	*ls;
	struct s_proc	*next;
}					t_proc;

typedef struct		s_core
{
	size_t			cycle;
	size_t			gen_lives_in_current_period;
	size_t			gen_lives_in_previous_period;
	size_t			cycle_to_die;
	size_t			next_cycle_to_die;
	size_t			nbr_of_checks;
	t_player		**players;
	int				num_of_players;
	int				num_of_processes;
	unsigned char	field[MEM_SIZE];
	char			colors[MEM_SIZE];
	size_t			pr_cnt;
	t_proc			*processes_list;
	t_arg			*args;
}					t_core;

typedef struct		s_my_op
{
	void			(*func)(t_core *ls, t_proc *proc, struct s_my_op *func);
	char			num_of_params;
	char			type_of_params[3];
	char			function_num;
	int				cycles_to_exec;
	char			bytes_for_tdir;
	char			*name;
}					t_my_op;

typedef struct		s_op
{
	char			*name;
	int				args_nb;
	int				args[3];
	int				binary;
	int				cycles;
	char			*descr;
	int				codage_oct;
	int				carry;
	int				label_size;
}					t_op;
#endif
