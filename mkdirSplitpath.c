#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

__int64 (**init_proc())(void);
void sub_1020();
void sub_1030();
void sub_1040();
void sub_1050();
void sub_1060();
void sub_1070();
void sub_1080();
void sub_1090();
void sub_10A0();
void sub_10B0();
void sub_10C0();
void sub_10D0();
void sub_10E0();
void sub_10F0();
void sub_1100();
void sub_1110();
// int _cxa_finalize(void *);
// void free(void *ptr);
// int putchar(int c);
// char *strncpy(char *dest, const char *src, size_t n);
// char *strcpy(char *dest, const char *src);
// int puts(const char *s);
// size_t strlen(const char *s);
// int printf(const char *format, ...);
// char *fgets(char *s, int n, FILE *stream);
// int strcmp(const char *s1, const char *s2);
// void *malloc(size_t size);
// __int64 __isoc99_sscanf(_QWORD, const char *, ...); weak
// char *strtok(char *s, const char *delim);
// char *strcat(char *dest, const char *src);
// size_t fwrite(const void *ptr, size_t size, size_t n, FILE *s);
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void));
void *deregister_tm_clones();
__int64 register_tm_clones();
void *_do_global_dtors_aux();
__int64 frame_dummy();
__int64 __fastcall findCMD(const char *a1);
char *initialize();
int __fastcall main(int argc, const char **argv, const char **envp);
int menu();
unsigned __int64 printTree();
unsigned __int64 __fastcall printHelper(__int64 a1, int a2);
__int64 quit();
unsigned __int64 __fastcall rmdir(const char *a1);
unsigned __int64 __fastcall ls(char *a1);
unsigned __int64 __fastcall cd(const char *a1);
unsigned __int64 pwd();
unsigned __int64 __fastcall touch(const char *a1);
unsigned __int64 __fastcall rm(const char *a1);
unsigned __int64 __fastcall mkdir(const char *a1);
char *__fastcall splitPath(const char *a1, char *a2, char *a3);
void _libc_csu_fini(void); // idb
void term_proc();
// int _libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// int __cxa_finalize(void *);
// __int64 _gmon_start__(void); weak

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN _libc_csu_init;
__int64 (__fastcall *_frame_dummy_init_array_entry[2])() = { &frame_dummy, &_do_global_dtors_aux }; // weak
__int64 (__fastcall *_do_global_dtors_aux_fini_array_entry)() = &_do_global_dtors_aux; // weak
void *_dso_handle = &_dso_handle; // idb
char *cmd[10] = { "mkdir", "rmdir", "ls", "cd", "pwd", "touch", "rm", "menu", "tree", "quit" }; // weak
_UNKNOWN _bss_start; // weak
FILE *stdin; // idb
FILE *stderr; // idb
char completed_8061; // weak
char *cwd; // idb
char *root; // idb


//----- (0000000000001000) ----------------------------------------------------
__int64 (**init_proc())(void)
{
  __int64 (**result)(void); // rax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (__int64 (**)(void))_gmon_start__();
  return result;
}
// 5158: using guessed type __int64 _gmon_start__(void);

//----- (0000000000001020) ----------------------------------------------------
void sub_1020()
{
  JUMPOUT(0);
}
// 1026: control flows out of bounds to 0

//----- (0000000000001030) ----------------------------------------------------
void sub_1030()
{
  sub_1020();
}

//----- (0000000000001040) ----------------------------------------------------
void sub_1040()
{
  sub_1020();
}

//----- (0000000000001050) ----------------------------------------------------
void sub_1050()
{
  sub_1020();
}

//----- (0000000000001060) ----------------------------------------------------
void sub_1060()
{
  sub_1020();
}

//----- (0000000000001070) ----------------------------------------------------
void sub_1070()
{
  sub_1020();
}

//----- (0000000000001080) ----------------------------------------------------
void sub_1080()
{
  sub_1020();
}

//----- (0000000000001090) ----------------------------------------------------
void sub_1090()
{
  sub_1020();
}

//----- (00000000000010A0) ----------------------------------------------------
void sub_10A0()
{
  sub_1020();
}

//----- (00000000000010B0) ----------------------------------------------------
void sub_10B0()
{
  sub_1020();
}

