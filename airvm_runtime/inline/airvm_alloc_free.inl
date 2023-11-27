// 分配内存：op des,size : 8-8-16
case op_memory_alloc_r8:
{
    uint32_t des = ins & 0x00FF;
    uint16_t sizereg = insarr[*pc + 1];
    uintptr_t size = *(uintptr_t *)&reg[sizereg];
    *(uintptr_t *)&reg[des] = (uintptr_t)malloc(size);
    insresult("%4X: alloc_r8  \tr%d,\tr%d \tsize=%u\taddress=0x%p\n", *pc, des, sizereg, size, *(uintptr_t *)&reg[des]);
    *pc += 2;
    continue;
}
break;
// 释放内存：op des      : 8-8
case op_memory_free_r8:
{
    uint32_t des = ins & 0x00FF;
    free(*(void **)&reg[des]);
    insresult("%4X: free_r8  \tr%d\taddress=0x%p\n",
              *pc, des, *(uintptr_t *)&reg[des]);
    *(uintptr_t *)&reg[des] = 0;
    *pc += 1;
    continue;
}
break;

// 分配内存：op des,size : 8-[8]-16-16
case op_memory_alloc_r16:
{
    uint32_t desreg = insarr[*pc + 1];
    uint16_t sizereg = insarr[*pc + 2];
    uintptr_t size = *(uintptr_t *)&reg[sizereg];
    *(uintptr_t *)&reg[desreg] = (uintptr_t)malloc(size);
    insresult("%4X: alloc_r16  \tr%d,\tr%d \tsize=%u\taddress=0x%p\n",
              *pc, desreg, sizereg, size, *(uintptr_t *)&reg[desreg]);
    *pc += 3;
    continue;
}
break;
// 释放内存：op des      : 8-[8]-16
case op_memory_free_r16:
{
    uint32_t des = insarr[*pc + 1];
    free(*(void **)&reg[des]);
    insresult("%4X: free_r16  \tr%d\taddress=0x%p\n", *pc, des, *(uintptr_t *)&reg[des]);
    *(uintptr_t *)&reg[des] = 0;
    *pc += 2;
    continue;
}
break;