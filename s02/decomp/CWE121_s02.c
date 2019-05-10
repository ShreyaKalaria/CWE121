typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef int    wchar_t;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef long __time_t;

typedef __time_t time_t;

typedef uint wint_t;

typedef ulong size_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

struct evp_pkey_ctx_st {
};

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef struct __pthread_internal_list __pthread_internal_list, *P__pthread_internal_list;

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_list {
    struct __pthread_internal_list * __prev;
    struct __pthread_internal_list * __next;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};

typedef union pthread_mutexattr_t pthread_mutexattr_t, *Ppthread_mutexattr_t;

union pthread_mutexattr_t {
    char __size[4];
    int __align;
};

typedef ulong pthread_t;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00400a00(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __isoc99_sscanf(void)

{
  __isoc99_sscanf();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(__mutex,__mutexattr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = iswxdigit(__wc);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void pthread_exit(void *__retval)

{
                    // WARNING: Subroutine does not return
  pthread_exit(__retval);
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = wprintf(__format);
  return iVar1;
}



void __isoc99_swscanf(void)

{
  __isoc99_swscanf();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00400bf7)
// WARNING: Removing unreachable block (ram,0x00400c01)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00400c34)
// WARNING: Removing unreachable block (ram,0x00400c3e)

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



// WARNING: Removing unreachable block (ram,0x00400c84)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined8 main(undefined4 param_1,undefined8 param_2)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  globalArgc = param_1;
  globalArgv = param_2;
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_bad();
  return 0;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54d_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54e_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54d_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54e_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x00403f08)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x0040405b)

void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4041cf;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4041e6;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4041f2;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x00404272)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4042b1;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4042c8;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4042d4;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404387;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40439e;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4043aa;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40447e;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404495;
  memmove(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4044a1;
  printLine(local_40,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40455b;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404572;
  memmove(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40457e;
  printLine(local_40,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63b_badSink(&local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63b_goodG2BSink(&local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404693;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4046aa;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4046b6;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404761;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404778;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404784;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_badSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404ba2;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67b_badSink
            (local_28,*(undefined *)
                       (&ppuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404c37;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67b_goodG2BSink
            (local_28,*(undefined *)
                       (&puStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404cd4;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63b_badSink
            (local_20,*(undefined *)
                       (appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404d61;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63b_goodG2BSink
            (local_20,*(undefined *)
                       (apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [16];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  strncpy(local_18,(char *)&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [32];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  strncpy(local_18,(char *)&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66b_badSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66b_goodG2BSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_badSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_badSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_goodG2BSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [16];
  size_t local_28;
  ulong local_20;
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_38;
    local_38[0] = 0;
    local_c += 1;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_28 = strlen((char *)&local_58);
  local_20 = 0;
  while (local_20 < local_28 + 1) {
    local_18[local_20] = *(char *)((long)&local_58 + local_20);
    local_20 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [32];
  size_t local_28;
  ulong local_20;
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_48;
    local_48[0] = 0;
    local_c += 1;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_28 = strlen((char *)&local_58);
  local_20 = 0;
  while (local_20 < local_28 + 1) {
    local_18[local_20] = *(char *)((long)&local_58 + local_20);
    local_20 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_bad(void)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [16];
  char local_28 [24];
  char *local_10;
  
  uVar1 = globalReturnsTrueOrFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  globalReturnsTrueOrFalse();
  local_38[0] = 0;
  local_10 = local_38;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54e_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54e_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405613;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40562a;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405636;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4056e1;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4056f8;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405704;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4057af;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4057c6;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4057d2;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_30 = 0;
    local_1c += 1;
    local_28 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4058a9;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4058c0;
  memcpy(local_28,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4058cc;
  printLine(local_28,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_38 = 0;
    local_1c += 1;
    local_28 = local_38;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405989;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4059a0;
  memcpy(local_28,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4059ac;
  printLine(local_28,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_good(void)

{
  goodG2B();
  return;
}



void badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405aab;
  local_20[1] = local_28;
  badSink((char *)local_28);
  return;
}



void goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  char *pcStack48;
  char ***local_28;
  char ***local_20 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&pcStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405b96;
  local_20[0] = local_28;
  goodG2BSink((char *)local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_good(void)

{
  goodG2B();
  return;
}



void badSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_badData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_badData;
  badSink();
  return;
}



void goodG2BSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_goodG2BData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_goodG2BData;
  goodG2BSink();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54d_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54e_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54d_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54e_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64b_badSink(&local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64b_goodG2BSink(&local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_bad(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  uVar1 = globalReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = globalReturnsFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = globalReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51b_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51b_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52c_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52c_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_badData = local_20[0];
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4065b2;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68b_badSink
            (*(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_goodG2BData = local_20[0];
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406648;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68b_goodG2BSink
            (*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406892;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4068a9;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4068b5;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406940;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406975;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40698c;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406998;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406a4c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406a63;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406a6f;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406d23;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406e05;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_38 = 0;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406ede;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66b_badSink
            (local_48,*(undefined *)
                       (&uStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_10 = auStack64 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_38 = 0;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406f73;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66b_goodG2BSink
            (local_48,*(undefined *)
                       (&uStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407010;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40709d;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [16];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_28;
    local_28[0] = 0;
    local_c += 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_18,(char *)&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [32];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_38;
    local_38[0] = 0;
    local_c += 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_18,(char *)&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4072b3;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4072ca;
  memmove(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4072d6;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407390;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4073a7;
  memmove(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4073b3;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66b_badSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66b_goodG2BSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52c_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52c_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64b_badSink(&local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64b_goodG2BSink(&local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67b_badSink(char *param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = param_1;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67b_goodG2BSink(char *param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = param_1;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407768;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4077f5;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x00407968)

void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66b_badSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66b_goodG2BSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52c_goodG2BSink(param_1);
  return;
}



void badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_bad(void)

{
  char local_28 [16];
  char *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_28;
  local_28[0] = 0;
  badSink(local_18);
  return;
}



void goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_good(void)

{
  goodG2B();
  return;
}



void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_badData = local_20[0];
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407df0;
  local_20[2] = local_20[0];
  badSink(*(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_goodG2BData = local_20[0];
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407ee2;
  local_20[1] = local_20[0];
  goodG2BSink(*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [16];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_28;
    local_28[0] = 0;
    local_c += 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_18,(char *)&local_48);
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [32];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_38;
    local_38[0] = 0;
    local_c += 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_18,(char *)&local_48);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54e_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54e_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_38 = 0;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408107;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66b_badSink
            (local_48,*(undefined *)
                       (&uStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_10 = auStack64 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_38 = 0;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40819c;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66b_goodG2BSink
            (local_48,*(undefined *)
                       (&uStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408262;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408279;
  memcpy(local_40,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408285;
  printLine(local_40,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40833f;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408356;
  memcpy(local_40,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408362;
  printLine(local_40,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408426;
  local_20 = local_30;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40846e;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x004084ef)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40852e;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408576;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40862a;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408672;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void badSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_bad(void)

{
  char local_28 [16];
  char *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_28;
  local_28[0] = 0;
  badSink(local_18);
  return;
}



void goodG2BSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  strcpy(param_1,(char *)&local_28);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  strcpy(param_1,(char *)&local_28);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4088ad;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63b_badSink
            (local_20,*(undefined *)
                       (appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40893a;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63b_goodG2BSink
            (local_20,*(undefined *)
                       (apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64b_badSink(char **param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_28;
  char *local_20;
  char **local_18;
  ulong local_10;
  
  local_20 = *param_1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = param_1;
  local_28 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    local_20[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_20);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64b_goodG2BSink(char **param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_28;
  char *local_20;
  char **local_18;
  ulong local_10;
  
  local_20 = *param_1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = param_1;
  local_28 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    local_20[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_20);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408af1;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408b7e;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408c35;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408c7d;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408d28;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408d70;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408f68;
  uVar3 = globalReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408f9f;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408fb6;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408fc2;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409043;
  uVar3 = globalReturnsFalse(*(undefined *)
                              (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe))
  ;
  if ((int)uVar3 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409051;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409086;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40909d;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4090a9;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40912a;
  uVar3 = globalReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409161;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409178;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409184;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x00409210)

void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
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



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409439;
  uVar3 = staticReturnsTrue(*(undefined *)
                             (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409470;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4094b8;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409539;
  uVar3 = staticReturnsFalse(*(undefined *)
                              (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe))
  ;
  if ((int)uVar3 == 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  else {
    auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409547;
    printLine("Benign, fixed string",
              *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40957c;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4095c4;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409645;
  uVar3 = staticReturnsTrue(*(undefined *)
                             (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40967c;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4096c4;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64b_badSink(&local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64b_goodG2BSink(&local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_bad(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_48 [24];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  memmove(local_28,&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_58 [40];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  memmove(local_28,&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409a96;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409b23;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53d_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53d_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x00409c59)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409e29;
  local_20[1] = local_28;
  badSink((char *)local_28);
  return;
}



void goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  char *pcStack48;
  char ***local_28;
  char ***local_20 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&pcStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409f14;
  local_20[0] = local_28;
  goodG2BSink((char *)local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409fb1;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64b_badSink
            (local_20,*(undefined *)
                       (appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a03e;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64b_goodG2BSink
            (local_20,*(undefined *)
                       (apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void badSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_badData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_badData = local_20[0];
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a29c;
  local_20[2] = local_20[0];
  badSink(*(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2BSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_goodG2BData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_goodG2BData = local_20[0];
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a3b3;
  local_20[1] = local_20[0];
  goodG2BSink(*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  memmove(local_20,&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  memmove(local_20,&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_bad(void)

{
  char local_28 [16];
  char *local_18;
  char *local_10;
  
  local_18 = local_28;
  local_28[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67b_badSink(local_18);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  char *local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67b_goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63b_badSink(&local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63b_goodG2BSink(&local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64b_badSink(char **param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_28;
  char *local_20;
  char **local_18;
  ulong local_10;
  
  local_20 = *param_1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = param_1;
  local_28 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    local_20[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_20);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64b_goodG2BSink(char **param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_28;
  char *local_20;
  char **local_18;
  ulong local_10;
  
  local_20 = *param_1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = param_1;
  local_28 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    local_20[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_20);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_bad(void)

{
  char local_28 [16];
  char *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_badSink;
  local_18 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_badSink(local_18);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68b_badSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_badData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68b_goodG2BSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_goodG2BData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a8b0;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a8c7;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a8d3;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a95f;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a994;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a9ab;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a9b7;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40aa6c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40aa83;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40aa8f;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  strncpy(local_20,(char *)&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  strncpy(local_20,(char *)&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63b_badSink(char **param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = *param_1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63b_goodG2BSink(char **param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = *param_1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ad34;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40adc1;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ae5e;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64b_badSink
            (local_20,*(undefined *)
                       (appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40aeeb;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64b_goodG2BSink
            (local_20,*(undefined *)
                       (apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40afac;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40afc3;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40afcf;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b05b;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b090;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b0a7;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b0b3;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b168;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b17f;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b18b;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b280;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b297;
  memmove(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b2a3;
  printLine(local_48,*(undefined *)
                      (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b37e;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b395;
  memmove(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b3a1;
  printLine(local_48,*(undefined *)
                      (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63b_badSink(char **param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = *param_1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63b_goodG2BSink(char **param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = *param_1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [16];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_28;
    local_28[0] = 0;
    local_c += 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_18,&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [32];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_38;
    local_38[0] = 0;
    local_c += 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_18,&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b699;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b6b0;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b6bc;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x0040b73d)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b77c;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b793;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b79f;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b853;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b86a;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b876;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54d_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54e_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54d_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54e_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_bad(void)

{
  char local_28 [16];
  char *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_badSink;
  local_18 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_badSink(local_18);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x0040bce4)

void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_badSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_goodG2BSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54d_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54e_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54d_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54e_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c060;
  local_20 = local_30;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c0a8;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x0040c128)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c167;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c1af;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c262;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c2aa;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  size_t local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c37e;
  local_40 = local_48;
  local_38 = local_48;
  local_28 = local_48;
  local_50 = strlen(auStack112[1],
                    *(undefined *)
                     (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_50 + 1) {
    *(undefined *)((long)local_48 + local_20) = *(undefined *)((long)auStack112[1] + local_20);
    local_20 += 1;
  }
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c3c6;
  printLine(local_48,*(undefined *)
                      (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  size_t local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c480;
  local_40 = local_48;
  local_38 = local_48;
  local_30 = local_48;
  local_50 = strlen(auStack112[1],
                    *(undefined *)
                     (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_50 + 1) {
    *(undefined *)((long)local_48 + local_20) = *(undefined *)((long)auStack112[1] + local_20);
    local_20 += 1;
  }
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c4c8;
  printLine(local_48,*(undefined *)
                      (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_bad(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  uVar1 = globalReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = globalReturnsFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = globalReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c86b;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c882;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c88e;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x0040c910)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c94f;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c966;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c972;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ca27;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ca3e;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ca4a;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40caf5;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64b_badSink
            (local_20,*(undefined *)
                       (appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cb82;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64b_goodG2BSink
            (local_20,*(undefined *)
                       (apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54e_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54e_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_bad(void)

{
  char local_28 [16];
  char *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_badSink;
  local_18 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_badSink(local_18);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d076;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d103;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52c_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52c_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d367;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d37e;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d38a;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d434;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d44b;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d457;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d501;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d518;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d524;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68b_badSink();
  return;
}



void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68b_goodG2BSink();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68b_badSink(void)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_badData,(char *)&local_28);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68b_goodG2BSink(void)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_goodG2BData,
         (char *)&local_28);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63b_badSink(&local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63b_goodG2BSink(&local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_bad(void)

{
  ulong uVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [16];
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  uVar1 = globalReturnsTrueOrFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  globalReturnsTrueOrFalse();
  local_48[0] = 0;
  local_10 = local_48;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x0040d9ca)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_bad(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dc65;
  uVar3 = globalReturnsTrueOrFalse
                    (*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dcad;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dcc4;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dcd0;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dd51;
  uVar3 = globalReturnsTrueOrFalse
                    (*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 == 0) {
    *(undefined *)local_30 = 0;
  }
  else {
    *(undefined *)local_30 = 0;
  }
  local_20 = local_30;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dd99;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ddb0;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ddbc;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54d_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54e_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54d_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54e_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52c_badSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52c_goodG2BSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_bad(void)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  uVar1 = globalReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  uVar1 = globalReturnsFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  uVar1 = globalReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e2fb;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e312;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e31e;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x0040e3a0)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e3df;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e3f6;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e402;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e4b7;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e4ce;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e4da;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68b_badSink();
  return;
}



void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68b_goodG2BSink();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e5fa;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_badSink((char *)local_28);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  char *pcStack48;
  char ***local_28;
  char ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&pcStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e690;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_goodG2BSink((char *)local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66b_badSink(long param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(local_10,(char *)&local_28);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66b_goodG2BSink(long param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(local_10,(char *)&local_28);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [16];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_28;
    local_28[0] = 0;
    local_c += 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_18,&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [32];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_38;
    local_38[0] = 0;
    local_c += 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_18,&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ea20;
  uVar3 = globalReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ea57;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ea6e;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ea7a;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40eafb;
  uVar3 = globalReturnsFalse(*(undefined *)
                              (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe))
  ;
  if ((int)uVar3 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40eb09;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40eb3e;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40eb55;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40eb61;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ebe2;
  uVar3 = globalReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ec19;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ec30;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ec3c;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ed00;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ed17;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ed23;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40edcd;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ede4;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40edf0;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ee9a;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40eeb1;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40eebd;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_38 = 0;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f032;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66b_badSink
            (local_48,*(undefined *)
                       (&uStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_10 = auStack64 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_38 = 0;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f0c7;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66b_goodG2BSink
            (local_48,*(undefined *)
                       (&uStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53d_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53d_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f443;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f48b;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f535;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f57d;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f627;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f66f;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f71a;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f7a7;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f8b8;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f8cf;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f8db;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f986;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f99d;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f9a9;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_bad(void)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [16];
  char local_28 [24];
  char *local_10;
  
  uVar1 = globalReturnsTrueOrFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  globalReturnsTrueOrFalse();
  local_38[0] = 0;
  local_10 = local_38;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52c_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52c_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fc7f;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fcc7;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFalse == 0) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  else {
    auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fd52;
    printLine("Benign, fixed string",
              *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fd87;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fdcf;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fe83;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fecb;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_good(void)

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



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_bad(void)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  uVar1 = staticReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  uVar1 = staticReturnsFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  uVar1 = staticReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_badData = local_20[0];
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410246;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68b_badSink
            (*(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_goodG2BData = local_20[0];
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4102dc;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68b_goodG2BSink
            (*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410423;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63b_badSink
            (local_20,*(undefined *)
                       (appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4104b0;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63b_goodG2BSink
            (local_20,*(undefined *)
                       (apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_bad(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41053d;
  uVar3 = globalReturnsTrueOrFalse
                    (*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 == 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  else {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410585;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4105cd;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41064e;
  uVar3 = globalReturnsTrueOrFalse
                    (*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 == 0) {
    *(undefined *)local_38 = 0;
  }
  else {
    *(undefined *)local_38 = 0;
  }
  local_20 = local_38;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410696;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4106de;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_good(void)

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



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410785;
  uVar3 = staticReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4107bc;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4107d3;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4107df;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410860;
  uVar3 = staticReturnsFalse(*(undefined *)
                              (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe))
  ;
  if ((int)uVar3 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41086e;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4108a3;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4108ba;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4108c6;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410947;
  uVar3 = staticReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41097e;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410995;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4109a1;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410a80;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410b0d;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_30 = 0;
    local_1c += 1;
    local_28 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410d3d;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410d54;
  memmove(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410d60;
  printLine(local_28,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_38 = 0;
    local_1c += 1;
    local_28 = local_38;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410e1d;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410e34;
  memmove(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410e40;
  printLine(local_28,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41111a;
  uVar3 = globalReturnsTrue(*(undefined *)
                             (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411151;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411199;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41121a;
  uVar3 = globalReturnsFalse(*(undefined *)
                              (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe))
  ;
  if ((int)uVar3 == 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  else {
    auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411228;
    printLine("Benign, fixed string",
              *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41125d;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4112a5;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411326;
  uVar3 = globalReturnsTrue(*(undefined *)
                             (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41135d;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4113a5;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411469;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4114b1;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41155b;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4115a3;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41164d;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411695;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_bad(void)

{
  char local_28 [16];
  char *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_badSink;
  local_18 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_badSink(local_18);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_good(void)

{
  goodG2B();
  return;
}



void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_badData;
  badSink();
  return;
}



void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_goodG2BData;
  goodG2BSink();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41191e;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411935;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411941;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4119ec;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411a03;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411a0f;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x00411ad5)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411ca6;
  local_20[1] = local_28;
  badSink((char *)local_28);
  return;
}



void goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  char *pcStack48;
  char ***local_28;
  char ***local_20 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&pcStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411d91;
  local_20[0] = local_28;
  goodG2BSink((char *)local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411e62;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411eef;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66b_badSink(long param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = *(char **)(param_1 + 0x10);
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66b_goodG2BSink(long param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = *(char **)(param_1 + 0x10);
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4121c3;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41220b;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4122b5;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4122fd;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53d_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53d_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53d_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53d_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void badSink(void)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_badData,(char *)&local_28);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_badData;
  badSink();
  return;
}



void goodG2BSink(void)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_goodG2BData,
         (char *)&local_28);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_goodG2BData;
  goodG2BSink();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51b_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51b_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_18,(char *)&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_18,(char *)&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x004127e5)

void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63b_badSink(&local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63b_goodG2BSink(&local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41299b;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_badSink((char *)local_28);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  char *pcStack48;
  char ***local_28;
  char ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&pcStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412a31;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_goodG2BSink((char *)local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_good(void)

{
  goodG2B();
  return;
}



void badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_bad(void)

{
  char local_28 [16];
  char *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_28;
  local_28[0] = 0;
  badSink(local_18);
  return;
}



void goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68b_badSink();
  return;
}



void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68b_goodG2BSink();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51b_badSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51b_goodG2BSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64b_badSink(&local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64b_goodG2BSink(&local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64b_badSink(char **param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  strcpy(local_18,(char *)&local_28);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64b_goodG2BSink(char **param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  strcpy(local_18,(char *)&local_28);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412e72;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412eff;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54d_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54e_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54d_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54e_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68b_badSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_badData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68b_goodG2BSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_goodG2BData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_badData = local_20[0];
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413215;
  local_20[2] = local_20[0];
  badSink(*(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_goodG2BData = local_20[0];
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413307;
  local_20[1] = local_20[0];
  goodG2BSink(*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413504;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41351b;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413527;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x004135a8)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4135e7;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4135fe;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41360a;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4136be;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4136d5;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4136e1;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52c_goodG2BSink(param_1);
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



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_bad(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  uVar1 = staticReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = staticReturnsFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = staticReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52c_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52c_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54e_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54e_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413b52;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413bdf;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413cd4;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413ceb;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413cf7;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413d83;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413db8;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413dcf;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413ddb;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413e90;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413ea7;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413eb3;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68b_badSink();
  return;
}



void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68b_goodG2BSink();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41427a;
  local_20 = local_30;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4142c2;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x00414344)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414383;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4143cb;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414480;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4144c8;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_badSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_badData = local_20[0];
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414752;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68b_badSink
            (*(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_goodG2BData = local_20[0];
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4147e8;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68b_goodG2BSink
            (*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [16];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  memmove(local_18,&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [32];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  memmove(local_18,&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414aa8;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414abf;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414acb;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414b75;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414b8c;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414b98;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414c42;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414c59;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414c65;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414d10;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64b_badSink
            (local_20,*(undefined *)
                       (appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414d9d;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64b_goodG2BSink
            (local_20,*(undefined *)
                       (apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414e43;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_badSink((char *)local_28);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  char *pcStack48;
  char ***local_28;
  char ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&pcStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414ed9;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_goodG2BSink((char *)local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414f99;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414fb0;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414fbc;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415047;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41507c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415093;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41509f;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415153;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41516a;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415176;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_18,(char *)&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_18,(char *)&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_30 = 0;
    local_1c += 1;
    local_28 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41546b;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415482;
  strncpy(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41548e;
  printLine(local_28,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_38 = 0;
    local_1c += 1;
    local_28 = local_38;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41554b;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415562;
  strncpy(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41556e;
  printLine(local_28,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415629;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415671;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41571c;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415764;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [16];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  memcpy(local_18,&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [32];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  memcpy(local_18,&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54e_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54e_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_bad(void)

{
  undefined local_48 [16];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66b_badSink((long)local_38);
  return;
}



void goodG2B(void)

{
  undefined local_58 [32];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66b_goodG2BSink((long)local_38);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415a2c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415a43;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415a4f;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415ada;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415b0f;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415b26;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415b32;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415be6;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415bfd;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415c09;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415cce;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415ce5;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415cf1;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415d9c;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415db3;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415dbf;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e6a;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e81;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e8d;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53d_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53d_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415fe2;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41606f;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63b_badSink(&local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63b_goodG2BSink(&local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63b_badSink(char **param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(local_10,(char *)&local_28);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63b_goodG2BSink(char **param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(local_10,(char *)&local_28);
  printLine(local_10);
  return;
}



void badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_bad(void)

{
  char local_28 [16];
  char *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_28;
  local_28[0] = 0;
  badSink(local_18);
  return;
}



void goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x00416477)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4165f1;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_badSink
            (local_28,*(undefined *)
                       (&ppuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416686;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_goodG2BSink
            (local_28,*(undefined *)
                       (&puStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_bad(void)

{
  undefined local_48 [16];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66b_badSink((long)local_38);
  return;
}



void goodG2B(void)

{
  undefined local_58 [32];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66b_goodG2BSink((long)local_38);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4167e7;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63b_badSink
            (local_20,*(undefined *)
                       (appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416874;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63b_goodG2BSink
            (local_20,*(undefined *)
                       (apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54e_badSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54e_goodG2BSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_bad(void)

{
  undefined local_48 [16];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66b_badSink((long)local_38);
  return;
}



void goodG2B(void)

{
  undefined local_58 [32];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66b_goodG2BSink((long)local_38);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416a28;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416a3f;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416a4b;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x00416acc)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416b0b;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416b22;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416b2e;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416be2;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416bf9;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416c05;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416d05;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416de7;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53d_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53d_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416f7c;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416f93;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416f9f;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41704a;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417061;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41706d;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41730d;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417324;
  strncpy(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417330;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4173ea;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417401;
  strncpy(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41740d;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x004174a1)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41762e;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417645;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417651;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4176fb;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417712;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41771e;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4177c8;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4177df;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4177eb;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66b_badSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66b_goodG2BSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41797c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417993;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41799f;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417a2b;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417a60;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417a77;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417a83;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b38;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b4f;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b5b;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
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



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_bad(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  uVar1 = staticReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = staticReturnsFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = staticReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  ulong local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_38 = 0;
    local_1c += 1;
    local_28 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417fe6;
  local_48 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_30 = 0;
  while (local_30 < local_48 + 1) {
    *(undefined *)((long)local_28 + local_30) = *(undefined *)((long)auStack96[1] + local_30);
    local_30 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41802e;
  printLine(local_28,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  ulong local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_40 = 0;
    local_1c += 1;
    local_28 = local_40;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4180eb;
  local_48 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_30 = 0;
  while (local_30 < local_48 + 1) {
    *(undefined *)((long)local_28 + local_30) = *(undefined *)((long)auStack96[1] + local_30);
    local_30 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418133;
  printLine(local_28,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_bad(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4181c4;
  uVar3 = globalReturnsTrueOrFalse
                    (*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41820c;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418223;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41822f;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4182b0;
  uVar3 = globalReturnsTrueOrFalse
                    (*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 == 0) {
    *(undefined *)local_30 = 0;
  }
  else {
    *(undefined *)local_30 = 0;
  }
  local_20 = local_30;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4182f8;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41830f;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41831b;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_good(void)

{
  goodG2B();
  return;
}



void badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41843f;
  local_20[1] = local_28;
  badSink((char *)local_28);
  return;
}



void goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  char *pcStack48;
  char ***local_28;
  char ***local_20 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&pcStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41854f;
  local_20[0] = local_28;
  goodG2BSink((char *)local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x0041874e)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53d_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53d_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41895b;
  uVar3 = globalReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418992;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4189a9;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4189b5;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418a36;
  uVar3 = globalReturnsFalse(*(undefined *)
                              (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe))
  ;
  if ((int)uVar3 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418a44;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418a79;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418a90;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418a9c;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418b1d;
  uVar3 = globalReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418b54;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418b6b;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418b77;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418c3b;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418c52;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418c5e;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418d08;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418d1f;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418d2b;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418dd5;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418dec;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418df8;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418efa;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418f11;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418f1d;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x00418f9e)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418fdd;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418ff4;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419000;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4190b4;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4190cb;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4190d7;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_badSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419517;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41952e;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41953a;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4195e4;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4195fb;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419607;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x00419699)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_bad(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_48 [24];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  strncpy(local_28,(char *)&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_58 [40];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  strncpy(local_28,(char *)&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419ac9;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419b11;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  else {
    auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419b9d;
    printLine("Benign, fixed string",
              *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419bd2;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419c1a;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419ccf;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419d17;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54d_goodG2BSink(param_1);
  return;
}



void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_badData;
  badSink();
  return;
}



void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_goodG2BData;
  goodG2BSink();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66b_badSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66b_goodG2BSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x0041a087)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a2bd;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a2d4;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a2e0;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a38a;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a3a1;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a3ad;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_good(void)

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



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a600;
  uVar3 = staticReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a637;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a64e;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a65a;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a6db;
  uVar3 = staticReturnsFalse(*(undefined *)
                              (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe))
  ;
  if ((int)uVar3 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a6e9;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a71e;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a735;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a741;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a7c2;
  uVar3 = staticReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a7f9;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a810;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a81c;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54e_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54e_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_bad(void)

{
  undefined local_48 [16];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66b_badSink((long)local_38);
  return;
}



void goodG2B(void)

{
  undefined local_58 [32];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66b_goodG2BSink((long)local_38);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41aa29;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41aa40;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41aa4c;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41aaf7;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ab0e;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ab1a;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41abc5;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41abdc;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41abe8;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_bad(void)

{
  char local_28 [16];
  char *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_badSink;
  local_18 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_badSink(local_18);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_bad(void)

{
  char local_28 [16];
  char *local_18;
  char *local_10;
  
  local_18 = local_28;
  local_28[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67b_badSink(local_18);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  char *local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67b_goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_badSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  strcpy(local_20,(char *)&local_58);
  printLine(local_20);
  return;
}



void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  strcpy(local_20,(char *)&local_58);
  printLine(local_20);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52c_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52c_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_bad(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_48 [16];
  char *local_38;
  size_t local_28;
  char *local_20;
  char *local_18;
  ulong local_10;
  
  local_38 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_38;
  local_18 = local_38;
  local_28 = strlen((char *)&local_68);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    local_20[local_10] = *(char *)((long)&local_68 + local_10);
    local_10 += 1;
  }
  printLine(local_20);
  return;
}



void goodG2B(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_58 [32];
  char *local_38;
  size_t local_28;
  char *local_20;
  char *local_18;
  ulong local_10;
  
  local_38 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_38;
  local_18 = local_38;
  local_28 = strlen((char *)&local_68);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    local_20[local_10] = *(char *)((long)&local_68 + local_10);
    local_10 += 1;
  }
  printLine(local_20);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b581;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b598;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b5a4;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b62f;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b664;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b67b;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b687;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b73b;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b752;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b75e;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b892;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b974;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_bad(void)

{
  char local_28 [16];
  char *local_18;
  char *local_10;
  
  local_18 = local_28;
  local_28[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_badSink(local_18);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  char *local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ba7b;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bb08;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_58;
  size_t local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_58 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_58 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bbce;
  local_40 = local_58;
  local_38 = local_58;
  local_28 = local_58;
  local_48 = strlen(auStack112[1],
                    *(undefined *)
                     (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_48 + 1) {
    *(undefined *)((long)local_40 + local_20) = *(undefined *)((long)auStack112[1] + local_20);
    local_20 += 1;
  }
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bc16;
  printLine(local_40,*(undefined *)
                      (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_58;
  size_t local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_58 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_58 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bcd0;
  local_40 = local_58;
  local_38 = local_58;
  local_30 = local_58;
  local_48 = strlen(auStack112[1],
                    *(undefined *)
                     (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_48 + 1) {
    *(undefined *)((long)local_40 + local_20) = *(undefined *)((long)auStack112[1] + local_20);
    local_20 += 1;
  }
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bd18;
  printLine(local_40,*(undefined *)
                      (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bddd;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bdf4;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41be00;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41be8c;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bec1;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bed8;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bee4;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bf99;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bfb0;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bfbc;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52c_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52c_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c15b;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c172;
  strncpy(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c17e;
  printLine(local_48,*(undefined *)
                      (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c259;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c270;
  strncpy(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c27c;
  printLine(local_48,*(undefined *)
                      (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c346;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c35d;
  memcpy(local_38,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c369;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c423;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c43a;
  memcpy(local_38,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c446;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68b_badSink();
  return;
}



void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68b_goodG2BSink();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66b_badSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66b_goodG2BSink(long param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(param_1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54d_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54e_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54d_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54e_goodG2BSink(param_1);
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



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c64f;
  uVar3 = staticReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c686;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c69d;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c6a9;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c72a;
  uVar3 = staticReturnsFalse(*(undefined *)
                              (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe))
  ;
  if ((int)uVar3 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c738;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c76d;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c784;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c790;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c811;
  uVar3 = staticReturnsTrue(*(undefined *)
                             (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c848;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c85f;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c86b;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54e_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54e_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_bad(void)

{
  undefined local_48 [16];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66b_badSink((long)local_38);
  return;
}



void goodG2B(void)

{
  undefined local_58 [32];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66b_goodG2BSink((long)local_38);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [16];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  strcpy(local_28,(char *)&local_58);
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [32];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  strcpy(local_28,(char *)&local_58);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cb5e;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cba6;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cc51;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cc99;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cd44;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cd8c;
  printLine(local_38,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cee7;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cefe;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cf0a;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x0041cf8a)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cfc9;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cfe0;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cfec;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d09f;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d0b6;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d0c2;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d196;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d1ad;
  strncpy(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d1b9;
  printLine(local_40,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d273;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d28a;
  strncpy(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d296;
  printLine(local_40,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d4a4;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_badSink((char *)local_28);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  char *pcStack48;
  char ***local_28;
  char ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(char *)local_28 = 0;
  (&pcStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d53a;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_goodG2BSink((char *)local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54d_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54e_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54d_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54e_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_58 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x0041d914)

void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dabf;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41db07;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFalse == 0) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  else {
    auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41db92;
    printLine("Benign, fixed string",
              *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dbc7;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dc0f;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dcc3;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dd0b;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41df02;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e009;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_bad(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_48 [24];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  memcpy(local_28,&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_58 [40];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  memcpy(local_28,&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66b_badSink(long param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = *(char **)(param_1 + 0x10);
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66b_goodG2BSink(long param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_18 = *(char **)(param_1 + 0x10);
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e651;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67b_badSink
            (local_28,*(undefined *)
                       (&ppuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e6e6;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67b_goodG2BSink
            (local_28,*(undefined *)
                       (&puStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52c_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52c_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_badData = local_20[0];
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e9b2;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68b_badSink
            (*(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_goodG2BData = local_20[0];
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ea48;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68b_goodG2BSink
            (*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41eafe;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41eb15;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41eb21;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ebcb;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ebe2;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ebee;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ec98;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ecaf;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ecbb;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54d_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54e_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54d_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54e_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_bad(void)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [16];
  char local_28 [24];
  char *local_10;
  
  uVar1 = globalReturnsTrueOrFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  globalReturnsTrueOrFalse();
  local_38[0] = 0;
  local_10 = local_38;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_bad(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  uVar1 = globalReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = globalReturnsFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = globalReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54e_badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54e_goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_38 = 0;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f3c8;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66b_badSink
            (local_48,*(undefined *)
                       (&uStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_10 = auStack64 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_38 = 0;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f45d;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66b_goodG2BSink
            (local_48,*(undefined *)
                       (&uStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f51e;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f535;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f541;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x0041f5c3)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f602;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f619;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f625;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f6da;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f6f1;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f6fd;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_bad(void)

{
  ulong uVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [16];
  char local_28 [24];
  char *local_10;
  
  uVar1 = globalReturnsTrueOrFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  globalReturnsTrueOrFalse();
  local_38[0] = 0;
  local_10 = local_38;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f896;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f923;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x0041f9b1)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x0041fb6d)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  memcpy(local_20,&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  memcpy(local_20,&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_bad(void)

{
  char local_28 [16];
  char *local_18;
  char *local_10;
  
  local_18 = local_28;
  local_28[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67b_badSink(local_18);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  char *local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67b_goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_good(void)

{
  goodG2B();
  return;
}



void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_badData;
  badSink();
  return;
}



void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_goodG2BData;
  goodG2BSink();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_bad(void)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  uVar1 = globalReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = globalReturnsFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = globalReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void badSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_bad(void)

{
  char local_28 [16];
  char *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_28;
  local_28[0] = 0;
  badSink(local_18);
  return;
}



void goodG2BSink(char *param_1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    param_1[local_10] = *(char *)((long)&local_28 + local_10);
    local_10 += 1;
  }
  printLine(param_1);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x00420585)

void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42075c;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420773;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42077f;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42082a;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420841;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42084d;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_bad(void)

{
  undefined8 local_78;
  undefined2 local_70;
  undefined local_6e;
  char local_58 [24];
  char *local_40;
  size_t local_38;
  char *local_30;
  char *local_28;
  char **local_20;
  char **local_18;
  ulong local_10;
  
  local_18 = &local_40;
  local_20 = &local_40;
  local_30 = local_58;
  local_58[0] = 0;
  local_78 = 0x4141414141414141;
  local_70 = 0x4141;
  local_6e = 0;
  local_28 = local_30;
  local_40 = local_30;
  local_38 = strlen((char *)&local_78);
  local_10 = 0;
  while (local_10 < local_38 + 1) {
    local_30[local_10] = *(char *)((long)&local_78 + local_10);
    local_10 += 1;
  }
  printLine(local_30);
  return;
}



void goodG2B(void)

{
  undefined8 local_78;
  undefined2 local_70;
  undefined local_6e;
  char local_68 [40];
  char *local_40;
  size_t local_38;
  char *local_30;
  char *local_28;
  char **local_20;
  char **local_18;
  ulong local_10;
  
  local_18 = &local_40;
  local_20 = &local_40;
  local_30 = local_68;
  local_68[0] = 0;
  local_78 = 0x4141414141414141;
  local_70 = 0x4141;
  local_6e = 0;
  local_28 = local_30;
  local_40 = local_30;
  local_38 = strlen((char *)&local_78);
  local_10 = 0;
  while (local_10 < local_38 + 1) {
    local_30[local_10] = *(char *)((long)&local_78 + local_10);
    local_10 += 1;
  }
  printLine(local_30);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_good(void)

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



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_bad(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  uVar1 = staticReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = staticReturnsFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = staticReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_bad(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_48 [24];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  strcpy(local_28,(char *)&local_68);
  printLine(local_28);
  return;
}



void goodG2B(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_58 [40];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  strcpy(local_28,(char *)&local_68);
  printLine(local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54c_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54d_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54c_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54d_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_bad(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4210be;
  uVar3 = globalReturnsTrueOrFalse
                    (*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421106;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42111d;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421129;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4211aa;
  uVar3 = globalReturnsTrueOrFalse
                    (*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  if ((int)uVar3 == 0) {
    *(undefined *)local_30 = 0;
  }
  else {
    *(undefined *)local_30 = 0;
  }
  local_20 = local_30;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4211f2;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421209;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421215;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53d_badSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53d_goodG2BSink(char *param_1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(param_1,(char *)&local_18);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64b_badSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64b_goodG2BSink(char **param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *param_1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67b_badSink(char *param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = param_1;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67b_goodG2BSink(char *param_1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  char *local_18;
  ulong local_10;
  
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = param_1;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(char *)((long)&local_38 + local_10);
    local_10 += 1;
  }
  printLine(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53d_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53d_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(param_1,&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42173c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421753;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42175f;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4217eb;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421820;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421837;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421843;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4218f8;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42190f;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42191b;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4219c6;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421a53;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421b3a;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421b51;
  memcpy(local_48,auStack112 + 1,sVar3 + 1,
         *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421b5d;
  printLine(local_48,*(undefined *)
                      (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421c38;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421c4f;
  memcpy(local_48,auStack112 + 1,sVar3 + 1,
         *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421c5b;
  printLine(local_48,*(undefined *)
                      (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421d16;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421d2d;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421d39;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421de4;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421dfb;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421e07;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = param_1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x00421faa)

void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  size_t local_20;
  ulong local_18;
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(char *)((long)&local_58 + local_18);
    local_18 += 1;
  }
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_bad(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_48 [24];
  size_t local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  ulong local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_18 = local_28;
  local_30 = strlen((char *)&local_68);
  local_10 = 0;
  while (local_10 < local_30 + 1) {
    local_28[local_10] = *(char *)((long)&local_68 + local_10);
    local_10 += 1;
  }
  printLine(local_28);
  return;
}



void goodG2B(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_58 [40];
  size_t local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  ulong local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_18 = local_28;
  local_30 = strlen((char *)&local_68);
  local_10 = 0;
  while (local_10 < local_30 + 1) {
    local_28[local_10] = *(char *)((long)&local_68 + local_10);
    local_10 += 1;
  }
  printLine(local_28);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_good(void)

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



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_bad(void)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  uVar1 = staticReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = staticReturnsFalse();
  if ((int)uVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  uVar1 = staticReturnsTrue();
  if ((int)uVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



// WARNING: Removing unreachable block (ram,0x0042241d)

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64b_badSink(&local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64b_goodG2BSink(&local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42260e;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422625;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422631;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4226bc;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4226f1;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422708;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422714;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4227c8;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4227df;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4227eb;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_bad(void)

{
  char local_28 [16];
  char *local_18;
  char *local_10;
  
  local_18 = local_28;
  local_28[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67b_badSink(local_18);
  return;
}



void goodG2B(void)

{
  char local_38 [32];
  char *local_18;
  char *local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67b_goodG2BSink(local_18);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422900;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51b_badSink
            (local_20[0],
             *(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42298d;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51b_goodG2BSink
            (local_20[0],
             *(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422a4c;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422a63;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422a6f;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x00422aef)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422b2e;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422b45;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422b51;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422c04;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422c1b;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422c27;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422cf5;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422d0c;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422d18;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422da3;
    printLine("Benign, fixed string",
              *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422dd8;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422def;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422dfb;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422eaf;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422ec6;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422ed2;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422fa0;
  local_20 = local_30;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422fe8;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x00423069)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4230a8;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4230f0;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4231a4;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4231ec;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_bad(void)

{
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54b_badSink(local_10);
  return;
}



void goodG2B(void)

{
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54b_goodG2BSink(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4232f9;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67b_badSink
            (local_28,*(undefined *)
                       (&ppuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42338e;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67b_goodG2BSink
            (local_28,*(undefined *)
                       (&puStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54b_badSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54c_badSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54b_goodG2BSink(char *param_1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54c_goodG2BSink(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423478;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42348f;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42349b;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423545;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42355c;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423568;
  printLine(local_30,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_good(void)

{
  goodG2B();
  return;
}



void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_badData = local_20[0];
  appuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42366e;
  local_20[2] = local_20[0];
  badSink(*(undefined *)(appuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_goodG2BData = local_20[0];
  apuStack48[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423760;
  local_20[1] = local_20[0];
  goodG2BSink(*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42395a;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423971;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42397d;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x004239fe)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423a3d;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423a54;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423a60;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423b14;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423b2b;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423b37;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_good(void)

{
  goodG2B();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_badSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_goodG2BSink(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(param_1,(char *)&local_18,sVar1 + 1);
  printLine(param_1);
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423d81;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423d98;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423da4;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



// WARNING: Removing unreachable block (ram,0x00423e25)

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423e64;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423e7b;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423e87;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423f3b;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423f52;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423f5e;
  printLine(local_20,*(undefined *)
                      (auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42402d;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424075;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  else {
    auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424101;
    printLine("Benign, fixed string",
              *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424136;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42417e;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424233;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 += 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42427b;
  printLine(local_20,*(undefined *)
                      (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack128 [2];
  undefined2 local_70;
  undefined local_6e;
  undefined2 *local_60;
  size_t local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 **local_30;
  undefined2 **local_28;
  ulong local_20;
  
  local_28 = &local_60;
  local_30 = &local_60;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_50 = &local_70 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_70 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_50 = 0;
  auStack128[1] = 0x4141414141414141;
  local_70 = 0x4141;
  local_6e = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424370;
  local_48 = local_50;
  local_38 = local_50;
  local_60 = local_50;
  local_58 = strlen(auStack128[1],
                    *(undefined *)
                     (auStack128 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_58 + 1) {
    *(undefined *)((long)local_50 + local_20) = *(undefined *)((long)auStack128[1] + local_20);
    local_20 += 1;
  }
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4243b8;
  printLine(local_50,*(undefined *)
                      (auStack128 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack128 [2];
  undefined2 local_70;
  undefined local_6e;
  undefined2 *local_60;
  size_t local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 **local_30;
  undefined2 **local_28;
  ulong local_20;
  
  local_28 = &local_60;
  local_30 = &local_60;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_70 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_50 = &local_70 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_50 = 0;
  auStack128[1] = 0x4141414141414141;
  local_70 = 0x4141;
  local_6e = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424493;
  local_48 = local_50;
  local_40 = local_50;
  local_60 = local_50;
  local_58 = strlen(auStack128[1],
                    *(undefined *)
                     (auStack128 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_58 + 1) {
    *(undefined *)((long)local_50 + local_20) = *(undefined *)((long)auStack128[1] + local_20);
    local_20 += 1;
  }
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4244db;
  printLine(local_50,*(undefined *)
                      (auStack128 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  return;
}



void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_good(void)

{
  goodG2B();
  return;
}



void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}



void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}



void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}



void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}



void printFloatLine(float param_1)

{
  printf((char *)(double)param_1,&DAT_00431ac5);
  return;
}



void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}



void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}



void printWcharLine(undefined4 param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  return;
}



void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}



void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}



void printDoubleLine(char *param_1)

{
  printf(param_1,&DAT_00431ae2);
  return;
}



void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}



void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < param_2) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
    local_10 += 1;
  }
  puts("");
  return;
}



ulong decodeHexChars(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ushort **ppuVar2;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (param_2 <= local_10) {
      return local_10;
    }
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(param_3 + local_10 * 2)] & 0x1000) == 0) break;
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(param_3 + local_10 * 2 + 1)] & 0x1000) == 0) {
      return local_10;
    }
    lVar1 = local_10 * 2 + param_3;
    __isoc99_sscanf(lVar1,&DAT_00431af0,&local_14,lVar1);
    *(undefined *)(param_1 + local_10) = (char)local_14;
    local_10 += 1;
  }
  return local_10;
}



ulong decodeHexWChars(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (param_2 <= local_10) {
      return local_10;
    }
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_10 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_10 * 8 + 4));
    if (iVar1 == 0) {
      return local_10;
    }
    __isoc99_swscanf(local_10 * 8 + param_3,&DAT_00431af8,&local_14);
    *(undefined *)(param_1 + local_10) = (char)local_14;
    local_10 += 1;
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



void internal_start(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 8))
            (*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x10));
                    // WARNING: Subroutine does not return
  pthread_exit((void *)0x0);
}



undefined8 stdThreadCreate(pthread_t param_1,pthread_t param_2,pthread_t **param_3)

{
  int iVar1;
  undefined8 uVar2;
  pthread_t local_18;
  pthread_t *local_10;
  
  *param_3 = (pthread_t *)0x0;
  local_10 = (pthread_t *)malloc(0x18);
  if (local_10 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_10[1] = param_1;
    local_10[2] = param_2;
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,internal_start,local_10);
    if (iVar1 == 0) {
      *local_10 = local_18;
      *param_3 = local_10;
      uVar2 = 1;
    }
    else {
      free(local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}



ulong stdThreadJoin(pthread_t *param_1)

{
  int iVar1;
  void *local_10;
  
  iVar1 = pthread_join(*param_1,&local_10);
  return (ulong)(iVar1 == 0);
}



undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}



undefined8 stdThreadLockCreate(pthread_mutex_t **param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = (pthread_mutex_t *)0x0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}



void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}



void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}



void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _init(param_1);
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 += 1;
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