//----- (00000000000010C0) ----------------------------------------------------
void sub_10C0()
{
  sub_1020();
}

//----- (00000000000010D0) ----------------------------------------------------
void sub_10D0()
{
  sub_1020();
}

//----- (00000000000010E0) ----------------------------------------------------
void sub_10E0()
{
  sub_1020();
}

//----- (00000000000010F0) ----------------------------------------------------
void sub_10F0()
{
  sub_1020();
}

//----- (0000000000001100) ----------------------------------------------------
void sub_1100()
{
  sub_1020();
}

//----- (0000000000001110) ----------------------------------------------------
void sub_1110()
{
  sub_1020();
}

//----- (0000000000001220) ----------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main(
    (int (*)(int, char **, char **))main,
    v4,
    &retaddr,
    (void (*)(void))_libc_csu_init,
    _libc_csu_fini,
    a3,
    &v5);
  __halt();
}
// 122A: positive sp value 8 has been found
// 1231: variable 'v3' is possibly undefined

//----- (0000000000001250) ----------------------------------------------------
void *deregister_tm_clones()
{
  return &_bss_start;
}

//----- (0000000000001280) ----------------------------------------------------
__int64 register_tm_clones()
{
  return 0;
}

//----- (00000000000012C0) ----------------------------------------------------
void *_do_global_dtors_aux()
{
  void *result; // rax

  if ( !completed_8061 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    completed_8061 = 1;
  }
  return result;
}
// 50A8: using guessed type char completed_8061;

//----- (0000000000001300) ----------------------------------------------------
__int64 frame_dummy()
{
  return register_tm_clones();
}

//----- (0000000000001309) ----------------------------------------------------
__int64 __fastcall findCMD(const char *a1)
{
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; cmd[i]; ++i )
  {
    if ( !strcmp(a1, cmd[i]) )
      return i;
  }
  return 0xFFFFFFFFLL;
}
// 5020: using guessed type char *cmd[10];

//----- (000000000000137A) ----------------------------------------------------
char *initialize()
{
  char *result; // rax

  root = (char *)malloc(0x60u);
  *((_QWORD *)root + 11) = 0;
  *((_QWORD *)root + 10) = 0;
  *(_WORD *)root = 47;
  root[64] = 68;
  *((_QWORD *)root + 9) = 0;
  result = root;
  cwd = root;
  return result;
}

//----- (00000000000013E8) ----------------------------------------------------
int __fastcall main(int argc, const char **argv, const char **envp)
{
  char v4[16]; // [rsp+10h] [rbp-E0h] BYREF
  _WORD v5[32]; // [rsp+20h] [rbp-D0h] BYREF
  char s[136]; // [rsp+60h] [rbp-90h] BYREF
  unsigned __int64 v7; // [rsp+E8h] [rbp-8h]

  v7 = __readfsqword(0x28u);
  initialize();
  while ( 1 )
  {
    v5[0] = 47;
    fwrite("input a command line : ", 1u, 0x17u, stderr);
    fgets(s, 128, stdin);
    s[strlen(s) - 1] = 0;
    __isoc99_sscanf(s, "%s %s", v4, v5);
    switch ( (unsigned int)findCMD(v4) )
    {
      case 0u:
        mkdir((const char *)v5);
        break;
      case 1u:
        rmdir((const char *)v5);
        break;
      case 2u:
        ls((char *)v5);
        break;
      case 3u:
        cd((const char *)v5);
        break;
      case 4u:
        pwd();
        putchar(10);
        break;
      case 5u:
        touch((const char *)v5);
        break;
      case 6u:
        rm((const char *)v5);
        break;
      case 7u:
        menu();
        break;
      case 8u:
        printTree();
        break;
      case 9u:
        return quit();
      default:
        printf("invalid command %s\n", v4);
        break;
    }
  }
}
// 11E0: using guessed type __int64 __isoc99_sscanf(_QWORD, const char *, ...);

//----- (00000000000015C6) ----------------------------------------------------
int menu()
{
  return puts(
           "Commands:\n"
           "mkdir [pathname], touch [pathname], rmdir [pathname], rm [pathname], ls [pathname], cd [pathname], pwd, menu, print, quit");
}

