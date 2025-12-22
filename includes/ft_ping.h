#ifndef FT_PING
# define FT_PING

# include <defines.h>
# include <structures.h>

# include <netdb.h>
# include <errno.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <signal.h>
# include <limits.h>
# include <sys/time.h>
# include <arpa/inet.h>
# include <sys/socket.h>
# include <netinet/ip.h>
# include <netinet/ip_icmp.h>

void	print_usage(void);
void	print_help(void);
void	print_version(void);

#endif
