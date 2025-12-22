#ifndef DEFINES_H
# define DEFINES_H

# define OPT_V					(1 << 0)	// -v / --verbose
# define OPT_C					(1 << 1)	// -c / --count=n
# define OPT_F					(1 << 2)	// -f / --flood
# define OPT_L					(1 << 3)	// -l n / --preload=n
# define OPT_N					(1 << 4)	// -n / --numeric
# define OPT_T					(1 << 5)	// -t / --type
# define OPT_W					(1 << 6)	// -w n / --timeout=n
# define OPT_CAP_W				(1 << 7)	// -W n / --linger=n
# define OPT_P					(1 << 8)	// -p pat / --pattern=pat
# define OPT_R					(1 << 9)	// -r / --ignore-routing
# define OPT_S					(1 << 10)	// -s n / --size=n
# define OPT_CAP_T				(1 << 11)	// -T num / --tos=num
# define OPT_TTL				(1 << 12)	// --ttl=n
# define OPT_IP_TS				(1 << 13)	// --ip-timestamp=flag

# define DEFAULT_COUNT			0			// 0 = infinite
# define DEFAULT_INTERVAL		1.0			// 1 second between packets
# define DEFAULT_PACKET_SIZE	56			// 56 data bytes → 64 total with ICMP header
# define DEFAULT_TTL			64
# define DEFAULT_TIMEOUT		1			// recv timeout in seconds
# define MAX_PACKET_SIZE		65535
# define MIN_PACKET_SIZE		8

#endif