//----- (00000000000015DD) ----------------------------------------------------
unsigned __int64 printTree()
{
  __int64 v1; // [rsp+8h] [rbp-8h]

  printf("%s", root);
  v1 = *((_QWORD *)root + 9);
  putchar(10);
  return printHelper(v1, 0);
}

//----- (0000000000001631) ----------------------------------------------------
unsigned __int64 __fastcall printHelper(__int64 a1, int a2)
{
  int i; // [rsp+18h] [rbp-228h]
  int j; // [rsp+1Ch] [rbp-224h]
  __int64 v6; // [rsp+20h] [rbp-220h]
  __int64 v7; // [rsp+28h] [rbp-218h]
  char src[8]; // [rsp+30h] [rbp-210h] BYREF
  __int64 v9; // [rsp+38h] [rbp-208h]
  __int64 v10; // [rsp+40h] [rbp-200h]
  __int64 v11; // [rsp+48h] [rbp-1F8h]
  __int64 v12; // [rsp+50h] [rbp-1F0h]
  __int64 v13; // [rsp+58h] [rbp-1E8h]
  __int64 v14; // [rsp+60h] [rbp-1E0h]
  __int64 v15; // [rsp+68h] [rbp-1D8h]
  __int64 v16; // [rsp+70h] [rbp-1D0h]
  __int64 v17; // [rsp+78h] [rbp-1C8h]
  __int64 v18; // [rsp+80h] [rbp-1C0h]
  __int64 v19; // [rsp+88h] [rbp-1B8h]
  __int64 v20; // [rsp+90h] [rbp-1B0h]
  __int64 v21; // [rsp+98h] [rbp-1A8h]
  __int64 v22; // [rsp+A0h] [rbp-1A0h]
  __int64 v23; // [rsp+A8h] [rbp-198h]
  char dest[8]; // [rsp+B0h] [rbp-190h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-188h]
  __int64 v26; // [rsp+C0h] [rbp-180h]
  __int64 v27; // [rsp+C8h] [rbp-178h]
  __int64 v28; // [rsp+D0h] [rbp-170h]
  __int64 v29; // [rsp+D8h] [rbp-168h]
  __int64 v30; // [rsp+E0h] [rbp-160h]
  __int64 v31; // [rsp+E8h] [rbp-158h]
  __int64 v32; // [rsp+F0h] [rbp-150h]
  __int64 v33; // [rsp+F8h] [rbp-148h]
  __int64 v34; // [rsp+100h] [rbp-140h]
  __int64 v35; // [rsp+108h] [rbp-138h]
  __int64 v36; // [rsp+110h] [rbp-130h]
  __int64 v37; // [rsp+118h] [rbp-128h]
  __int64 v38; // [rsp+120h] [rbp-120h]
  __int64 v39; // [rsp+128h] [rbp-118h]
  char v40[8]; // [rsp+130h] [rbp-110h] BYREF
  __int64 v41; // [rsp+138h] [rbp-108h]
  __int64 v42; // [rsp+140h] [rbp-100h]
  __int64 v43; // [rsp+148h] [rbp-F8h]
  __int64 v44; // [rsp+150h] [rbp-F0h]
  __int64 v45; // [rsp+158h] [rbp-E8h]
  __int64 v46; // [rsp+160h] [rbp-E0h]
  __int64 v47; // [rsp+168h] [rbp-D8h]
  __int64 v48; // [rsp+170h] [rbp-D0h]
  __int64 v49; // [rsp+178h] [rbp-C8h]
  __int64 v50; // [rsp+180h] [rbp-C0h]
  __int64 v51; // [rsp+188h] [rbp-B8h]
  __int64 v52; // [rsp+190h] [rbp-B0h]
  __int64 v53; // [rsp+198h] [rbp-A8h]
  __int64 v54; // [rsp+1A0h] [rbp-A0h]
  __int64 v55; // [rsp+1A8h] [rbp-98h]
  char v56[8]; // [rsp+1B0h] [rbp-90h] BYREF
  __int64 v57; // [rsp+1B8h] [rbp-88h]
  __int64 v58; // [rsp+1C0h] [rbp-80h]
  __int64 v59; // [rsp+1C8h] [rbp-78h]
  __int64 v60; // [rsp+1D0h] [rbp-70h]
  __int64 v61; // [rsp+1D8h] [rbp-68h]
  __int64 v62; // [rsp+1E0h] [rbp-60h]
  __int64 v63; // [rsp+1E8h] [rbp-58h]
  __int64 v64; // [rsp+1F0h] [rbp-50h]
  __int64 v65; // [rsp+1F8h] [rbp-48h]
  __int64 v66; // [rsp+200h] [rbp-40h]
  __int64 v67; // [rsp+208h] [rbp-38h]
  __int64 v68; // [rsp+210h] [rbp-30h]
  __int64 v69; // [rsp+218h] [rbp-28h]
  __int64 v70; // [rsp+220h] [rbp-20h]
  __int64 v71; // [rsp+228h] [rbp-18h]
  unsigned __int64 v72; // [rsp+238h] [rbp-8h]

  v72 = __readfsqword(0x28u);
  while ( a1 )
  {
    v6 = a1;
    *(_QWORD *)src = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    *(_QWORD *)dest = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    for ( i = 0; i < a2; ++i )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v6 + 88) + 80LL) )
        *(_DWORD *)dest = 538976380;
      else
        *(_DWORD *)dest = 538976288;
      dest[4] = 0;
      strcat(dest, src);
      strcpy(src, dest);
      v6 = *(_QWORD *)(v6 + 88);
    }
    printf("%s", src);
    if ( *(_QWORD *)(a1 + 80) )
    {
      printf("|---");
    }
    else
    {
      puts("|   ");
      v7 = a1;
      *(_QWORD *)v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      *(_QWORD *)v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      v66 = 0;
      v67 = 0;
      v68 = 0;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      for ( j = 0; j < a2; ++j )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 88) + 80LL) )
          *(_DWORD *)v56 = 538976380;
        else
          *(_DWORD *)v56 = 538976288;
        v56[4] = 0;
        strcat(v56, v40);
        strcpy(v40, v56);
        v7 = *(_QWORD *)(v7 + 88);
      }
      printf("%s", v40);
      printf("`---");
    }
    puts((const char *)a1);
    if ( *(_QWORD *)(a1 + 72) )
      printHelper(*(_QWORD *)(a1 + 72), (unsigned int)(a2 + 1));
    a1 = *(_QWORD *)(a1 + 80);
  }
  return __readfsqword(0x28u) ^ v72;
}

