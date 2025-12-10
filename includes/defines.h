#ifndef DEFINES_H
# define DEFINES_H

# define PING_V				(1 << 0)   // -v     / --verbose
# define PING_C				(1 << 1)   // -c     / --count=n
# define PING_F				(1 << 2)   // -f     / --flood
# define PING_L				(1 << 3)   // -l n   / --preload=n
# define PING_N				(1 << 4)   // -n     / --numeric
# define PING_T				(1 << 5)   // -t     / --type
# define PING_W				(1 << 6)   // -w n   / --timeout=n
# define PING_CAP_W			(1 << 7)   // -W n   / --linger=n
# define PING_P				(1 << 8)   // -p pat / --pattern=pat
# define PING_R				(1 << 9)   // -r     / --ignore-routing
# define PING_S				(1 << 10)  // -s n   / --size=n
# define PING_CAP_T			(1 << 11)  // -T num / --tos=num
# define PING_TTL			(1 << 12)  // --ttl=n
# define PING_IP_TS			(1 << 13)  // --ip-timestamp=flag

#endif
