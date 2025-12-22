#ifndef STRUCTURES_H
# define STRUCTURES_H

# include <stdint.h>

typedef struct s_flags t_flags;
typedef struct s_ping t_ping;

struct s_flags
{
	unsigned long	tos;
	unsigned long	size;
	unsigned long	count;
	unsigned long	linger;
	unsigned long	timeout;
	unsigned long	preload;
	char			*type;
	char			*ip_ts;
	char			*pattern;
};

struct s_ping
{
	t_flags		flags;
	uint16_t	options;
};

#endif