//----- (0000000000001B49) ----------------------------------------------------
__int64 quit()
{
  return 0;
}

//----- (0000000000001B58) ----------------------------------------------------
unsigned __int64 __fastcall rmdir(const char *a1)
{
  char *v2; // [rsp+10h] [rbp-A0h]
  char *v3; // [rsp+10h] [rbp-A0h]
  char *v4; // [rsp+18h] [rbp-98h]
  char v5[64]; // [rsp+20h] [rbp-90h] BYREF
  char s2[72]; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v7; // [rsp+A8h] [rbp-8h]

  v7 = __readfsqword(0x28u);
  if ( !strcmp(a1, "/") )
  {
    puts("RMDIR ERROR: no path provided");
  }
  else
  {
    v2 = splitPath(a1, s2, v5);
    if ( v2 )
    {
      v3 = (char *)*((_QWORD *)v2 + 9);
      if ( v3 )
      {
        v4 = v3;
        while ( strcmp(v3, s2) )
        {
          if ( !*((_QWORD *)v3 + 10) )
            goto LABEL_5;
          v4 = v3;
          v3 = (char *)*((_QWORD *)v3 + 10);
        }
        if ( v3[64] == 68 )
        {
          if ( *((_QWORD *)v3 + 9) )
          {
            printf("RMDIR ERROR: directory %s is not empty\n", a1);
          }
          else
          {
            if ( *((_QWORD *)v3 + 10) )
              *((_QWORD *)v4 + 10) = *((_QWORD *)v3 + 10);
            else
              *((_QWORD *)v4 + 10) = 0;
            if ( v3 == *(char **)(*((_QWORD *)v3 + 11) + 72LL) )
            {
              if ( *((_QWORD *)v3 + 10) )
                *(_QWORD *)(*((_QWORD *)v3 + 11) + 72LL) = *((_QWORD *)v3 + 10);
              else
                *(_QWORD *)(*((_QWORD *)v3 + 11) + 72LL) = 0;
            }
            free(v3);
          }
        }
        else
        {
          printf("RMDIR ERROR: %s is not a directory\n", a1);
        }
      }
      else
      {
LABEL_5:
        printf("RMDIR ERROR: directory %s does not exist\n", s2);
      }
    }
  }
  return __readfsqword(0x28u) ^ v7;
}

