#ifndef _I386_PGTABLE_2LEVEL_DEFS_H
#define _I386_PGTABLE_2LEVEL_DEFS_H
/**
 * 10-10-12
*/
/*
 * traditional i386 two-level paging structure:
 */
/**
 * 确定页全局目录项能映射的区域大小的对数
 * 当PAE被禁止，PGDIR_SHIFT产生的值为22
*/
#define PGDIR_SHIFT	22
/**
 * 每个页目录表里有1024项
 * 当PAE被禁止，PTRS_PER_PGD产生的值为1024
*/
#define PTRS_PER_PGD	1024

/*
 * the i386 is two-level, so we don't really have any
 * PMD directory physically.
 */
/* 当PAE被禁止时，不存在页上级目录*/
/* 当PAE被禁止时，不存在页中间目录*/

/**
 * 每个页表里有1024项
 * 当PAE被禁止，PTRS_PER_PTE产生的值为1024
*/
#define PTRS_PER_PTE	1024

#endif /* _I386_PGTABLE_2LEVEL_DEFS_H */
