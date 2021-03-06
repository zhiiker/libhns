#ifndef __HNS_BITNCMP_H
#define __HNS_BITNCMP_H


/* Copyright (C) 2005, 2013 by Dominick Meglio
 *
 * Permission to use, copy, modify, and distribute this
 * software and its documentation for any purpose and without
 * fee is hereby granted, provided that the above copyright
 * notice appear in all copies and that both that copyright
 * notice and this permission notice appear in supporting
 * documentation, and that the name of M.I.T. not be used in
 * advertising or publicity pertaining to distribution of the
 * software without specific, written prior permission.
 * M.I.T. makes no representations about the suitability of
 * this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 */

#ifndef HAVE_BITNCMP
int hns__bitncmp(const void *l, const void *r, int n);
#else
#define hns__bitncmp(x,y,z) bitncmp(x,y,z)
#endif

#endif /* __HNS_BITNCMP_H */