//----- (0000000000001DAA) ----------------------------------------------------
unsigned __int64 __fastcall ls(char *a1)
{
  char *v2; // [rsp+18h] [rbp-98h]
  __int64 i; // [rsp+18h] [rbp-98h]
  char v4[64]; // [rsp+20h] [rbp-90h] BYREF
  char v5[72]; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v6; // [rsp+A8h] [rbp-8h]

  v6 = __readfsqword(0x28u);
  if ( !strcmp(a1, "/") )
    strcpy(a1, cwd);
  v2 = splitPath(a1, v5, v4);
  if ( v2 && *((_QWORD *)v2 + 9) )
  {
    for ( i = *((_QWORD *)v2 + 9); i && i != *(_QWORD *)(i + 80); i = *(_QWORD *)(i + 80) )
      printf("File Type: %c, File Name: %s\n", (unsigned int)*(char *)(i + 64), (const char *)i);
  }
  return __readfsqword(0x28u) ^ v6;
}

//----- (0000000000001ECE) ----------------------------------------------------
unsigned __int64 __fastcall cd(const char *a1)
{
  size_t v1; // rbx
  size_t v2; // rax
  size_t v3; // rbx
  size_t v4; // rax
  int v6; // [rsp+1Ch] [rbp-B4h]
  int i; // [rsp+20h] [rbp-B0h]
  int j; // [rsp+24h] [rbp-ACh]
  char *s; // [rsp+28h] [rbp-A8h]
  char *sa; // [rsp+28h] [rbp-A8h]
  char v11[64]; // [rsp+30h] [rbp-A0h] BYREF
  char v12[72]; // [rsp+70h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+B8h] [rbp-18h]

  v13 = __readfsqword(0x28u);
  if ( !strcmp(a1, "/") )
  {
    cwd = root;
  }
  else
  {
    s = splitPath(a1, v12, v11);
    if ( s )
    {
      sa = (char *)*((_QWORD *)s + 9);
      if ( sa )
      {
        v6 = 0;
        for ( i = 0; ; ++i )
        {
          v1 = strlen(sa);
          v2 = v1 >= strlen(v12) ? strlen(v12) : strlen(sa);
          if ( v2 <= i )
            break;
          if ( sa[i] != v12[i] )
            v6 = 1;
        }
        while ( v6 )
        {
          sa = (char *)*((_QWORD *)sa + 10);
          if ( !sa )
            goto LABEL_5;
          v6 = 0;
          for ( j = 0; ; ++j )
          {
            v3 = strlen(sa);
            v4 = v3 >= strlen(v12) ? strlen(v12) : strlen(sa);
            if ( v4 <= j )
              break;
            if ( sa[j] != v12[j] )
              v6 = 1;
          }
        }
        if ( sa[64] == 68 )
          cwd = sa;
        else
          printf("CD ERROR: %s is not a directory\n", a1);
      }
      else
      {
LABEL_5:
        printf("CD ERROR: directory %s does not exist\n", a1);
      }
    }
  }
  return __readfsqword(0x28u) ^ v13;
}

//----- (0000000000002176) ----------------------------------------------------
unsigned __int64 pwd()
{
  char *v1; // [rsp+8h] [rbp-58h]
  char dest[72]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v3; // [rsp+58h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  v1 = cwd;
  strcpy(dest, cwd);
  cwd = (char *)*((_QWORD *)cwd + 11);
  if ( !strcmp(dest, root) )
  {
    cwd = v1;
    putchar(47);
  }
  else
  {
    pwd();
    printf("%s/", dest);
    cwd = v1;
  }
  return __readfsqword(0x28u) ^ v3;
}

