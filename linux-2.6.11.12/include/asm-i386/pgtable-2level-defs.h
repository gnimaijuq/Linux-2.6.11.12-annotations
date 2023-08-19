#ifndef _I386_PGTABLE_2LEVEL_DEFS_H
#define _I386_PGTABLE_2LEVEL_DEFS_H

/*
 * traditional i386 two-level paging structure:
 */
/**
 * 定义：确定页全局目录项能映射的区域大小的对数
 * 备注：当PAE被禁止，PGDIR_SHIFT产生的值为22
*/
#define PGDIR_SHIFT	22
/**
 * 定义：每个页目录表里有1024项
 * 备注：当PAE被禁止，PTRS_PER_PGD产生的值为1024
*/
#define PTRS_PER_PGD	1024

/*
 * the i386 is two-level, so we don't really have any
 * PMD directory physically.
 */
/* 备注：当PAE被禁止时，不存在页上级目录*/
/* 备注：当PAE被禁止时，不存在页中间目录*/

/**
 * 定义：每个页表里有1024项
 * 备注：当PAE被禁止，PTRS_PER_PGD产生的值为1024
*/
#define PTRS_PER_PTE	1024

#endif /* _I386_PGTABLE_2LEVEL_DEFS_H */
