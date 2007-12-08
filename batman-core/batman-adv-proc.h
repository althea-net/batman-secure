/*
 * Copyright (C) 2007 B.A.T.M.A.N. contributors:
 * Marek Lindner
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 *
 */





#include <linux/proc_fs.h>

#define PROC_ROOT_DIR "batman-adv"
#define PROC_FILE_INTERFACES "interfaces"
#define PROC_FILE_ORIG_INTERVAL "orig_interval"
#define PROC_FILE_ORIGINATORS "originators"
#define PROC_FILE_GATEWAYS "gateways"
#define PROC_FILE_LOG "log"
#define PROC_FILE_LOG_LEVEL "log_level"



void cleanup_procfs(void);
int setup_procfs(void);
int proc_interfaces_read(char *buf, char **start, off_t offset, int size, int *eof, void *data);
int proc_interfaces_write(struct file *instance, const char __user *userbuffer, unsigned long count, void *data);
int proc_orig_interval_read(char *buf, char **start, off_t offset, int size, int *eof, void *data);
int proc_orig_interval_write(struct file *instance, const char __user *userbuffer, unsigned long count, void *data);
int proc_originators_read(char *buf, char **start, off_t offset, int size, int *eof, void *data);
int proc_originators_write(struct file *instance, const char __user *userbuffer, unsigned long count, void *data);
int proc_gateways_read(char *buf, char **start, off_t offset, int size, int *eof, void *data);
int proc_gateways_write(struct file *instance, const char __user *userbuffer, unsigned long count, void *data);
int proc_log_level_read(char *buf, char **start, off_t offset, int size, int *eof, void *data);
int proc_log_level_write(struct file *instance, const char __user *userbuffer, unsigned long count, void *data);