//----- (000000000000223E) ----------------------------------------------------
unsigned __int64 __fastcall touch(const char *a1)
{
  char *i; // [rsp+18h] [rbp-A8h]
  char *j; // [rsp+18h] [rbp-A8h]
  char *v4; // [rsp+20h] [rbp-A0h]
  char *dest; // [rsp+28h] [rbp-98h]
  char s2[64]; // [rsp+30h] [rbp-90h] BYREF
  char v7[72]; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v8; // [rsp+B8h] [rbp-8h]

  v8 = __readfsqword(0x28u);
  if ( !strcmp(a1, "/") )
  {
    puts("TOUCH ERROR: no path provided ");
  }
  else
  {
    v4 = splitPath(a1, s2, v7);
    if ( v4 )
    {
      for ( i = (char *)*((_QWORD *)v4 + 9); i; i = (char *)*((_QWORD *)i + 10) )
      {
        if ( !strcmp(i, s2) )
        {
          printf("TOUCH ERROR: file %s already exists\n", a1);
          return __readfsqword(0x28u) ^ v8;
        }
      }
      dest = (char *)malloc(0x60u);
      strcpy(dest, s2);
      dest[64] = 70;
      *((_QWORD *)dest + 9) = 0;
      *((_QWORD *)dest + 10) = 0;
      *((_QWORD *)dest + 11) = v4;
      if ( *((_QWORD *)v4 + 9) )
      {
        for ( j = (char *)*((_QWORD *)v4 + 9); *((_QWORD *)j + 10); j = (char *)*((_QWORD *)j + 10) )
          ;
        *((_QWORD *)j + 10) = dest;
      }
      else
      {
        *((_QWORD *)v4 + 9) = dest;
      }
    }
  }
  return __readfsqword(0x28u) ^ v8;
}

//----- (0000000000002417) ----------------------------------------------------
unsigned __int64 __fastcall rm(const char *a1)
{
  char *v2; // [rsp+10h] [rbp-A0h]
  char *v3; // [rsp+10h] [rbp-A0h]
  char *v4; // [rsp+18h] [rbp-98h]
  char v5[64]; // [rsp+20h] [rbp-90h] BYREF
  char s2[72]; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v7; // [rsp+A8h] [rbp-8h]

  v7 = __readfsqword(0x28u);
  if ( !strcmp(a1, "/") )
  {
    puts("RM ERROR: no path provided");
  }
  else
  {
    v2 = splitPath(a1, s2, v5);
    if ( v2 )
    {
      v3 = (char *)*((_QWORD *)v2 + 9);
      v4 = v3;
      while ( strcmp(v3, s2) )
      {
        if ( !*((_QWORD *)v3 + 10) )
        {
          printf("RM ERROR: file %s does not exist\n", a1);
          return __readfsqword(0x28u) ^ v7;
        }
        v4 = v3;
        v3 = (char *)*((_QWORD *)v3 + 10);
      }
      if ( v3[64] == 70 )
      {
        if ( *((_QWORD *)v3 + 10) )
          *((_QWORD *)v4 + 10) = *((_QWORD *)v3 + 10);
        else
          *((_QWORD *)v4 + 10) = 0;
        if ( v3 == *(char **)(*((_QWORD *)v3 + 11) + 72LL) )
        {
          if ( *((_QWORD *)v3 + 10) )
            *(_QWORD *)(*((_QWORD *)v3 + 11) + 72LL) = *((_QWORD *)v3 + 10);
          else
            *(_QWORD *)(*((_QWORD *)v3 + 11) + 72LL) = 0;
        }
        free(v3);
      }
      else
      {
        printf("RM ERROR: %s is not a file\n", a1);
      }
    }
  }
  return __readfsqword(0x28u) ^ v7;
}

