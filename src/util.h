/*
 * transmission-remote-gtk - A GTK RPC client to Transmission
 * Copyright (C) 2011  Alan Fitton

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef UTIL_H_
#define UTIL_H_

#include <glib-object.h>

#define trg_strlspeed(a, b) tr_strlspeed(a, b, sizeof(a))
#define trg_strlpercent(a, b) tr_strlpercent(a, b, sizeof(a))
#define trg_strlsize(a, b) tr_strlsize(a, b, sizeof(a))
#define trg_strlratio(a, b) tr_strlratio(a, b, sizeof(a))

#define TR_RATIO_NA  -1
#define TR_RATIO_INF -2
#define KILOBYTE_FACTOR 1024.0
#define MEGABYTE_FACTOR ( 1024.0 * 1024.0 )
#define GIGABYTE_FACTOR ( 1024.0 * 1024.0 * 1024.0 )

char *tr_strltime_long(char *buf, gint64 seconds, size_t buflen);
char *tr_strltime_short(char *buf, gint64 seconds, size_t buflen);
char *tr_strpercent(char *buf, double x, size_t buflen);
char *tr_strlpercent(char *buf, double x, size_t buflen);
char *tr_strratio(char *buf, size_t buflen, double ratio,
		  const char *infinity);
char *tr_strlratio(char *buf, double ratio, size_t buflen);
char *tr_strlspeed(char *buf, double kb_sec, size_t buflen);
char *tr_strlsize(char *buf, guint64 size, size_t buflen);
char *gtr_localtime(time_t time);
char *gtr_localtime2(char *buf, time_t time, size_t buflen);
int tr_snprintf(char *buf, size_t buflen, const char *fmt, ...);
int tr_snprintf(char *buf, size_t buflen, const char *fmt, ...);
size_t tr_strlcpy(char *dst, const void *src, size_t siz);
double tr_truncd(double x, int decimal_places);
int evutil_vsnprintf(char *buf, size_t buflen, const char *format,
		     va_list ap);

#endif				/* UTIL_H_ */