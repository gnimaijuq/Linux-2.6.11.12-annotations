#ifndef _I386_PGTABLE_3LEVEL_DEFS_H
#define _I386_PGTABLE_3LEVEL_DEFS_H
/**
 * 2-9-9-12
*/
/*
 * PGDIR_SHIFT determines what a top-level page table entry can map
 */
/**
 * 确定页全局目录项能映射的区域大小的对数
 * 当PAE被激活时，PGDIR_SHIFT产生的值为30
*/
#define PGDIR_SHIFT	30
/**
 * 页全局目录表的表项个数
 * 当PAE被激活时，PTRS_PER_PGD产生的值为4
*/
#define PTRS_PER_PGD	4

/*
 * PMD_SHIFT determines the size of the area a middle-level
 * page table can map
 */
/**
 * 指定线性地址Offset字段和Table字段的总位数（即页中间目录表可以映射的区域大小的对数）
 * 在80x86处理器上，PUD_SHIFT总是等价于PMD_SHIFT，而PUD_SIZE则等于4MB或2MB
*/
#define PMD_SHIFT	21
/**
 * 页中间目录表的表项个数
 * 当PAE被激活时，PTRS_PER_PMD产生的值为512
*/
#define PTRS_PER_PMD	512

/*
 * entries per page directory level
 */
/**
 * 每个页表的表项个数
 * 当PAE被激活时，PTRS_PER_PTE产生的值为512
*/
#define PTRS_PER_PTE	512

#endif /* _I386_PGTABLE_3LEVEL_DEFS_H */
