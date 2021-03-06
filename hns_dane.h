
/* Copyright 1998 by the Massachusetts Institute of Technology.
 * Copyright (C) 2009 by Jakub Hrozek <jhrozek@redhat.com>
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

#include "hns_setup.h"
#include "hns.h"
#include "hns_private.h"

int
hns_dane_verify(
  struct hns_dane_reply *dane_reply,
  const unsigned char *cert,
  size_t cert_len
);

int
hns_dane_encode_email(
  const char *tag,
  const char *email,
  char *out,
  size_t out_len
);

int
hns_dane_encode_name(
  const char *tag,
  const char *name,
  const char *local,
  char *out,
  size_t out_len
);

size_t
hns_dane_email_size(const char *tag, const char *email);

size_t
hns_dane_name_size(const char *tag, const char *name);

int
hns_parse_dane_reply (const unsigned char *abuf, int alen,
                      struct hns_dane_reply **dane_out, int expect);
