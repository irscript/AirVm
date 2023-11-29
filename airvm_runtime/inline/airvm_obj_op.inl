// 有GC引用
case op_memory_new_obj_r8: // 分配普通对象: op des,typeserial : 8-8-32
{
    uint32_t des = ins & 0x00FF;
    uint32_t type = *(uint32_t *)&insarr[*pc + 1];
    *(uintptr_t *)&reg[des] = airvm_new_object(func, type);
    insresult("%4X: new_obj_r8 \tr%d,\t%u\n", *pc, des, type);
    *pc += 3;
    continue;
}
break;
case op_memory_new_obj_r16: // 分配普通对象: op des,typeserial : 8-[8]-16-32
{
    uint32_t des = insarr[*pc + 1];
    uint32_t type = *(uint32_t *)&insarr[*pc + 2];
    *(uintptr_t *)&reg[des] = airvm_new_object(func, type);
    insresult("%4X: new_obj_r16 \tr%d,\t%u\n", *pc, des, type);
    *pc += 4;
    continue;
}
break;
case op_memory_grab_obj_r8: // 对象引用: op des : 8-8
{
    uint32_t des = ins & 0x00FF;
    airvm_grab_object(*(uintptr_t *)&reg[des]);
    insresult("%4X: grab_obj_r8 \tr%d\n", *pc, des);
    *pc += 1;
    continue;
}
break;
case op_memory_grab_obj_r16: // 对象引用: op des : 8-[8]-16
{
    uint32_t des = insarr[*pc + 1];
    airvm_grab_object(*(uintptr_t *)&reg[des]);
    insresult("%4X: grab_obj_r16 \tr%d\n", *pc, des);
    *pc += 2;
    continue;
}
break;
case op_memory_drop_obj_r8: // 对象释放: op des : 8-8
{
    uint32_t des = ins & 0x00FF;
    airvm_drop_object((uintptr_t *)&reg[des]);
    insresult("%4X: drop_obj_r8 \tr%d\n", *pc, des);
    *pc += 1;
    continue;
}
break;
case op_memory_drop_obj_r16: // 对象释放: op des : 8-[8]-16
{
    uint32_t des = insarr[*pc + 1];
    airvm_drop_object((uintptr_t *)&reg[des]);
    insresult("%4X: drop_obj_r16 \tr%d\n", *pc, des);
    *pc += 2;
    continue;
}
break;
case op_memory_lock_obj_r8: // 对象锁定: op des : 8-8
{
    uint32_t des = ins & 0x00FF;
    airvm_lock_object(*(uintptr_t *)&reg[des]);
    insresult("%4X: lock_obj_r8 \tr%d\n", *pc, des);
    *pc += 1;
    continue;
}
break;
case op_memory_lock_obj_r16: // 对象锁定: op des : 8-[8]-16
{
    uint32_t des = insarr[*pc + 1];
    airvm_lock_object(*(uintptr_t *)&reg[des]);
    insresult("%4X: lock_obj_r16 \tr%d\n", *pc, des);
    *pc += 2;
    continue;
}
break;
case op_memory_unlock_obj_r8: // 对象解锁: op des : 8-8
{
    uint32_t des = ins & 0x00FF;
    airvm_unlock_object(*(uintptr_t *)&reg[des]);
    insresult("%4X: unlock_obj_r8 \tr%d\n", *pc, des);
    *pc += 1;
    continue;
}
break;
case op_memory_unlock_obj_r16: // 对象解锁: op des : 8-[8]-16
{
    uint32_t des = insarr[*pc + 1];
    airvm_unlock_object(*(uintptr_t *)&reg[des]);
    insresult("%4X: unlock_obj_r16 \tr%d\n", *pc, des);
    *pc += 2;
    continue;
}
break;