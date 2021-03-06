/*
 * Polling/timing management
 * Copyright (C) 2008 Daniel Drake <dsd@gentoo.org>
 * Copyright (C) 2018 Bastien Nocera <hadess@hadess.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/**
 * fpi_timeout_fn:
 * @data: the data passed to fpi_timeout_add()
 *
 * The prototype of the callback function for fpi_timeout_add().
 */
typedef void (*fpi_timeout_fn)(void *data);

/**
 * fpi_timeout:
 *
 * An opaque structure representing a scheduled function call, created with
 * fpi_timeout_add().
 */
typedef struct fpi_timeout fpi_timeout;
fpi_timeout *fpi_timeout_add(unsigned int msec, fpi_timeout_fn callback,
	void *data);
void fpi_timeout_cancel(fpi_timeout *timeout);
