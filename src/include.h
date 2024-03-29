/*
Copyright (c) 2012, Jonathan Sifuentes.
All Rights Reserved. 

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met: 

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer. 
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution. 

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies, 
either expressed or implied, of the FreeBSD Project.
*/

#ifndef __INCLUDE_H_QQtV5Sk
#define __INCLUDE_H_QQtV5Sk


#include <ncurses.h>
#include <menu.h>
#include <panels.h>
#ifndef OK_EXIT
#define OK_EXIT 0
#endif

#if __cplusplus /* use the C++ versions */

#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
#else /* pure C versions */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#endif /* __cplusplus */

inline size_t max(size_t a, size_t b) { return (a > b) ? a : b; }
inline size_t min(size_t a, size_t b) { return (a < b) ? a : b; }


#endif /* __INCLUDE_H_QQtV5Sk */
