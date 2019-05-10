
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0061eff8;
  if (PTR___gmon_start___0061eff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400960(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0061f010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0061f018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0061f020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0061f028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0061f030)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0061f038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0061f040)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0061f048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0061f050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0061f058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0061f060)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0061f068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0061f070)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0061f078)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0061f080)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0061f088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0061f090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0061f098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0061f0a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0061f0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0061f0b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0061f0b8)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0061f0c0)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0061eff8)();
  return;
}


void _start(undefined8 uParm1,undefined8 uParm2,undefined8 uParm3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,uParm3,
                    auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00400b27) */
/* WARNING: Removing unreachable block (ram,0x00400b31) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400b64) */
/* WARNING: Removing unreachable block (ram,0x00400b6e) */

void register_tm_clones(void)

{
  return;
}


void __do_global_dtors_aux(void)

{
  if (completed_6355 == 0) {
    deregister_tm_clones();
    completed_6355 = 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400bb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frame_dummy(void)

{
  register_tm_clones();
  return;
}


undefined8 main(undefined4 uParm1,undefined8 uParm2)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  globalArgc = uParm1;
  globalArgv = uParm2;
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_01_bad();
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_07_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticFive == 5) {
    local_20 = local_30;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x402222;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40222e;
  printStructLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  puVar2 = local_38;
  if (staticFive != 5) {
    (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4022c1;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
    puVar2 = local_20;
  }
  local_20 = puVar2;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40231a;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x402326;
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticFive == 5) {
    local_20 = local_38;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x402406;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x402412;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53c_badSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_15_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_08_bad(void)

{
  int iVar1;
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_51_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54e_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54e_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_66_bad(void)

{
  undefined local_1c8 [400];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_1c8;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_4e8 [1200];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_4e8;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68b_badSink(void)

{
  long lVar1;
  undefined8 auStack840 [101];
  long local_20;
  ulong local_18;
  ulong local_10;
  
  lVar1 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_badData;
  local_20 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_badData;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lVar1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lVar1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68b_goodG2BSink(void)

{
  long lVar1;
  undefined8 auStack840 [101];
  long local_20;
  ulong local_18;
  ulong local_10;
  
  lVar1 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_goodG2BData;
  local_20 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lVar1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lVar1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_1a8 [400];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65b_badSink;
  local_18 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65b_badSink
            (local_18,uParm2,local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_4c8 [1200];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65b_goodG2BSink;
  local_18 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54d_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_05_bad(void)

{
  undefined8 auStack2040 [200];
  undefined local_1b8 [408];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_1b8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_4d8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_4d8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_41_badSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_41_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_41_goodG2BSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68b_badSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_badData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_badData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68b_goodG2BSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_goodG2BData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52c_badSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52c_goodG2BSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_34_bad(void)

{
  undefined8 auStack2056 [200];
  undefined8 local_1c8 [50];
  undefined8 *local_38;
  undefined8 *local_28;
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_38 = local_1c8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2056 + local_10) = 0;
    *(undefined4 *)((long)auStack2056 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_38[local_18] = auStack2056[local_18];
    local_18 = local_18 + 1;
  }
  local_28 = local_38;
  local_20 = local_38;
  printStructLine(local_38);
  return;
}


void goodG2B(void)

{
  undefined8 auStack2056 [100];
  undefined8 local_4e8 [150];
  undefined8 *local_38;
  undefined8 *local_28;
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_38 = local_4e8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2056 + local_10) = 0;
    *(undefined4 *)((long)auStack2056 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_38[local_18] = auStack2056[local_18];
    local_18 = local_18 + 1;
  }
  local_28 = local_38;
  local_20 = local_38;
  printStructLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_07_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_12_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4034bf;
  iVar2 = globalReturnsTrueOrFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_38;
  }
  else {
    local_20 = local_30;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x403524;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x403530;
  printStructLine(local_20);
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar3 * -0x10 + lVar2 * -0x10;
  (&uStack864)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4035b8;
  globalReturnsTrueOrFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  local_20 = local_38;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40361d;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack864)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x403629;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_1a8 [400];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65b_badSink;
  local_18 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65b_badSink
            (local_18,uParm2,local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_4c8 [1200];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65b_goodG2BSink;
  local_18 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_15_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_09_bad(void)

{
  undefined8 auStack2040 [200];
  undefined local_1b8 [408];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_1b8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = local_4d8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_4d8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_17_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack880;
  undefined4 local_368 [2];
  undefined auStack864 [800];
  undefined *local_40;
  undefined *local_38;
  ulong local_30;
  undefined *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_38 = auStack864 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_40 = auStack864 + lVar2 * -0x10 + lVar1 * -0x10;
  local_1c = 0;
  while (local_1c < 1) {
    local_1c = local_1c + 1;
    local_28 = local_38;
  }
  local_30 = 0;
  while (local_30 < 100) {
    local_368[local_30 * 2] = 0;
    local_368[local_30 * 2 + 1] = 0;
    local_30 = local_30 + 1;
  }
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x403af5;
  memmove(local_28,local_368,800,
          *(undefined *)(&uStack880 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x403b01;
  printStructLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack880;
  undefined4 local_368 [2];
  undefined auStack864 [800];
  undefined *local_40;
  undefined *local_38;
  ulong local_30;
  undefined *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_38 = auStack864 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_40 = auStack864 + lVar2 * -0x10 + lVar1 * -0x10;
  local_1c = 0;
  while (local_1c < 1) {
    local_1c = local_1c + 1;
    local_28 = local_40;
  }
  local_30 = 0;
  while (local_30 < 100) {
    local_368[local_30 * 2] = 0;
    local_368[local_30 * 2 + 1] = 0;
    local_30 = local_30 + 1;
  }
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x403be9;
  memmove(local_28,local_368,800,
          *(undefined *)(&uStack880 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x403bf5;
  printStructLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54b_badSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54d_goodG2BSink(uParm1);
  return;
}


void badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x403d79;
  local_20[1] = local_28;
  badSink(local_28,0x10,local_28);
  return;
}


void goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x403e81;
  local_20[0] = local_28;
  goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68b_badSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_badData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_badData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68b_goodG2BSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_goodG2BData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_11_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x403ffb;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x404056;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x404062;
  printStructLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4040ea;
  iVar2 = globalReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_38;
  }
  else {
    (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4040f8;
    printLine("Benign, fixed string");
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x404151;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40415d;
  printStructLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4041e5;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_38;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x404240;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40424c;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_02_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40433b;
  local_28 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404347;
  printStructLine(local_38);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40441c;
  local_30 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404428;
  printStructLine(local_38);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4044fd;
  local_30 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404509;
  printStructLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_66_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_38 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar4 * -0x10 + lVar2;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4045b9;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_66b_badSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_10 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar4 * -0x10 + lVar2;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40464b;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_66b_goodG2BSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_badData = local_1a8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_goodG2BData = local_4c8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_10_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalTrue != 0) {
    local_20 = local_30;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4047a0;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4047ac;
  printStructLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  puVar2 = local_38;
  if (globalFalse != 0) {
    (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40483e;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
    puVar2 = local_20;
  }
  local_20 = puVar2;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x404897;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4048a3;
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalTrue != 0) {
    local_20 = local_38;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404982;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40498e;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_05_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_41_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_41_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_41_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52c_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52c_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_01_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404ed2;
  local_28 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404ede;
  printStructLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404fb3;
  local_30 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404fbf;
  printStructLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53d_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53d_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_34_bad(void)

{
  undefined4 local_7f8 [400];
  undefined local_1b8 [400];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_28 = local_1b8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7f8[local_10 * 2] = 0;
    local_7f8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memcpy(local_28,local_7f8,800);
  printStructLine(local_20);
  return;
}


void goodG2B(void)

{
  undefined4 local_7f8 [200];
  undefined local_4d8 [1200];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_28 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7f8[local_10 * 2] = 0;
    local_7f8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memcpy(local_28,local_7f8,800);
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_17_bad(void)

{
  undefined4 local_7f8 [400];
  undefined local_1b8 [408];
  ulong local_20;
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_1b8;
    local_c = local_c + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_7f8[local_20 * 2] = 0;
    local_7f8[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  memmove(local_18,local_7f8,800);
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_7f8 [200];
  undefined local_4d8 [1208];
  ulong local_20;
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_4d8;
    local_c = local_c + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_7f8[local_20 * 2] = 0;
    local_7f8[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  memmove(local_18,local_7f8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_66b_badSink(long lParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_66b_goodG2BSink(long lParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65b_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_65b_goodG2BSink
               (void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_08_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4055a3;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4055fe;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40560a;
  printStructLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x405692;
  iVar2 = staticReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_38;
  }
  else {
    (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4056a0;
    printLine("Benign, fixed string");
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4056f9;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x405705;
  printStructLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40578d;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_38;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4057e8;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4057f4;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_15_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4058e4;
  local_28 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4058f0;
  printStructLine(local_38);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4059c6;
  local_30 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4059d2;
  printStructLine(local_38);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405aa8;
  local_30 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405ab4;
  printStructLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_1a8 [400];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65b_badSink;
  local_18 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65b_badSink
            (local_18,uParm2,local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_4c8 [1200];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65b_goodG2BSink;
  local_18 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_01_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67_bad(void)

{
  undefined local_1a8 [400];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_1a8;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1200];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_4c8;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_03_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_06_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405ee8;
  local_20 = local_30;
  memmove(local_30,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405ef4;
  printStructLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405f7c) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405fdf;
  local_20 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405feb;
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4060ca;
  local_20 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4060d6;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_63_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_18_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_18_good(void)

{
  goodG2B();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_08_bad(void)

{
  int iVar1;
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_02_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_12_bad(void)

{
  int iVar1;
  undefined4 local_7e8 [200];
  undefined local_4c8 [800];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = local_4c8;
  }
  else {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  globalReturnsTrueOrFalse();
  local_10 = local_4c8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_64b_badSink(void **ppvParm1)

{
  undefined4 local_348 [202];
  void *local_20;
  void **local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = ppvParm1;
  memmove(local_20,local_348,800);
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_64b_goodG2BSink
               (void **ppvParm1)

{
  undefined4 local_348 [202];
  void *local_20;
  void **local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = ppvParm1;
  memmove(local_20,local_348,800);
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_14_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalFive == 5) {
    local_20 = local_30;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406888;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406894;
  printStructLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  puVar2 = local_38;
  if (globalFive != 5) {
    (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x406927;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
    puVar2 = local_20;
  }
  local_20 = puVar2;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x406980;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40698c;
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalFive == 5) {
    local_20 = local_38;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406a6c;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406a78;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_13_bad(void)

{
  undefined8 auStack2040 [200];
  undefined local_1b8 [408];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_1b8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_4d8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_4d8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_32_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack896;
  undefined4 local_378 [2];
  undefined auStack880 [792];
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined **local_30;
  undefined **local_28;
  ulong local_20;
  
  local_28 = &local_58;
  local_30 = &local_58;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_50 = auStack880 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_40 = auStack880 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_378[local_20 * 2] = 0;
    local_378[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack896)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406d8f;
  local_48 = local_50;
  local_38 = local_50;
  local_58 = local_50;
  memmove(local_50,local_378,800,
          *(undefined *)(&uStack896 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack896)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406d9b;
  printStructLine(local_50);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack896;
  undefined4 local_378 [2];
  undefined auStack880 [792];
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined **local_30;
  undefined **local_28;
  ulong local_20;
  
  local_28 = &local_58;
  local_30 = &local_58;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_38 = auStack880 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_50 = auStack880 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_378[local_20 * 2] = 0;
    local_378[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack896)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406ea1;
  local_48 = local_50;
  local_40 = local_50;
  local_58 = local_50;
  memmove(local_50,local_378,800,
          *(undefined *)(&uStack896 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack896)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406ead;
  printStructLine(local_50);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_63b_badSink(long *plParm1)

{
  undefined8 auStack840 [101];
  long local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = *plParm1;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_63b_goodG2BSink(long *plParm1)

{
  undefined8 auStack840 [101];
  long local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = *plParm1;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_17_bad(void)

{
  undefined4 local_7f8 [400];
  undefined local_1b8 [408];
  ulong local_20;
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_1b8;
    local_c = local_c + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_7f8[local_20 * 2] = 0;
    local_7f8[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  memcpy(local_18,local_7f8,800);
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_7f8 [200];
  undefined local_4d8 [1208];
  ulong local_20;
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_4d8;
    local_c = local_c + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_7f8[local_20 * 2] = 0;
    local_7f8[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  memcpy(local_18,local_7f8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_17_good(void)

{
  goodG2B();
  return;
}


void badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_1a8 [400];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_1a8;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_4c8 [1200];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_4c8;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54d_badSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54d_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_11_bad(void)

{
  int iVar1;
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_02_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407648;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65b_badSink
            (local_28,0x10,local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4076db;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65b_goodG2BSink
            (local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_13_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_63b_badSink(void **ppvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_63b_goodG2BSink
               (void **ppvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void badSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_badData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_badData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_badData = local_1a8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_goodG2BData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_goodG2BData = local_4c8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_01_bad(void)

{
  undefined8 auStack2040 [200];
  undefined8 local_1b8 [51];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_1b8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_03_bad(void)

{
  undefined8 auStack2040 [200];
  undefined8 local_1b8 [51];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_1b8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_04_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407ea9;
  local_20 = local_30;
  memmove(local_30,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407eb5;
  printStructLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407f3c) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407f9f;
  local_20 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407fab;
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408089;
  local_20 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408095;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_31_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack880;
  undefined4 local_368 [2];
  undefined auStack864 [792];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_48 = auStack864 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_30 = auStack864 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_368[local_20 * 2] = 0;
    local_368[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408194;
  local_40 = local_48;
  local_38 = local_48;
  local_28 = local_48;
  memmove(local_48,local_368,800,
          *(undefined *)(&uStack880 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4081a0;
  printStructLine(local_48);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack880;
  undefined4 local_368 [2];
  undefined auStack864 [792];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack864 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_48 = auStack864 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_368[local_20 * 2] = 0;
    local_368[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408285;
  local_40 = local_48;
  local_38 = local_48;
  local_30 = local_48;
  memmove(local_48,local_368,800,
          *(undefined *)(&uStack880 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408291;
  printStructLine(local_48);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_63_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_18_bad(void)

{
  undefined8 auStack2040 [200];
  undefined8 local_1b8 [51];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_1b8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53d_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53d_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_10_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_67_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40877c;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_67b_badSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40880e;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_67b_goodG2BSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_03_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_63_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_12_bad(void)

{
  int iVar1;
  undefined8 auStack2040 [100];
  undefined local_4d8 [800];
  undefined local_1b8 [408];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = local_4d8;
  }
  else {
    local_10 = local_1b8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  ulong local_20;
  ulong local_18;
  undefined8 *local_10;
  
  globalReturnsTrueOrFalse();
  local_10 = local_4d8;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_10[local_20] = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_07_bad(void)

{
  undefined8 auStack2040 [200];
  undefined local_1b8 [408];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_1b8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_4d8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_4d8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_18_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_09_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  long lVar1;
  undefined8 auStack840 [101];
  long local_20;
  ulong local_18;
  ulong local_10;
  
  lVar1 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_badData;
  local_20 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_badData;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lVar1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lVar1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_badData = local_1a8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  long lVar1;
  undefined8 auStack840 [101];
  long local_20;
  ulong local_18;
  ulong local_10;
  
  lVar1 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_goodG2BData;
  local_20 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lVar1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lVar1);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_goodG2BData = local_4c8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_17_bad(void)

{
  undefined8 auStack2040 [200];
  undefined local_1b8 [400];
  ulong local_28;
  ulong local_20;
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_1b8;
    local_c = local_c + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined4 *)(auStack2040 + local_20) = 0;
    *(undefined4 *)((long)auStack2040 + local_20 * 8 + 4) = 0;
    local_20 = local_20 + 1;
  }
  local_28 = 0;
  while (local_28 < 100) {
    *(undefined8 *)(local_18 + local_28 * 8) = auStack2040[local_28];
    local_28 = local_28 + 1;
  }
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1200];
  ulong local_28;
  ulong local_20;
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_4d8;
    local_c = local_c + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined4 *)(auStack2040 + local_20) = 0;
    *(undefined4 *)((long)auStack2040 + local_20 * 8 + 4) = 0;
    local_20 = local_20 + 1;
  }
  local_28 = 0;
  while (local_28 < 100) {
    *(undefined8 *)(local_18 + local_28 * 8) = auStack2040[local_28];
    local_28 = local_28 + 1;
  }
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_12_bad(void)

{
  int iVar1;
  undefined4 local_7e8 [200];
  undefined local_4c8 [800];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = local_4c8;
  }
  else {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  globalReturnsTrueOrFalse();
  local_10 = local_4c8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_12_good(void)

{
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_1a8 [400];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_1a8;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_4c8 [1200];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_4c8;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_11_bad(void)

{
  int iVar1;
  undefined8 auStack2040 [200];
  undefined local_1b8 [408];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_1b8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_4d8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_4d8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_02_bad(void)

{
  undefined8 auStack2040 [200];
  undefined8 local_1b8 [51];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_1b8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_badData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_badData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_badData = local_1a8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_goodG2BData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_goodG2BData = local_4c8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_63b_badSink(void **ppvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_63b_goodG2BSink
               (void **ppvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53b_badSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_10_bad(void)

{
  undefined8 auStack2040 [200];
  undefined local_1b8 [408];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_1b8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_4d8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_4d8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54d_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54e_goodG2BSink(uParm1);
  return;
}


void badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_1a8 [400];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_1a8;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_4c8 [1200];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_4c8;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_11_bad(void)

{
  int iVar1;
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_13_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_FIVE == 5) {
    local_20 = local_30;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a2a2;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a2ae;
  printStructLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  puVar2 = local_38;
  if (GLOBAL_CONST_FIVE != 5) {
    (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a341;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
    puVar2 = local_20;
  }
  local_20 = puVar2;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a39a;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a3a6;
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_FIVE == 5) {
    local_20 = local_38;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a486;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a492;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_63b_badSink(void **ppvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_63b_goodG2BSink
               (void **ppvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54c_badSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_66b_badSink(long lParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_66b_goodG2BSink(long lParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_67b_badSink(long lParm1)

{
  undefined8 auStack840 [101];
  long local_20;
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  local_20 = lParm1;
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_67b_goodG2BSink(long lParm1)

{
  undefined8 auStack840 [101];
  long local_20;
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  local_20 = lParm1;
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_01_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65b_badSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_65b_goodG2BSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53d_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53d_goodG2BSink
               (void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_08_bad(void)

{
  int iVar1;
  undefined8 auStack2040 [200];
  undefined local_1b8 [408];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_1b8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_4d8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_4d8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_03_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ae4b;
  local_28 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ae57;
  printStructLine(local_38);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40af2c;
  local_30 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40af38;
  printStructLine(local_38);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b00d;
  local_30 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b019;
  printStructLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65b_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_65b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_63_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b1ab;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_63b_badSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b235;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_63b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_18_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b317;
  local_28 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b323;
  printStructLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b3f9;
  local_30 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b405;
  printStructLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_66b_badSink(long lParm1)

{
  undefined8 auStack840 [101];
  long local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = *(long *)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_66b_goodG2BSink(long lParm1)

{
  undefined8 auStack840 [101];
  long local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = *(long *)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b689;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b713;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_05_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_51b_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_51b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_41_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_41_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_41_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_16_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52c_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52c_goodG2BSink
               (void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_07_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_badData = local_1a8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_goodG2BData = local_4c8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_34_bad(void)

{
  undefined4 local_7f8 [400];
  undefined local_1b8 [400];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_28 = local_1b8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7f8[local_10 * 2] = 0;
    local_7f8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memmove(local_28,local_7f8,800);
  printStructLine(local_20);
  return;
}


void goodG2B(void)

{
  undefined4 local_7f8 [200];
  undefined local_4d8 [1200];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_28 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7f8[local_10 * 2] = 0;
    local_7f8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memmove(local_28,local_7f8,800);
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65b_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_65b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54e_badSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_54e_goodG2BSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_66_bad(void)

{
  undefined local_1c8 [400];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_1c8;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_4e8 [1200];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_4e8;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54e_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_54e_goodG2BSink
               (void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_66_bad(void)

{
  undefined local_1c8 [400];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_1c8;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_4e8 [1200];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_4e8;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_06_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_1a8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c50a) */

void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_4c8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_4c8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_34_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack880;
  undefined4 local_368 [2];
  undefined auStack864 [792];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_48 = auStack864 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_30 = auStack864 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_368[local_20 * 2] = 0;
    local_368[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c6f4;
  local_40 = local_48;
  local_38 = local_48;
  local_28 = local_48;
  memmove(local_48,local_368,800,
          *(undefined *)(&uStack880 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c700;
  printStructLine(local_40);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack880;
  undefined4 local_368 [2];
  undefined auStack864 [792];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack864 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_48 = auStack864 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_368[local_20 * 2] = 0;
    local_368[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c7e5;
  local_40 = local_48;
  local_38 = local_48;
  local_30 = local_48;
  memmove(local_48,local_368,800,
          *(undefined *)(&uStack880 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack880)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c7f1;
  printStructLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52b_badSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68b_badSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_badData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_badData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68b_goodG2BSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_goodG2BData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_51b_badSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_51b_goodG2BSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_16_bad(void)

{
  undefined8 auStack2040 [200];
  undefined8 local_1b8 [51];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_1b8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_64b_badSink(void **ppvParm1)

{
  undefined4 local_348 [202];
  void *local_20;
  void **local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = ppvParm1;
  memcpy(local_20,local_348,800);
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_64b_goodG2BSink
               (void **ppvParm1)

{
  undefined4 local_348 [202];
  void *local_20;
  void **local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = ppvParm1;
  memcpy(local_20,local_348,800);
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67b_badSink(void *pvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = pvParm1;
  memcpy(pvParm1,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = pvParm1;
  memcpy(pvParm1,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_05_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticTrue != 0) {
    local_20 = local_30;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ce4e;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ce5a;
  printStructLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  puVar2 = local_38;
  if (staticFalse != 0) {
    (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ceec;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
    puVar2 = local_20;
  }
  local_20 = puVar2;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40cf45;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40cf51;
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticTrue != 0) {
    local_20 = local_38;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d030;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d03c;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_41_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_41_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d159;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_41_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_41_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d258;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_41_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_14_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_32_bad(void)

{
  undefined4 local_808 [400];
  undefined local_1c8 [400];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined **local_20;
  undefined **local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_30 = local_1c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_808[local_10 * 2] = 0;
    local_808[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_28 = local_30;
  local_38 = local_30;
  memcpy(local_30,local_808,800);
  printStructLine(local_30);
  return;
}


void goodG2B(void)

{
  undefined4 local_808 [200];
  undefined local_4e8 [1200];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined **local_20;
  undefined **local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_30 = local_4e8;
  local_10 = 0;
  while (local_10 < 100) {
    local_808[local_10 * 2] = 0;
    local_808[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_28 = local_30;
  local_38 = local_30;
  memcpy(local_30,local_808,800);
  printStructLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_51b_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_51b_goodG2BSink
               (void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52c_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52c_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_16_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_1a8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_4c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7e8[local_10 * 2] = 0;
    local_7e8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_7e8,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_51_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d9a3;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68b_badSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40da36;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68b_goodG2BSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_64_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40dad0;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_64b_badSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40db5a;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_64b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_66b_badSink(long lParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_66b_goodG2BSink(long lParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_64_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_09_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40dee5;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40df6f;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_06_bad(void)

{
  undefined8 auStack2040 [200];
  undefined8 local_1b8 [51];
  ulong local_20;
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = local_1b8;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_10[local_20] = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e030) */

void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  ulong local_20;
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = local_4d8;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_10[local_20] = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  ulong local_20;
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = local_4d8;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_10[local_20] = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_51_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_04_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_1a8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e25d) */

void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_4c8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_4c8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_31_bad(void)

{
  undefined4 local_7f8 [400];
  undefined local_1b8 [400];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_28 = local_1b8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7f8[local_10 * 2] = 0;
    local_7f8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memcpy(local_28,local_7f8,800);
  printStructLine(local_28);
  return;
}


void goodG2B(void)

{
  undefined4 local_7f8 [200];
  undefined local_4d8 [1200];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_28 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7f8[local_10 * 2] = 0;
    local_7f8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memcpy(local_28,local_7f8,800);
  printStructLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_bad(void)

{
  undefined local_1a8 [400];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_1a8;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1200];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_4c8;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54e_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_54e_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_10_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_06_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_1a8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e866) */

void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_4c8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_4c8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_badData = local_1a8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_goodG2BData = local_4c8;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_64b_badSink(long *plParm1)

{
  undefined8 auStack840 [100];
  long local_28;
  long *local_20;
  ulong local_18;
  ulong local_10;
  
  local_28 = *plParm1;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + local_28) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  local_20 = plParm1;
  printStructLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_64b_goodG2BSink(long *plParm1)

{
  undefined8 auStack840 [100];
  long local_28;
  long *local_20;
  ulong local_18;
  ulong local_10;
  
  local_28 = *plParm1;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + local_28) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  local_20 = plParm1;
  printStructLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_14_bad(void)

{
  undefined8 auStack2040 [200];
  undefined local_1b8 [408];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_1b8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_4d8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined local_4d8 [1208];
  ulong local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_4d8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_10 + local_20 * 8) = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_32_bad(void)

{
  undefined8 auStack2072 [200];
  undefined8 local_1d8 [51];
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 **local_28;
  undefined8 **local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = &local_40;
  local_28 = &local_40;
  local_38 = local_1d8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2072 + local_10) = 0;
    *(undefined4 *)((long)auStack2072 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_38[local_18] = auStack2072[local_18];
    local_18 = local_18 + 1;
  }
  local_30 = local_38;
  local_40 = local_38;
  printStructLine(local_38);
  return;
}


void goodG2B(void)

{
  undefined8 auStack2072 [100];
  undefined8 local_4f8 [151];
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 **local_28;
  undefined8 **local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = &local_40;
  local_28 = &local_40;
  local_38 = local_4f8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2072 + local_10) = 0;
    *(undefined4 *)((long)auStack2072 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_38[local_18] = auStack2072[local_18];
    local_18 = local_18 + 1;
  }
  local_30 = local_38;
  local_40 = local_38;
  printStructLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_15_bad(void)

{
  undefined8 auStack2040 [200];
  undefined8 local_1b8 [51];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_1b8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2040 + local_10) = 0;
    *(undefined4 *)((long)auStack2040 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_20[local_18] = auStack2040[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_67b_badSink(void *pvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = pvParm1;
  memmove(pvParm1,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_67b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = pvParm1;
  memmove(pvParm1,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_64b_badSink(void **ppvParm1)

{
  undefined4 local_348 [202];
  void *local_20;
  void **local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = ppvParm1;
  memmove(local_20,local_348,800);
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_64b_goodG2BSink
               (void **ppvParm1)

{
  undefined4 local_348 [202];
  void *local_20;
  void **local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = ppvParm1;
  memmove(local_20,local_348,800);
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40f387;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40f411;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_64_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_51b_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_51b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67b_badSink(void *pvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = pvParm1;
  memmove(pvParm1,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67b_goodG2BSink
               (void *pvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = pvParm1;
  memmove(pvParm1,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_14_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_16_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f8c9;
  local_28 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f8d5;
  printStructLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_28 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  local_20 = 0;
  while (local_20 < 100) {
    local_358[local_20 * 2] = 0;
    local_358[local_20 * 2 + 1] = 0;
    local_20 = local_20 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f9ab;
  local_30 = local_38;
  memmove(local_38,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f9b7;
  printStructLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_32_bad(void)

{
  undefined4 local_808 [400];
  undefined local_1c8 [400];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined **local_20;
  undefined **local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_30 = local_1c8;
  local_10 = 0;
  while (local_10 < 100) {
    local_808[local_10 * 2] = 0;
    local_808[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_28 = local_30;
  local_38 = local_30;
  memmove(local_30,local_808,800);
  printStructLine(local_30);
  return;
}


void goodG2B(void)

{
  undefined4 local_808 [200];
  undefined local_4e8 [1200];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined **local_20;
  undefined **local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_30 = local_4e8;
  local_10 = 0;
  while (local_10 < 100) {
    local_808[local_10 * 2] = 0;
    local_808[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_28 = local_30;
  local_38 = local_30;
  memmove(local_30,local_808,800);
  printStructLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54d_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_04_bad(void)

{
  undefined8 auStack2040 [200];
  undefined8 local_1b8 [51];
  ulong local_20;
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = local_1b8;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_10[local_20] = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fc06) */

void goodG2B1(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  ulong local_20;
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = local_4d8;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_10[local_20] = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack2040 [100];
  undefined8 local_4d8 [151];
  ulong local_20;
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = local_4d8;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack2040 + local_18) = 0;
    *(undefined4 *)((long)auStack2040 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    local_10[local_20] = auStack2040[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_31_bad(void)

{
  undefined8 auStack2056 [200];
  undefined8 local_1c8 [51];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_30 = local_1c8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2056 + local_10) = 0;
    *(undefined4 *)((long)auStack2056 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_30[local_18] = auStack2056[local_18];
    local_18 = local_18 + 1;
  }
  local_28 = local_30;
  local_20 = local_30;
  printStructLine(local_30);
  return;
}


void goodG2B(void)

{
  undefined8 auStack2056 [100];
  undefined8 local_4e8 [151];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  ulong local_18;
  ulong local_10;
  
  local_30 = local_4e8;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack2056 + local_10) = 0;
    *(undefined4 *)((long)auStack2056 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_30[local_18] = auStack2056[local_18];
    local_18 = local_18 + 1;
  }
  local_28 = local_30;
  local_20 = local_30;
  printStructLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_09_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_TRUE != 0) {
    local_20 = local_30;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ff73;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ff7f;
  printStructLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar4 * -0x10 + lVar3 * -0x10;
  puVar2 = local_38;
  if (GLOBAL_CONST_FALSE != 0) {
    (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410011;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
    puVar2 = local_20;
  }
  local_20 = puVar2;
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41006a;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack864)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410076;
  printStructLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack864;
  undefined4 local_358 [2];
  undefined auStack848 [792];
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_30 = auStack848 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = auStack848 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_TRUE != 0) {
    local_20 = local_38;
  }
  local_28 = 0;
  while (local_28 < 100) {
    local_358[local_28 * 2] = 0;
    local_358[local_28 * 2 + 1] = 0;
    local_28 = local_28 + 1;
  }
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410155;
  memmove(local_20,local_358,800,
          *(undefined *)(&uStack864 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack864)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410161;
  printStructLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_13_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_1a8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_4c8;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_4c8;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_64_bad(void)

{
  undefined local_1a8 [408];
  undefined *local_10;
  
  local_10 = local_1a8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1208];
  undefined *local_10;
  
  local_10 = local_4c8;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_67_bad(void)

{
  undefined local_1a8 [400];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_1a8;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_4c8 [1200];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_4c8;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53d_badSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_53d_goodG2BSink(long lParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + lParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_51_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41058d;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_51b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410617;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_51b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_04_bad(void)

{
  undefined4 local_7e8 [400];
  undefined local_1a8 [400];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_1a8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004106b9) */

void goodG2B1(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_4c8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_7e8 [200];
  undefined local_4c8 [1200];
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_4c8;
  local_18 = 0;
  while (local_18 < 100) {
    local_7e8[local_18 * 2] = 0;
    local_7e8[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_7e8,800);
  printStructLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_31_bad(void)

{
  undefined4 local_7f8 [400];
  undefined local_1b8 [400];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_28 = local_1b8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7f8[local_10 * 2] = 0;
    local_7f8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memmove(local_28,local_7f8,800);
  printStructLine(local_28);
  return;
}


void goodG2B(void)

{
  undefined4 local_7f8 [200];
  undefined local_4d8 [1200];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_28 = local_4d8;
  local_10 = 0;
  while (local_10 < 100) {
    local_7f8[local_10 * 2] = 0;
    local_7f8[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memmove(local_28,local_7f8,800);
  printStructLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_31_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_badData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_badData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4109dd;
  local_20[2] = local_20[0];
  badSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2BSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_goodG2BData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ae)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410ae3;
  local_20[1] = local_20[0];
  goodG2BSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_45_good(void)

{
  goodG2B();
  return;
}


void printLine(char *pcParm1)

{
  if (pcParm1 != (char *)0x0) {
    puts(pcParm1);
  }
  return;
}


void printWLine(long lParm1)

{
  if (lParm1 != 0) {
    wprintf(L"%ls\n",lParm1);
  }
  return;
}


void printIntLine(uint uParm1)

{
  printf("%d\n",(ulong)uParm1);
  return;
}


void printShortLine(short sParm1)

{
  printf("%hd\n",(ulong)(uint)(int)sParm1);
  return;
}


void printFloatLine(float fParm1)

{
  printf((char *)(double)fParm1,&DAT_0041732d);
  return;
}


void printLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printLongLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printSizeTLine(undefined8 uParm1)

{
  printf("%zu\n",uParm1);
  return;
}


void printHexCharLine(char cParm1)

{
  printf("%02x\n",(ulong)(uint)(int)cParm1);
  return;
}


void printWcharLine(undefined4 uParm1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = uParm1;
  printf("%ls\n",&local_18);
  return;
}


void printUnsignedLine(uint uParm1)

{
  printf("%u\n",(ulong)uParm1);
  return;
}


void printHexUnsignedCharLine(byte bParm1)

{
  printf("%02x\n",(ulong)bParm1);
  return;
}


void printDoubleLine(char *pcParm1)

{
  printf(pcParm1,&DAT_0041734a);
  return;
}


void printStructLine(uint *puParm1)

{
  printf("%d -- %d\n",(ulong)*puParm1,(ulong)puParm1[1]);
  return;
}


void printBytesLine(long lParm1,ulong uParm2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < uParm2) {
    printf("%02x",(ulong)*(byte *)(local_10 + lParm1));
    local_10 = local_10 + 1;
  }
  puts("");
  return;
}


ulong decodeHexChars(long lParm1,ulong uParm2,long lParm3)

{
  long lVar1;
  ushort **ppuVar2;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2)] & 0x1000) == 0) break;
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2 + 1)] & 0x1000) == 0) {
      return local_10;
    }
    lVar1 = local_10 * 2 + lParm3;
    __isoc99_sscanf(lVar1,&DAT_00417358,&local_14,lVar1);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


ulong decodeHexWChars(long lParm1,ulong uParm2,long lParm3)

{
  int iVar1;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8 + 4));
    if (iVar1 == 0) {
      return local_10;
    }
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00417360,&local_14);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


undefined8 globalReturnsTrue(void)

{
  return 1;
}


undefined8 globalReturnsFalse(void)

{
  return 0;
}


ulong globalReturnsTrueOrFalse(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = rand();
  uVar2 = (uint)(iVar1 >> 0x1f) >> 0x1f;
  return (ulong)((iVar1 + uVar2 & 1) - uVar2);
}


void good1(void)

{
  return;
}


void good2(void)

{
  return;
}


void good3(void)

{
  return;
}


void good4(void)

{
  return;
}


void good5(void)

{
  return;
}


void good6(void)

{
  return;
}


void good7(void)

{
  return;
}


void good8(void)

{
  return;
}


void good9(void)

{
  return;
}


void bad1(void)

{
  return;
}


void bad2(void)

{
  return;
}


void bad3(void)

{
  return;
}


void bad4(void)

{
  return;
}


void bad5(void)

{
  return;
}


void bad6(void)

{
  return;
}


void bad7(void)

{
  return;
}


void bad8(void)

{
  return;
}


void bad9(void)

{
  return;
}


void internal_start(long lParm1,undefined8 uParm2)

{
  (**(code **)(lParm1 + 8))(*(undefined8 *)(lParm1 + 0x10),uParm2,*(undefined8 *)(lParm1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}


undefined8 stdThreadCreate(pthread_t pParm1,pthread_t pParm2,pthread_t **pppParm3)

{
  int iVar1;
  undefined8 uVar2;
  pthread_t local_18;
  pthread_t *local_10;
  
  *pppParm3 = (pthread_t *)0x0;
  local_10 = (pthread_t *)malloc(0x18);
  if (local_10 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_10[1] = pParm1;
    local_10[2] = pParm2;
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,internal_start,local_10);
    if (iVar1 == 0) {
      *local_10 = local_18;
      *pppParm3 = local_10;
      uVar2 = 1;
    }
    else {
      free(local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}


ulong stdThreadJoin(pthread_t *ppParm1)

{
  int iVar1;
  void *local_10;
  
  iVar1 = pthread_join(*ppParm1,&local_10);
  return (ulong)(iVar1 == 0);
}


undefined8 stdThreadDestroy(void *pvParm1)

{
  free(pvParm1);
  return 1;
}


undefined8 stdThreadLockCreate(pthread_mutex_t **ppabParm1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *ppabParm1 = (pthread_mutex_t *)0x0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *ppabParm1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(ppabParm1);
      uVar2 = 0;
    }
  }
  return uVar2;
}


void stdThreadLockAcquire(pthread_mutex_t *pabParm1)

{
  pthread_mutex_lock(pabParm1);
  return;
}


void stdThreadLockRelease(pthread_mutex_t *pabParm1)

{
  pthread_mutex_unlock(pabParm1);
  return;
}


void stdThreadLockDestroy(pthread_mutex_t *pabParm1)

{
  pthread_mutex_destroy(pabParm1);
  free(pabParm1);
  return;
}


void __libc_csu_init(EVP_PKEY_CTX *pEParm1,undefined8 uParm2,undefined8 uParm3)

{
  long lVar1;
  
  lVar1 = 0;
  _init(pEParm1);
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)pEParm1 & 0xffffffff,uParm2,uParm3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}


void __libc_csu_fini(void)

{
  return;
}


void _fini(void)

{
  return;
}

