/*
 * heapsort.h
 * pull in standard headers (including portability hacks)
 *
 * Copyright (c) 2012 pkgconf authors (see AUTHORS).
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * This software is provided 'as is' and without any warranty, express or
 * implied.  In no event shall the authors be liable for any damages arising
 * from the use of this software.
 */

#ifndef LIBPKGCONF_HEAPSORT_H
#define LIBPKGCONF_HEAPSORT_H

int heapsort(void *, size_t, size_t, int (*compar)(const void *, const void *));

#endif
