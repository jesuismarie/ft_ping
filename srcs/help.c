#include <ft_ping.h>

void	print_help(void)
{
	printf("Usage: ping [OPTION...] HOST ...\n" \
		"Send ICMP ECHO_REQUEST packets to network hosts.\n\n" \
		" Options controlling ICMP request types:\n" \
		"      --echo                 send ICMP_ECHO packets (default)\n" \
		"  -t, --type=TYPE            send TYPE packets\n\n" \
		" Options valid for all request types:\n\n" \
		"  -c, --count=NUMBER         stop after sending NUMBER packets\n" \
		"  -n, --numeric              do not resolve host addresses\n" \
		"  -r, --ignore-routing       send directly to a host on an attached network\n" \
		"      --ttl=N                specify N as time-to-live\n" \
		"  -T, --tos=NUM              set type of service (TOS) to NUM\n" \
		"  -v, --verbose              verbose output\n" \
		"  -w, --timeout=N            stop after N seconds\n" \
		"  -W, --linger=N             number of seconds to wait for response\n\n" \
		" Options valid for --echo requests:\n\n" \
		"  -f, --flood                flood ping (root only)\n" \
		"      --ip-timestamp=FLAG    IP timestamp of type FLAG, which is one of\n" \
		"                             \"tsonly\" and \"tsaddr\"\n" \
		"  -l, --preload=NUMBER       send NUMBER packets as fast as possible before\n" \
		"                             falling into normal mode of behavior (root only)\n" \
		"  -p, --pattern=PATTERN      fill ICMP packet with given pattern (hex)\n" \
		"  -s, --size=NUMBER          send NUMBER data octets\n\n" \
		"  -?, --help                 give this help list\n" \
		"      --usage                give a short usage message\n" \
		"  -V, --version              print program version\n\n" \
		"Mandatory or optional arguments to long options are also mandatory or optional\n" \
		"for any corresponding short options.\n\n" \
		"Options marked with (root only) are available only to superuser.\n\n" \
		"Report bugs to <mari.nazaryan717@gmail.com>.\n");
}

void	print_usage(void)
{
	printf("Usage: ./ft_ping [-nrvf?V] [-t TYPE] [-c NUMBER] [-i NUMBER] [-T NUM] [-w N]\n" \
		"\t\t[-W N] [-l NUMBER] [-p PATTERN] [-s NUMBER] [--echo]\n" \
		"\t\t[--type=TYPE] [--count=NUMBER]\n" \
		"\t\t[--numeric] [--ignore-routing] [--ttl=N]\n" \
		"\t\t[--tos=NUM] [--verbose] [--timeout=N] [--linger=N] [--flood]\n" \
		"\t\t[--ip-timestamp=FLAG] [--preload=NUMBER] [--pattern=PATTERN]\n" \
		"\t\t[--size=NUMBER] [--help] [--usage] [--version]\n" \
		"\t\tHOST ...\n");
}

void	print_version(void)
{
	printf("ft_ping (42 School) 1.0\n"\
		"Copyright (C) 2025 Free Software Foundation, Inc.\n"\
		"License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"\
		"This is free software: you are free to change and redistribute it.\n"\
		"There is NO WARRANTY, to the extent permitted by law.\n\n"\
		"Written by mnazarya.\n");
}
