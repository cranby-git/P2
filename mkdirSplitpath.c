void _init()
{
    if (__gmon_start__)
        __gmon_start__();
}

int64_t sub_1020()
{
    int64_t var_8 = 0;
    /* jump -> nullptr */
}

int64_t sub_1030()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1040()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1050()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1060()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1070()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1080()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1090()
{
    int64_t var_8 = 6;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10a0()
{
    int64_t var_8 = 7;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10b0()
{
    int64_t var_8 = 8;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10c0()
{
    int64_t var_8 = 9;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10d0()
{
    int64_t var_8 = 0xa;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10e0()
{
    int64_t var_8 = 0xb;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10f0()
{
    int64_t var_8 = 0xc;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1100()
{
    int64_t var_8 = 0xd;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1110()
{
    int64_t var_8 = 0xe;
    /* tailcall */
    return sub_1020();
}

void __cxa_finalize(void* d)
{
    /* tailcall */
    return __cxa_finalize(d);
}

void free(void* mem)
{
    /* tailcall */
    return free(mem);
}

int32_t putchar(int32_t c)
{
    /* tailcall */
    return putchar(c);
}

char* strncpy(char* arg1, char const* arg2, uint64_t arg3)
{
    /* tailcall */
    return strncpy(arg1, arg2, arg3);
}

char* strcpy(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcpy(arg1, arg2);
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

uint64_t strlen(char const* arg1)
{
    /* tailcall */
    return strlen(arg1);
}

void __stack_chk_fail() __noreturn
{
    /* tailcall */
    return __stack_chk_fail();
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf();
}

char* fgets(char* buf, int32_t n, FILE* fp)
{
    /* tailcall */
    return fgets(buf, n, fp);
}

int32_t strcmp(char const* arg1, char const* arg2)
{
    /* tailcall */
    return strcmp(arg1, arg2);
}

int64_t malloc(uint64_t bytes)
{
    /* tailcall */
    return malloc(bytes);
}

int32_t __isoc99_sscanf(char const* s, char const* format, ...)
{
    /* tailcall */
    return __isoc99_sscanf();
}

char* strtok(char* s, char const* delim)
{
    /* tailcall */
    return strtok(s, delim);
}

char* strcat(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcat(arg1, arg2);
}

uint64_t fwrite(void const* buf, uint64_t size, uint64_t count, FILE* fp)
{
    /* tailcall */
    return fwrite(buf, size, count, fp);
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    __libc_start_main(main, __return_addr, &ubp_av, __libc_csu_init, __libc_csu_fini, arg3, &stack_end);
    /* no return */
}

void deregister_tm_clones()
{
    return;
}

void register_tm_clones()
{
    return;
}

void __do_global_dtors_aux()
{
    if (completed.8061)
        return;
    
    if (__cxa_finalize)
        __cxa_finalize(__dso_handle);
    
    deregister_tm_clones();
    completed.8061 = 1;
}

void frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
}

uint64_t findCMD(char* arg1)
{
    int32_t var_c = 0;
    
    while (true)
    {
        if (!(&cmd)[var_c])
            return 0xffffffff;
        
        if (!strcmp(arg1, (&cmd)[var_c]))
            break;
        
        var_c += 1;
    }
    
    return var_c;
}

uint64_t initialize()
{
    root = malloc(0x60);
    *(root + 0x58) = 0;
    *(root + 0x50) = 0;
    **&root = 0x2f;
    *(root + 0x40) = 0x44;
    *(root + 0x48) = 0;
    uint64_t root_1 = root;
    cwd = root_1;
    return root_1;
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    initialize();
    
    while (true)
    {
        int16_t var_d8 = 0x2f;
        fwrite("input a command line : ", 1, 0x17, stderr);
        void var_98;
        fgets(&var_98, 0x80, stdin);
        *(&var_98 + strlen(&var_98) - 1) = 0;
        void var_e8;
        __isoc99_sscanf(&var_98, "%s %s", &var_e8, &var_d8);
        int32_t rax_5 = findCMD(&var_e8);
        
        if (rax_5 > 9)
            printf("invalid command %s\n", &var_e8);
        else
            switch (rax_5)
            {
                case 0:
                {
                    mkdir(&var_d8);
                    continue;
                }
                case 1:
                {
                    rmdir(&var_d8);
                    continue;
                }
                case 2:
                {
                    ls(&var_d8);
                    continue;
                }
                case 3:
                {
                    cd(&var_d8);
                    continue;
                }
                case 4:
                {
                    pwd();
                    putchar(0xa);
                    continue;
                }
                case 5:
                {
                    touch(&var_d8);
                    continue;
                }
                case 6:
                {
                    rm(&var_d8);
                    continue;
                }
                case 7:
                {
                    menu();
                    continue;
                }
                case 8:
                {
                    printTree();
                    continue;
                }
                case 9:
                {
                    break;
                    break;
                }
            }
    }
    
    if (rax == *(fsbase + 0x28))
        return 0;
    
    __stack_chk_fail();
    /* no return */
}

int64_t menu()
{
    return puts("Commands:\nmkdir [pathname], tou…");
}

int64_t printTree()
{
    printf("%s", root);
    char* rax_3 = *(root + 0x48);
    putchar(0xa);
    return printHelper(rax_3, 0);
}

int64_t printHelper(char* arg1, int32_t arg2)
{
    char* str = arg1;
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    
    for (; str; str = *(str + 0x50))
    {
        char* str_1 = str;
        int64_t s;
        __builtin_memset(&s, 0, 0x100);
        
        for (int32_t j = 0; j < arg2; j += 1)
        {
            int64_t var_198;
            
            if (*(*(str_1 + 0x58) + 0x50))
                __builtin_strncpy(&var_198, "|   ", 5);
            else
                __builtin_strncpy(&var_198, "    ", 5);
            
            strcat(&var_198, &s);
            strcpy(&s, &var_198);
            str_1 = *(str_1 + 0x58);
        }
        
        printf("%s", &s);
        
        if (*(str + 0x50))
            printf("|---");
        else
        {
            puts("|   ");
            char* str_2 = str;
            int64_t s_1;
            __builtin_memset(&s_1, 0, 0x100);
            
            for (int32_t j_1 = 0; j_1 < arg2; j_1 += 1)
            {
                int64_t var_98;
                
                if (*(*(str_2 + 0x58) + 0x50))
                    __builtin_strncpy(&var_98, "|   ", 5);
                else
                    __builtin_strncpy(&var_98, "    ", 5);
                
                strcat(&var_98, &s_1);
                strcpy(&s_1, &var_98);
                str_2 = *(str_2 + 0x58);
            }
            
            printf("%s", &s_1);
            printf("`---");
        }
        
        puts(str);
        
        if (*(str + 0x48))
            printHelper(*(str + 0x48), arg2 + 1);
    }
    
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int64_t quit() __pure
{
    return 0;
}

int64_t rmdir(char* arg1)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    
    if (strcmp(arg1, u"/…"))
    {
        void var_98;
        void var_58;
        uint64_t rax_4 = splitPath(arg1, &var_58, &var_98);
        
        if (rax_4)
        {
            char* var_a8_2 = *(rax_4 + 0x48);
            
            if (var_a8_2)
            {
                char* var_a0_1 = var_a8_2;
                
                while (true)
                {
                    if (!strcmp(var_a8_2, &var_58))
                    {
                        if (var_a8_2[0x40] != 0x44)
                            printf("RMDIR ERROR: %s is not a directo…", arg1);
                        else if (!*(var_a8_2 + 0x48))
                        {
                            if (!*(var_a8_2 + 0x50))
                                *(var_a0_1 + 0x50) = 0;
                            else
                                *(var_a0_1 + 0x50) = *(var_a8_2 + 0x50);
                            
                            if (var_a8_2 == *(*(var_a8_2 + 0x58) + 0x48))
                            {
                                if (!*(var_a8_2 + 0x50))
                                    *(*(var_a8_2 + 0x58) + 0x48) = 0;
                                else
                                    *(*(var_a8_2 + 0x58) + 0x48) = *(var_a8_2 + 0x50);
                            }
                            
                            free(var_a8_2);
                            int64_t var_a8_3 = 0;
                        }
                        else
                            printf("RMDIR ERROR: directory %s is not…", arg1);
                        
                        break;
                    }
                    
                    if (!*(var_a8_2 + 0x50))
                    {
                        printf("RMDIR ERROR: directory %s does n…", &var_58);
                        break;
                    }
                    
                    var_a0_1 = var_a8_2;
                    var_a8_2 = *(var_a8_2 + 0x50);
                }
            }
            else
                printf("RMDIR ERROR: directory %s does n…", &var_58);
        }
    }
    else
        puts("RMDIR ERROR: no path provided");
    
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int64_t ls(char* arg1)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    
    if (!strcmp(arg1, u"/…"))
        strcpy(arg1, cwd);
    
    void var_98;
    void var_58;
    uint64_t rax_6 = splitPath(arg1, &var_58, &var_98);
    
    if (rax_6 && *(rax_6 + 0x48))
    {
        for (void* i = *(rax_6 + 0x48); i; i = *(i + 0x50))
        {
            if (i == *(i + 0x50))
                break;
            
            printf("File Type: %c, File Name: %s\n", *(i + 0x40), i);
        }
    }
    
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int64_t cd(char* arg1)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    
    if (strcmp(arg1, u"/…"))
    {
        void var_a8;
        void var_68;
        uint64_t rax_5 = splitPath(arg1, &var_68, &var_a8);
        
        if (rax_5)
        {
            char* var_b0_2 = *(rax_5 + 0x48);
            
            if (var_b0_2)
            {
                int32_t var_bc_1 = 0;
                int32_t var_b8_1 = 0;
                
                while (true)
                {
                    uint64_t rax_20;
                    
                    if (strlen(var_b0_2) >= strlen(&var_68))
                        rax_20 = strlen(&var_68);
                    else
                        rax_20 = strlen(var_b0_2);
                    
                    if (rax_20 <= var_b8_1)
                        break;
                    
                    if (var_b0_2[var_b8_1] != *(&var_68 + var_b8_1))
                        var_bc_1 = 1;
                    
                    var_b8_1 += 1;
                }
                
                while (true)
                {
                    if (!var_bc_1)
                    {
                        if (var_b0_2[0x40] == 0x44)
                            cwd = var_b0_2;
                        else
                            printf("CD ERROR: %s is not a directory\n", arg1);
                        
                        break;
                    }
                    
                    var_b0_2 = *(var_b0_2 + 0x50);
                    
                    if (!var_b0_2)
                    {
                        printf("CD ERROR: directory %s does not …", arg1);
                        break;
                    }
                    
                    var_bc_1 = 0;
                    int32_t var_b4_1 = 0;
                    
                    while (true)
                    {
                        uint64_t rax_35;
                        
                        if (strlen(var_b0_2) >= strlen(&var_68))
                            rax_35 = strlen(&var_68);
                        else
                            rax_35 = strlen(var_b0_2);
                        
                        if (rax_35 <= var_b4_1)
                            break;
                        
                        if (var_b0_2[var_b4_1] != *(&var_68 + var_b4_1))
                            var_bc_1 = 1;
                        
                        var_b4_1 += 1;
                    }
                }
            }
            else
                printf("CD ERROR: directory %s does not …", arg1);
        }
    }
    else
        cwd = root;
    
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int64_t pwd()
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    uint64_t cwd_1 = cwd;
    void var_58;
    strcpy(&var_58, cwd);
    cwd = *(cwd + 0x58);
    
    if (!strcmp(&var_58, root))
    {
        cwd = cwd_1;
        putchar(0x2f);
    }
    else
    {
        pwd();
        printf("%s/", &var_58);
        cwd = cwd_1;
    }
    
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int64_t touch(char* arg1)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    
    if (strcmp(arg1, u"/…"))
    {
        void var_98;
        void var_58;
        uint64_t rax_4 = splitPath(arg1, &var_98, &var_58);
        
        if (rax_4)
        {
            char* var_b0_1 = *(rax_4 + 0x48);
            
            while (true)
            {
                if (!var_b0_1)
                {
                    char* rax_13 = malloc(0x60);
                    strcpy(rax_13, &var_98);
                    rax_13[0x40] = 0x46;
                    *(rax_13 + 0x48) = 0;
                    *(rax_13 + 0x50) = 0;
                    *(rax_13 + 0x58) = rax_4;
                    
                    if (*(rax_4 + 0x48))
                    {
                        void* var_b0_2 = *(rax_4 + 0x48);
                        
                        while (*(var_b0_2 + 0x50))
                            var_b0_2 = *(var_b0_2 + 0x50);
                        
                        *(var_b0_2 + 0x50) = rax_13;
                    }
                    else
                        *(rax_4 + 0x48) = rax_13;
                    
                    break;
                }
                
                if (!strcmp(var_b0_1, &var_98))
                {
                    printf("TOUCH ERROR: file %s already exi…", arg1);
                    break;
                }
                
                var_b0_1 = *(var_b0_1 + 0x50);
            }
        }
    }
    else
        puts("TOUCH ERROR: no path provided ");
    
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int64_t rm(char* arg1)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    
    if (strcmp(arg1, u"/…"))
    {
        void var_98;
        void var_58;
        uint64_t rax_4 = splitPath(arg1, &var_58, &var_98);
        
        if (rax_4)
        {
            char* var_a8_2 = *(rax_4 + 0x48);
            char* var_a0_1 = var_a8_2;
            
            while (true)
            {
                if (!strcmp(var_a8_2, &var_58))
                {
                    if (var_a8_2[0x40] == 0x46)
                    {
                        if (!*(var_a8_2 + 0x50))
                            *(var_a0_1 + 0x50) = 0;
                        else
                            *(var_a0_1 + 0x50) = *(var_a8_2 + 0x50);
                        
                        if (var_a8_2 == *(*(var_a8_2 + 0x58) + 0x48))
                        {
                            if (!*(var_a8_2 + 0x50))
                                *(*(var_a8_2 + 0x58) + 0x48) = 0;
                            else
                                *(*(var_a8_2 + 0x58) + 0x48) = *(var_a8_2 + 0x50);
                        }
                        
                        free(var_a8_2);
                        int64_t var_a8_3 = 0;
                    }
                    else
                        printf("RM ERROR: %s is not a file\n", arg1);
                    
                    break;
                }
                
                if (!*(var_a8_2 + 0x50))
                {
                    printf("RM ERROR: file %s does not exist…", arg1);
                    break;
                }
                
                var_a0_1 = var_a8_2;
                var_a8_2 = *(var_a8_2 + 0x50);
            }
        }
    }
    else
        puts("RM ERROR: no path provided");
    
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int64_t mkdir(char* arg1)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    
    if (strcmp(arg1, u"/…"))
    {
        void var_98;
        void var_58;
        uint64_t rax_4 = splitPath(arg1, &var_98, &var_58);
        
        if (rax_4)
        {
            char* var_b0_1 = *(rax_4 + 0x48);
            
            while (true)
            {
                if (!var_b0_1)
                {
                    char* rax_13 = malloc(0x60);
                    strcpy(rax_13, &var_98);
                    rax_13[0x40] = 0x44;
                    *(rax_13 + 0x48) = 0;
                    *(rax_13 + 0x50) = 0;
                    *(rax_13 + 0x58) = rax_4;
                    char* rdx_3;
                    
                    if (*(rax_4 + 0x48))
                    {
                        void* var_b0_2 = *(rax_4 + 0x48);
                        
                        while (*(var_b0_2 + 0x50))
                            var_b0_2 = *(var_b0_2 + 0x50);
                        
                        rdx_3 = rax_13;
                        *(var_b0_2 + 0x50) = rdx_3;
                    }
                    else
                    {
                        rdx_3 = rax_13;
                        *(rax_4 + 0x48) = rdx_3;
                    }
                    
                    printf("MKDIR SUCCESS: node %s successfu…", arg1, rdx_3);
                    break;
                }
                
                if (!strcmp(var_b0_1, &var_98))
                {
                    printf("MKDIR ERROR: directory %s alread…", arg1);
                    break;
                }
                
                var_b0_1 = *(var_b0_1 + 0x50);
            }
        }
    }
    else
        puts("MKDIR ERROR: no path provided");
    
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

uint64_t splitPath(char* arg1, char* arg2, char* arg3)
{
    int32_t var_4c = 0xffffffff;
    int32_t var_48 = 0;
    
    while (var_48 < strlen(arg1) - 1)
    {
        if (arg1[var_48] == 0x2f)
            var_4c = var_48;
        
        var_48 += 1;
    }
    
    if (var_4c == 0xffffffff)
    {
        *arg3 = 0;
        strcpy(arg2, arg1);
    }
    else
    {
        strncpy(arg3, arg1, var_4c);
        arg3[var_4c] = 0;
        strcpy(arg2, var_4c + 1 + arg1);
    }
    
    uint32_t var_44 = *arg1 == 0x2f;
    
    if (!*arg1)
        var_44 = 1;
    
    uint64_t result;
    
    if (!var_44)
    {
        result = cwd;
        
        for (char* i = strtok(arg3, u"/…"); i; i = strtok(nullptr, u"/…"))
        {
            uint64_t j;
            
            for (j = *(result + 0x48); j; j = *(j + 0x50))
            {
                if (!strcmp(j, i))
                {
                    if (*(j + 0x40) == 0x44)
                    {
                        result = j;
                        break;
                    }
                    
                    printf("ERROR: directory %s does not exi…", i);
                    return 0;
                }
            }
            
            if (!j)
            {
                printf("ERROR: directory %s does not exi…", i);
                return 0;
            }
        }
    }
    else
    {
        result = root;
        
        for (char* i_1 = strtok(arg3, u"/…"); i_1; i_1 = strtok(nullptr, u"/…"))
        {
            uint64_t j_1;
            
            for (j_1 = *(result + 0x48); j_1; j_1 = *(j_1 + 0x50))
            {
                if (!strcmp(j_1, i_1))
                {
                    if (*(j_1 + 0x40) == 0x44)
                    {
                        result = j_1;
                        break;
                    }
                    
                    printf("ERROR: directory %s does not exi…", i_1);
                    return 0;
                }
            }
            
            if (!j_1)
            {
                printf("ERROR: directory %s does not exi…", i_1);
                return 0;
            }
        }
    }
    
    return result;
}

void __libc_csu_init()
{
    _init();
    int64_t i = 0;
    
    do
    {
        int64_t rdx;
        int64_t rsi;
        int32_t rdi;
        (&__frame_dummy_init_array_entry)[i](rdi, rsi, rdx);
        i += 1;
    } while (1 != i);
}

void __libc_csu_fini() __pure
{
    return;
}

int64_t _fini() __pure
{
    return;
}

