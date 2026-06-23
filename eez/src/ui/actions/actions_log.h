#ifndef ACTIONS_LOG_H
#define ACTIONS_LOG_H

#include "stdio.h"

#ifdef __cplusplus
extern "C" {
#endif

#define COLOR_RED     "\033[31m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_RESET   "\033[0m"

#define LOG_ERROR(fmt, ...)   printf(COLOR_RED "[ERROR] " fmt COLOR_RESET "\n", ##__VA_ARGS__)
#define LOG_INFO(fmt, ...)    printf(COLOR_GREEN "[INFO] " fmt COLOR_RESET "\n", ##__VA_ARGS__)
#define LOG_WARN(fmt, ...)    printf(COLOR_YELLOW "[WARN] " fmt COLOR_RESET "\n", ##__VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif /* ACTIONS_LOG_H */