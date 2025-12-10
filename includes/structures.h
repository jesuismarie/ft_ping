#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct s_flags t_flags;
typedef struct s_ping t_ping;

struct s_flags
{
	int		tos;
	int		size;
	int		count;
	int		linger;
	int		timeout;
	int		preload;
	char	*type;
	char	*ip_ts;
	char	*pattern;
};

struct s_ping
{
	t_flags	flags;
	int		options;
};

#endif
