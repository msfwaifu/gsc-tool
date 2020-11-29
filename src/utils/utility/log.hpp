// Copyright 2020 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#ifndef _GSC_UTILS_LOG_HPP_
#define _GSC_UTILS_LOG_HPP_

#ifdef DEBUG
#define LOG_DEBUG(__FMT__, ...) printf("[D]: " __FMT__ "\n", ## __VA_ARGS__);
#define LOG_INFO(__FMT__, ...)  printf("[I]: " __FMT__ "\n", ## __VA_ARGS__);
#define LOG_WARN(__FMT__, ...)  printf("[W]: " __FMT__ "\n", ## __VA_ARGS__);
#define LOG_ERROR(__FMT__, ...) printf("[E]: " __FMT__ "\n", ## __VA_ARGS__);
#define COMPILER_ERROR(__FMT__, ...) printf("[ERROR] COMPILER: " __FMT__ "\n", ## __VA_ARGS__); \
                                    exit(-1);
#else
#define LOG_DEBUG(__FMT__, ...)
#define LOG_INFO(__FMT__, ...)
#define LOG_WARN(__FMT__, ...)
#define LOG_ERROR(__FMT__, ...)  printf("[E]: " __FMT__ "\n", ## __VA_ARGS__);
#define COMPILER_ERROR(__FMT__, ...) printf("[ERROR] COMPILER: " __FMT__ "\n", ## __VA_ARGS__); \
                                    exit(-1);
#endif // DEBUG

namespace utils
{

class log
{
public:

};

} // namespace utils

#endif // _GSC_UTILS_LOG_HPP_
