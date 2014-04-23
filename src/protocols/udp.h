/*
** Copyright (C) 2002-2013 Sourcefire, Inc.
** Copyright (C) 1998-2002 Martin Roesch <roesch@sourcefire.com>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/


#ifndef UDP_H
#define UDP_H

#include <cstdint>


/* otherwise defined in /usr/include/ppp_defs.h */
#define UDP_HEADER_LEN          8

#define IsUDP(p) (IsIP(p) && p->udph)


namespace udp
{

namespace detail
{
const uint8_t HEADER_LEN = 8;

} // namespace detail

struct UDPHdr
{
    uint16_t uh_sport;
    uint16_t uh_dport;
    uint16_t uh_len;
    uint16_t uh_chk;

};

inline uint8_t header_len()
{
    return detail::HEADER_LEN;
}


} // namespace

#endif