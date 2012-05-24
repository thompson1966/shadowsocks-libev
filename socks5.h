#pragma once

#define VERSION 0x05
#define CONNECT 0x01
#define IPV4 0x01
#define DOMAIN 0x03
#define IPV6 0x04

struct method_select_request
{
	char ver;
	char nmethods;
	char methods[255];
};

struct method_select_response
{
	char version;
	char method;
};

struct socks5_request
{
	char ver;
	char cmd;
	char rsv;
	char atyp;
};

struct socks5_response
{
	char ver;
	char rep;
	char rsv;
	char atyp;
};