//----- (0000000000002615) ----------------------------------------------------
unsigned __int64 __fastcall mkdir(const char *a1)
{
  char *i; // [rsp+18h] [rbp-A8h]
  char *j; // [rsp+18h] [rbp-A8h]
  char *v4; // [rsp+20h] [rbp-A0h]
  char *dest; // [rsp+28h] [rbp-98h]
  char s2[64]; // [rsp+30h] [rbp-90h] BYREF
  char v7[72]; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v8; // [rsp+B8h] [rbp-8h]

  v8 = __readfsqword(0x28u);
  if ( !strcmp(a1, "/") )
  {
    puts("MKDIR ERROR: no path provided");
  }
  else
  {
    v4 = splitPath(a1, s2, v7);
    if ( v4 )
    {
      for ( i = (char *)*((_QWORD *)v4 + 9); i; i = (char *)*((_QWORD *)i + 10) )
      {
        if ( !strcmp(i, s2) )
        {
          printf("MKDIR ERROR: directory %s already exists\n", a1);
          return __readfsqword(0x28u) ^ v8;
        }
      }
      dest = (char *)malloc(0x60u);
      strcpy(dest, s2);
      dest[64] = 68;
      *((_QWORD *)dest + 9) = 0;
      *((_QWORD *)dest + 10) = 0;
      *((_QWORD *)dest + 11) = v4;
      if ( *((_QWORD *)v4 + 9) )
      {
        for ( j = (char *)*((_QWORD *)v4 + 9); *((_QWORD *)j + 10); j = (char *)*((_QWORD *)j + 10) )
          ;
        *((_QWORD *)j + 10) = dest;
      }
      else
      {
        *((_QWORD *)v4 + 9) = dest;
      }
      printf("MKDIR SUCCESS: node %s successfully created\n", a1);
    }
  }
  return __readfsqword(0x28u) ^ v8;
}

//----- (0000000000002809) ----------------------------------------------------
char *__fastcall splitPath(const char *a1, char *a2, char *a3)
{
  int v5; // [rsp+2Ch] [rbp-44h]
  int i; // [rsp+30h] [rbp-40h]
  _BOOL4 v7; // [rsp+34h] [rbp-3Ch]
  char *v8; // [rsp+38h] [rbp-38h]
  const char *s2; // [rsp+40h] [rbp-30h]
  char *s1; // [rsp+48h] [rbp-28h]
  const char *j; // [rsp+50h] [rbp-20h]
  char *k; // [rsp+58h] [rbp-18h]

  v5 = -1;
  for ( i = 0; i < strlen(a1) - 1; ++i )
  {
    if ( a1[i] == 47 )
      v5 = i;
  }
  if ( v5 == -1 )
  {
    *a3 = 0;
    strcpy(a2, a1);
  }
  else
  {
    strncpy(a3, a1, v5);
    a3[v5] = 0;
    strcpy(a2, &a1[v5 + 1]);
  }
  v7 = *a1 == 47;
  if ( !*a1 )
    v7 = 1;
  if ( v7 )
  {
    v8 = root;
    for ( s2 = strtok(a3, "/"); s2; s2 = strtok(0, "/") )
    {
      for ( s1 = (char *)*((_QWORD *)v8 + 9); ; s1 = (char *)*((_QWORD *)s1 + 10) )
      {
        if ( !s1 )
          goto LABEL_20;
        if ( !strcmp(s1, s2) )
          break;
      }
      if ( s1[64] != 68 )
        goto LABEL_21;
      v8 = s1;
LABEL_20:
      if ( !s1 )
      {
LABEL_21:
        printf("ERROR: directory %s does not exist\n", s2);
        return 0;
      }
    }
  }
  else
  {
    v8 = cwd;
    for ( j = strtok(a3, "/"); j; j = strtok(0, "/") )
    {
      for ( k = (char *)*((_QWORD *)v8 + 9); ; k = (char *)*((_QWORD *)k + 10) )
      {
        if ( !k )
          goto LABEL_33;
        if ( !strcmp(k, j) )
          break;
      }
      if ( k[64] != 68 )
        goto LABEL_34;
      v8 = k;
LABEL_33:
      if ( !k )
      {
LABEL_34:
        printf("ERROR: directory %s does not exist\n", j);
        return 0;
      }
    }
  }
  return v8;
}

//----- (0000000000002AD0) ----------------------------------------------------
void __fastcall _libc_csu_init(unsigned int a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbp
  __int64 i; // rbx

  init_proc();
  v3 = &_do_global_dtors_aux_fini_array_entry - _frame_dummy_init_array_entry;
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
      _frame_dummy_init_array_entry[i]();
  }
}
// 4D48: using guessed type __int64 (__fastcall *_frame_dummy_init_array_entry[2])();
// 4D50: using guessed type __int64 (__fastcall *_do_global_dtors_aux_fini_array_entry)();

//----- (0000000000002B40) ----------------------------------------------------
void _libc_csu_fini(void)
{
  ;
}

//----- (0000000000002B48) ----------------------------------------------------
void term_proc()
{
  ;
}
