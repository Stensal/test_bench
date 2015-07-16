typedef unsigned int size_t;
typedef int wchar_t;
typedef int ptrdiff_t;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;



void *_alloca(size_t);


typedef char *va_list;

typedef va_list __gnuc_va_list;


void *calloc(size_t nmemb, size_t size);
void *malloc(size_t size);
void free(void *ptr);
void *realloc(void *ptr, size_t size);
int atoi(const char *nptr);
long int strtol(const char *nptr, char **endptr, int base);
unsigned long int strtoul(const char *nptr, char **endptr, int base);


typedef struct __FILE FILE;

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
FILE *fopen(const char *path, const char *mode);
FILE *fdopen(int fildes, const char *mode);
FILE *freopen(const char *path, const char *mode, FILE *stream);
int fclose(FILE *stream);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fwrite(void *ptr, size_t size, size_t nmemb, FILE *stream);
int fgetc(FILE *stream);
char *fgets(char *s, int size, FILE *stream);
int getc(FILE *stream);
int getchar(void);
char *gets(char *s);
int ungetc(int c, FILE *stream);
int fflush(FILE *stream);

int printf(const char *format, ...);
int fprintf(FILE *stream, const char *format, ...);
int sprintf(char *str, const char *format, ...);
int snprintf(char *str, size_t size, const char *format, ...);
int asprintf(char **strp, const char *format, ...);
int dprintf(int fd, const char *format, ...);
int vprintf(const char *format, va_list ap);
int vfprintf(FILE *stream, const char *format, va_list ap);
int vsprintf(char *str, const char *format, va_list ap);
int vsnprintf(char *str, size_t size, const char *format, va_list ap);
int vasprintf(char **strp, const char *format, va_list ap);
int vdprintf(int fd, const char *format, va_list ap);

void perror(const char *s);


char *strcat(char *dest, const char *src);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
char *strcpy(char *dest, const char *src);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
char *strdup(const char *s);


void *dlopen(const char *filename, int flag);
const char *dlerror(void);
void *dlsym(void *handle, char *symbol);
int dlclose(void *handle);

void string_test();
void expr_test();
void macro_test();
void scope_test();
void forward_test();
void funcptr_test();
void loop_test();
void switch_test();
void goto_test();
void enum_test();
void typedef_test();
void struct_test();
void array_test();
void expr_ptr_test();
void bool_test();
void expr2_test();
void constant_expr_test();
void expr_cmp_test();
void char_short_test();
void init_test(void);
void compound_literal_test(void);
int kr_test();
void struct_assign_test(void);
void cast_test(void);
void bitfield_test(void);
void c99_bool_test(void);
void float_test(void);
void longlong_test(void);
void stdarg_test(void);
void whitespace_test(void);
void relocation_test(void);
void old_style_function(void);
void sizeof_test(void);
void typeof_test(void);
void local_label_test(void);
void statement_expr_test(void);
void asm_test(void);
void builtin_test(void);

int fib(int n);
void num(int n);
void forward_ref(void);
int isid(int c);


int qq(int x)
{
    return x + 40;
}






void macro_test(void)
{
    printf("macro:\n");
    printf("N=%d\n", 1234 + 2);
    printf("aaa=%d\n", 4);

    printf("min=%d\n", ((1) < (((2) < (-1) ? (2) : (-1))) ? (1) : (((2) < (-1) ? (2) : (-1)))));

    printf("s1=%s\n", "hello");
    printf("s2=%s\n", "hello" ", world");
    printf("s3=%s\n", "\"c\"");
    printf("s4=%s\n", "a1");
    printf("B3=%d\n", 1);


    printf("A defined\n");





    printf("A defined\n");






    printf("B not defined\n");



    printf("A defined\n");



    printf("B1 not defined\n");
    printf("test true1\n");
    printf("test trueA\n");
    printf("test 2\n");

    printf("__LINE__ defined\n");


    printf("__LINE__=%d __FILE__=%s\n", 219, "tcctest.c");
    printf("__LINE__=%d __FILE__=%s\n", 201, "tcctest.c");
    printf("__LINE__=%d __FILE__=%s\n", 204, "test");

    printf("__func__ = %s\n", __func__);
    printf("vaarg=%d\n", 1);

    printf("vaarg1\n");
    printf("vaarg1=%d\n", 2);
    printf("vaarg1=%d %d\n", 1, 2);


    printf("func='%s'\n", __FUNCTION__);


    printf("INT64_MIN=%Ld\n", (-9223372036854775807LL -1));
    {
        int a;
        a = 1;
        a++;
        printf("a=%d\n", a);
        a <<= 2;
        printf("a=%d\n", a);
    }







    printf("%s\n","hi");
    printf("tralala\n"); printf("%s\n","hi");


    printf("qq=%d\n", qq(2));





    printf("qq1=%d\n", 1);
}

int op(a,b)
{
    return a / b;
}

int ret(a)
{
    if (a == 2)
        return 1;
    if (a == 3)
        return 2;
    return 0;
}

void ps(const char *s)
{
    int c;
    while (1) {
        c = *s;
        if (c == 0)
            break;
        printf("%c", c);
        s++;
    }
}

const char foo1_string[] = "bar\ntest\141";




void string_test()
{
    int b;
    printf("string:\n");
    printf("\141\1423\143\n");
    printf("\x41\x42\x43\x3a\n");
    printf("c=%c\n", 'r');
    printf("wc=%C 0x%lx %C\n", L'a', L'\x1234', L'c');
    printf("foo1_string='%s'\n", foo1_string);






    ps("test\n");
    b = 32;
    while ((b = b + 1) < 96) {
        printf("%c", b);
    }
    printf("\n");
    printf("fib=%d\n", fib(33));
    b = 262144;
    while (b != 0x80000000) {
        num(b);
        b = b * 2;
    }
}

void loop_test()
{
    int i;
    i = 0;
    while (i < 10)
        printf("%d", i++);
    printf("\n");
    for(i = 0; i < 10;i++)
        printf("%d", i);
    printf("\n");
    i = 0;
    do {
        printf("%d", i++);
    } while (i < 10);
    printf("\n");


    i = 0;
    while (1) {
        if (i == 6)
            break;
        i++;
        if (i == 3)
            continue;
        printf("%d", i);
    }
    printf("\n");


    i = 0;
    do {
        if (i == 6)
            break;
        i++;
        if (i == 3)
            continue;
        printf("%d", i);
    } while(1);
    printf("\n");

    for(i = 0;i < 10;i++) {
        if (i == 3)
            continue;
        printf("%d", i);
    }
    printf("\n");
}


void goto_test()
{
    int i;
    static void *label_table[3] = { &&label1, &&label2, &&label3 };

    printf("goto:\n");
    i = 0;
 s_loop:
    if (i >= 10)
        goto s_end;
    printf("%d", i);
    i++;
    goto s_loop;
 s_end:
    printf("\n");


    for(i=0;i<3;i++) {
        goto *label_table[i];
    label1:
        printf("label1\n");
        goto next;
    label2:
        printf("label2\n");
        goto next;
    label3:
        printf("label3\n");
    next: ;
    }
}

enum {
    E0,
    E1 = 2,
    E2 = 4,
    E3,
    E4,
};

enum test {
    E5 = 1000,
};

void enum_test()
{
    enum test b1;
    printf("enum:\n%d %d %d %d %d %d\n",
           E0, E1, E2, E3, E4, E5);
    b1 = 1;
    printf("b1=%d\n", b1);
}

typedef int *my_ptr;

typedef int mytype1;
typedef int mytype2;

void typedef_test()
{
    my_ptr a;
    mytype1 mytype2;
    int b;

    a = &b;
    *a = 1234;
    printf("typedef:\n");
    printf("a=%d\n", *a);
    mytype2 = 2;
    printf("mytype2=%d\n", mytype2);
}

void forward_test()
{
    printf("forward:\n");
    forward_ref();
    forward_ref();
}


void forward_ref(void)
{
    printf("forward ok\n");
}

typedef struct struct1 {
    int f1;
    int f2, f3;
    union union1 {
        int v1;
        int v2;
    } u;
    char str[3];
} struct1;

struct struct2 {
    int a;
    char b;
};

union union2 {
    int w1;
    int w2;
};

struct struct1 st1, st2;

int main(int argc, char **argv)
{
    string_test();
    expr_test();
    macro_test();
    scope_test();
    forward_test();
    funcptr_test();
    loop_test();
    switch_test();
    goto_test();
    enum_test();
    typedef_test();
    struct_test();
    array_test();
    expr_ptr_test();
    bool_test();
    expr2_test();
    constant_expr_test();
    expr_cmp_test();
    char_short_test();
    init_test();
    compound_literal_test();
    kr_test();
    struct_assign_test();
    cast_test();
    bitfield_test();
    c99_bool_test();
    float_test();
    longlong_test();
    stdarg_test();
    whitespace_test();
    relocation_test();
    old_style_function();
    sizeof_test();
    typeof_test();
    statement_expr_test();
    local_label_test();
    asm_test();
    builtin_test();
    return 0;
}

int tab[3];
int tab2[3][2];

int g;

void f1(g)
{
    printf("g1=%d\n", g);
}

void scope_test()
{
    printf("scope:\n");
    g = 2;
    f1(1);
    printf("g2=%d\n", g);
    {
        int g;
        g = 3;
        printf("g3=%d\n", g);
        {
            int g;
            g = 4;
            printf("g4=%d\n", g);
        }
    }
    printf("g5=%d\n", g);
}

void array_test(int a[4])
{
    int i, j;

    printf("array:\n");
    printf("sizeof(a) = %d\n", sizeof(a));
    printf("sizeof(\"a\") = %d\n", sizeof("a"));

    printf("sizeof(__func__) = %d\n", sizeof(__func__));

    printf("sizeof tab %d\n", sizeof(tab));
    printf("sizeof tab2 %d\n", sizeof tab2);
    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    printf("%d %d %d\n", tab[0], tab[1], tab[2]);
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            tab2[i][j] = 10 * i + j;
    for(i=0;i<3*2;i++) {
        printf(" %3d", ((int *)tab2)[i]);
    }
    printf("\n");
}

void expr_test()
{
    int a, b;
    a = 0;
    printf("%d\n", a += 1);
    printf("%d\n", a -= 2);
    printf("%d\n", a *= 31232132);
    printf("%d\n", a /= 4);
    printf("%d\n", a %= 20);
    printf("%d\n", a &= 6);
    printf("%d\n", a ^= 7);
    printf("%d\n", a |= 8);
    printf("%d\n", a >>= 3);
    printf("%d\n", a <<= 4);

    a = 22321;
    b = -22321;
    printf("%d\n", a + 1);
    printf("%d\n", a - 2);
    printf("%d\n", a * 312);
    printf("%d\n", a / 4);
    printf("%d\n", b / 4);
    printf("%d\n", (unsigned)b / 4);
    printf("%d\n", a % 20);
    printf("%d\n", b % 20);
    printf("%d\n", (unsigned)b % 20);
    printf("%d\n", a & 6);
    printf("%d\n", a ^ 7);
    printf("%d\n", a | 8);
    printf("%d\n", a >> 3);
    printf("%d\n", b >> 3);
    printf("%d\n", (unsigned)b >> 3);
    printf("%d\n", a << 4);
    printf("%d\n", ~a);
    printf("%d\n", -a);
    printf("%d\n", +a);

    printf("%d\n", 12 + 1);
    printf("%d\n", 12 - 2);
    printf("%d\n", 12 * 312);
    printf("%d\n", 12 / 4);
    printf("%d\n", 12 % 20);
    printf("%d\n", 12 & 6);
    printf("%d\n", 12 ^ 7);
    printf("%d\n", 12 | 8);
    printf("%d\n", 12 >> 2);
    printf("%d\n", 12 << 4);
    printf("%d\n", ~12);
    printf("%d\n", -12);
    printf("%d\n", +12);
    printf("%d %d %d %d\n",
           isid('a'),
           isid('g'),
           isid('T'),
           isid('('));
}

int isid(int c)
{
    return (c >= 'a' & c <= 'z') | (c >= 'A' & c <= 'Z') | c == '_';
}



int vstack[10], *vstack_ptr;

void vpush(int vt, int vc)
{
    *vstack_ptr++ = vt;
    *vstack_ptr++ = vc;
}

void vpop(int *ft, int *fc)
{
    *fc = *--vstack_ptr;
    *ft = *--vstack_ptr;
}

void expr2_test()
{
    int a, b;

    printf("expr2:\n");
    vstack_ptr = vstack;
    vpush(1432432, 2);
    vstack_ptr[-2] &= ~0xffffff80;
    vpop(&a, &b);
    printf("res= %d %d\n", a, b);
}

void constant_expr_test()
{
    int a;
    printf("constant_expr:\n");
    a = 3;
    printf("%d\n", a * 16);
    printf("%d\n", a * 1);
    printf("%d\n", a + 0);
}

int tab4[10];

void expr_ptr_test()
{
    int *p, *q;

    printf("expr_ptr:\n");
    p = tab4;
    q = tab4 + 10;
    printf("diff=%d\n", q - p);
    p++;
    printf("inc=%d\n", p - tab4);
    p--;
    printf("dec=%d\n", p - tab4);
    ++p;
    printf("inc=%d\n", p - tab4);
    --p;
    printf("dec=%d\n", p - tab4);
    printf("add=%d\n", p + 3 - tab4);
    printf("add=%d\n", 3 + p - tab4);
}

void expr_cmp_test()
{
    int a, b;
    printf("constant_expr:\n");
    a = -1;
    b = 1;
    printf("%d\n", a == a);
    printf("%d\n", a != a);

    printf("%d\n", a < b);
    printf("%d\n", a <= b);
    printf("%d\n", a <= a);
    printf("%d\n", b >= a);
    printf("%d\n", a >= a);
    printf("%d\n", b > a);

    printf("%d\n", (unsigned)a < b);
    printf("%d\n", (unsigned)a <= b);
    printf("%d\n", (unsigned)a <= a);
    printf("%d\n", (unsigned)b >= a);
    printf("%d\n", (unsigned)a >= a);
    printf("%d\n", (unsigned)b > a);
}

struct empty {
};

struct aligntest1 {
    char a[10];
};

struct aligntest2 {
    int a;
    char b[10];
};

struct aligntest3 {
    double a, b;
};

struct aligntest4 {
    double a[0];
};

void struct_test()
{
    struct1 *s;
    union union2 u;

    printf("struct:\n");
    printf("sizes: %d %d %d %d\n",
           sizeof(struct struct1),
           sizeof(struct struct2),
           sizeof(union union1),
           sizeof(union union2));
    st1.f1 = 1;
    st1.f2 = 2;
    st1.f3 = 3;
    printf("st1: %d %d %d\n",
           st1.f1, st1.f2, st1.f3);
    st1.u.v1 = 1;
    st1.u.v2 = 2;
    printf("union1: %d\n", st1.u.v1);
    u.w1 = 1;
    u.w2 = 2;
    printf("union2: %d\n", u.w1);
    s = &st2;
    s->f1 = 3;
    s->f2 = 2;
    s->f3 = 1;
    printf("st2: %d %d %d\n",
           s->f1, s->f2, s->f3);
    printf("str_addr=%x\n", (int)st1.str - (int)&st1.f1);


    printf("aligntest1 sizeof=%d alignof=%d\n",
           sizeof(struct aligntest1), __alignof__(struct aligntest1));
    printf("aligntest2 sizeof=%d alignof=%d\n",
           sizeof(struct aligntest2), __alignof__(struct aligntest2));
    printf("aligntest3 sizeof=%d alignof=%d\n",
           sizeof(struct aligntest3), __alignof__(struct aligntest3));
    printf("aligntest4 sizeof=%d alignof=%d\n",
           sizeof(struct aligntest4), __alignof__(struct aligntest4));


    printf("sizeof(struct empty) = %d\n", sizeof(struct empty));
    printf("alignof(struct empty) = %d\n", __alignof__(struct empty));
}


void char_short_test()
{
    int var1, var2;

    printf("char_short:\n");

    var1 = 0x01020304;
    var2 = 0xfffefdfc;
    printf("s8=%d %d\n",
           *(char *)&var1, *(char *)&var2);
    printf("u8=%d %d\n",
           *(unsigned char *)&var1, *(unsigned char *)&var2);
    printf("s16=%d %d\n",
           *(short *)&var1, *(short *)&var2);
    printf("u16=%d %d\n",
           *(unsigned short *)&var1, *(unsigned short *)&var2);
    printf("s32=%d %d\n",
           *(int *)&var1, *(int *)&var2);
    printf("u32=%d %d\n",
           *(unsigned int *)&var1, *(unsigned int *)&var2);
    *(char *)&var1 = 0x08;
    printf("var1=%x\n", var1);
    *(short *)&var1 = 0x0809;
    printf("var1=%x\n", var1);
    *(int *)&var1 = 0x08090a0b;
    printf("var1=%x\n", var1);
}



typedef struct Sym {
    int v;
    int t;
    int c;
    struct Sym *next;
    struct Sym *prev;
} Sym;




static int toupper1(int a)
{
    return (('a' <= (a) && (a) <= 'z') ? 'A' + ((a) - 'a') : (a));
}

void bool_test()
{
    int *s, a, b, t, f, i;

    a = 0;
    s = (void*)0;
    printf("!s=%d\n", !s);

    if (!s || !s[0])
        a = 1;
    printf("a=%d\n", a);

    printf("a=%d %d %d\n", 0 || 0, 0 || 1, 1 || 1);
    printf("a=%d %d %d\n", 0 && 0, 0 && 1, 1 && 1);
    printf("a=%d %d\n", 1 ? 1 : 0, 0 ? 1 : 0);

    printf("a1\n");


    printf("a2\n");





    printf("a4\n");


    a = 4;
    printf("b=%d\n", a + (0 ? 1 : a / 2));


    a = 10;
    b = 10;
    a = (a + b) * ((a < b) ?
                   ((b - a) * (a - b)): a + b);
    printf("a=%d\n", a);


    t = 1;
    f = 0;
    a = 32;
    printf("exp=%d\n", f == (32 <= a && a <= 3));
    printf("r=%d\n", (t || f) + (t && f));


    {
        int aspect_on;
        int aspect_native = 65536;
        double bfu_aspect = 1.0;
        int aspect;
        for(aspect_on = 0; aspect_on < 2; aspect_on++) {
            aspect=aspect_on?(aspect_native*bfu_aspect+0.5):65535UL;
            printf("aspect=%d\n", aspect);
        }
    }


    {
        static int v1 = 34 ? : -1;
        static int v2 = 0 ? : -1;
        int a = 30;

        printf("%d %d\n", v1, v2);
        printf("%d %d\n", a - 30 ? : a * 2, a + 1 ? : a * 2);
    }


    for(i=0;i<256;i++) {
        if (toupper1 (i) != (('a' <= (i) && (i) <= 'z') ? 'A' + ((i) - 'a') : (i)))
            printf("error %d\n", i);
    }
}


static int tab_reinit[];
static int tab_reinit[10];


int cinit1;
int cinit1;
int cinit1 = 0;
int *cinit2 = (int []){3, 2, 1};

void compound_literal_test(void)
{
    int *p, i;
    char *q, *q3;

    printf("compound_test:\n");

    p = (int []){1, 2, 3};
    for(i=0;i<3;i++)
        printf(" %d", p[i]);
    printf("\n");

    for(i=0;i<3;i++)
        printf("%d", cinit2[i]);
    printf("\n");

    q = "tralala1";
    printf("q1=%s\n", q);

    q = (char *){ "tralala2" };
    printf("q2=%s\n", q);

    q3 = (char *){ q };
    printf("q3=%s\n", q3);

    q = (char []){ "tralala3" };
    printf("q4=%s\n", q);


    p = (int []){1, 2, cinit1 + 3};
    for(i=0;i<3;i++)
        printf(" %d", p[i]);
    printf("\n");

    for(i=0;i<3;i++) {
        p = (int []){1, 2, 4 + i};
        printf("%d %d %d\n",
               p[0],
               p[1],
               p[2]);
    }

}



kr_func1(a, b)
{
    return a + b;
}

int kr_func2(a, b)
{
    return a + b;
}

kr_test()
{
    printf("kr_test:\n");
    printf("func1=%d\n", kr_func1(3, 4));
    printf("func2=%d\n", kr_func2(3, 4));
    return 0;
}

void num(int n)
{
    char *tab, *p;
    tab = (char*)malloc(20);
    p = tab;
    while (1) {
        *p = 48 + (n % 10);
        p++;
        n = n / 10;
        if (n == 0)
            break;
    }
    while (p != tab) {
        p--;
        printf("%c", *p);
    }
    printf("\n");
}


struct structa1 {
    int f1;
    char f2;
};

struct structa1 ssta1;

void struct_assign_test1(struct structa1 s1, int t)
{
    printf("%d %d %d\n", s1.f1, s1.f2, t);
}

struct structa1 struct_assign_test2(struct structa1 s1, int t)
{
    s1.f1 += t;
    s1.f2 -= t;
    return s1;
}

void struct_assign_test(void)
{
    struct structa1 lsta1, lsta2;
# 1051 "tcctest.c"
    lsta2.f1 = 1;
    lsta2.f2 = 2;

    struct_assign_test1(lsta2, 3);

    printf("before call: %d %d\n", lsta2.f1, lsta2.f2);
    lsta2 = struct_assign_test2(lsta2, 4);
    printf("after call: %d %d\n", lsta2.f1, lsta2.f2);
}



void cast1(char a, short b, unsigned char c, unsigned short d)
{
    printf("%d %d %d %d\n", a, b, c, d);
}

char bcast;
short scast;

void cast_test()
{
    int a;
    char c;
    char tab[10];
    unsigned b,d;
    short s;

    printf("cast_test:\n");
    a = 0xfffff;
    cast1(a, a, a, a);
    a = 0xffffe;
    printf("%d %d %d %d\n",
           (char)(a + 1),
           (short)(a + 1),
           (unsigned char)(a + 1),
           (unsigned short)(a + 1));
    printf("%d %d %d %d\n",
           (char)0xfffff,
           (short)0xfffff,
           (unsigned char)0xfffff,
           (unsigned short)0xfffff);

    a = (bcast = 128) + 1;
    printf("%d\n", a);
    a = (scast = 65536) + 1;
    printf("%d\n", a);

    printf("sizeof(c) = %d, sizeof((int)c) = %d\n", sizeof(c), sizeof((int)c));


    b = 0xf000;
    d = (short)b;
    printf("((unsigned)(short)0x%08x) = 0x%08x\n", b, d);
    b = 0xf0f0;
    d = (char)b;
    printf("((unsigned)(char)0x%08x) = 0x%08x\n", b, d);


    c = 0;
    tab[1] = 2;
    tab[c] = 1;
    printf("%d %d\n", tab[0], tab[1]);


    printf("sizeof(+(char)'a') = %d\n", sizeof(+(char)'a'));
    printf("sizeof(-(char)'a') = %d\n", sizeof(-(char)'a'));
    printf("sizeof(~(char)'a') = %d\n", sizeof(-(char)'a'));
}


struct structinit1 {
    int f1;
    char f2;
    short f3;
    int farray[3];
};

int sinit1 = 2;
int sinit2 = { 3 };
int sinit3[3] = { 1, 2, {{3}}, };
int sinit4[3][2] = { {1, 2}, {3, 4}, {5, 6} };
int sinit5[3][2] = { 1, 2, 3, 4, 5, 6 };
int sinit6[] = { 1, 2, 3 };
int sinit7[] = { [2] = 3, [0] = 1, 2 };
char sinit8[] = "hello" "trala";

struct structinit1 sinit9 = { 1, 2, 3 };
struct structinit1 sinit10 = { .f2 = 2, 3, .f1 = 1 };
struct structinit1 sinit11 = { .f2 = 2, 3, .f1 = 1,

                               .farray[0] = 10,
                               .farray[1] = 11,
                               .farray[2] = 12,

};

char *sinit12 = "hello world";
char *sinit13[] = {
    "test1",
    "test2",
    "test3",
};
char sinit14[10] = { "abc" };
int sinit15[3] = { sizeof(sinit15), 1, 2 };

struct { int a[3], b; } sinit16[] = { { 1 }, 2 };

struct bar {
        char *s;
        int len;
} sinit17[] = {
        "a1", 4,
        "a2", 1
};

int sinit18[10] = {
    [2 ... 5] = 20,
    2,
    [8] = 10,
};

void init_test(void)
{
    int linit1 = 2;
    int linit2 = { 3 };
    int linit4[3][2] = { {1, 2}, {3, 4}, {5, 6} };
    int linit6[] = { 1, 2, 3 };
    int i, j;
    char linit8[] = "hello" "trala";
    int linit12[10] = { 1, 2 };
    int linit13[10] = { 1, 2, [7] = 3, [3] = 4, };
    char linit14[10] = "abc";
    int linit15[10] = { linit1, linit1 + 1, [6] = linit1 + 2, };
    struct linit16 { int a1, a2, a3, a4; } linit16 = { 1, .a3 = 2 };
    int linit17 = sizeof(linit17);

    printf("init_test:\n");

    printf("sinit1=%d\n", sinit1);
    printf("sinit2=%d\n", sinit2);
    printf("sinit3=%d %d %d %d\n",
           sizeof(sinit3),
           sinit3[0],
           sinit3[1],
           sinit3[2]
           );
    printf("sinit6=%d\n", sizeof(sinit6));
    printf("sinit7=%d %d %d %d\n",
           sizeof(sinit7),
           sinit7[0],
           sinit7[1],
           sinit7[2]
           );
    printf("sinit8=%s\n", sinit8);
    printf("sinit9=%d %d %d\n",
           sinit9.f1,
           sinit9.f2,
           sinit9.f3
           );
    printf("sinit10=%d %d %d\n",
           sinit10.f1,
           sinit10.f2,
           sinit10.f3
           );
    printf("sinit11=%d %d %d %d %d %d\n",
           sinit11.f1,
           sinit11.f2,
           sinit11.f3,
           sinit11.farray[0],
           sinit11.farray[1],
           sinit11.farray[2]
           );

    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            printf("[%d][%d] = %d %d %d\n",
                   i, j, sinit4[i][j], sinit5[i][j], linit4[i][j]);
    printf("linit1=%d\n", linit1);
    printf("linit2=%d\n", linit2);
    printf("linit6=%d\n", sizeof(linit6));
    printf("linit8=%d %s\n", sizeof(linit8), linit8);

    printf("sinit12=%s\n", sinit12);
    printf("sinit13=%d %s %s %s\n",
           sizeof(sinit13),
           sinit13[0],
           sinit13[1],
           sinit13[2]);
    printf("sinit14=%s\n", sinit14);

    for(i=0;i<10;i++) printf(" %d", linit12[i]);
    printf("\n");
    for(i=0;i<10;i++) printf(" %d", linit13[i]);
    printf("\n");
    for(i=0;i<10;i++) printf(" %d", linit14[i]);
    printf("\n");
    for(i=0;i<10;i++) printf(" %d", linit15[i]);
    printf("\n");
    printf("%d %d %d %d\n",
           linit16.a1,
           linit16.a2,
           linit16.a3,
           linit16.a4);

    printf("linit17=%d\n", linit17);
    printf("sinit15=%d\n", sinit15[0]);
    printf("sinit16=%d %d\n", sinit16[0].a[0], sinit16[1].a[0]);
    printf("sinit17=%s %d %s %d\n",
           sinit17[0].s, sinit17[0].len,
           sinit17[1].s, sinit17[1].len);
    for(i=0;i<10;i++)
        printf("%x ", sinit18[i]);
    printf("\n");
}


void switch_test()
{
    int i;

    for(i=0;i<15;i++) {
        switch(i) {
        case 0:
        case 1:
            printf("a");
            break;
        default:
            printf("%d", i);
            break;
        case 8 ... 12:
            printf("c");
            break;
        case 3:
            printf("b");
            break;
        }
    }
    printf("\n");
}


void c99_bool_test(void)
{

    int a;
    _Bool b;

    printf("bool_test:\n");
    printf("sizeof(_Bool) = %d\n", sizeof(_Bool));
    a = 3;
    printf("cast: %d %d %d\n", (_Bool)10, (_Bool)0, (_Bool)a);
    b = 3;
    printf("b = %d\n", b);
    b++;
    printf("b = %d\n", b);

}

void bitfield_test(void)
{
    int a;
    struct sbf1 {
        int f1 : 3;
        int : 2;
        int f2 : 1;
        int : 0;
        int f3 : 5;
        int f4 : 7;
        unsigned int f5 : 7;
    } st1;
    printf("bitfield_test:");
    printf("sizeof(st1) = %d\n", sizeof(st1));

    st1.f1 = 3;
    st1.f2 = 1;
    st1.f3 = 15;
    a = 120;
    st1.f4 = a;
    st1.f5 = a;
    st1.f5++;
    printf("%d %d %d %d %d\n",
           st1.f1, st1.f2, st1.f3, st1.f4, st1.f5);

    st1.f1 = 7;
    if (st1.f1 == -1)
        printf("st1.f1 == -1\n");
    else
        printf("st1.f1 != -1\n");
    if (st1.f2 == -1)
        printf("st1.f2 == -1\n");
    else
        printf("st1.f2 != -1\n");
}
# 1401 "tcctest.c"
void fcmp(float a, float b){ printf("%d %d %d %d %d %d\n", a == b, a != b, a < b, a > b, a >= b, a <= b); printf("%f" " " "%f" " " "%f" " " "%f" " " "%f" " " "%f" " " "%f" "\n", a, b, a + b, a - b, a * b, a / b, -a); printf("%f" "\n", ++a); printf("%f" "\n", a++); printf("%f" "\n", a);}void ffcast(float a){ float fa; double da; long double la; int ia; unsigned int ua; float b; fa = a; da = a; la = a; printf("ftof: %f %f %Lf\n", fa, da, la); ia = (int)a; ua = (unsigned int)a; printf("ftoi: %d %u\n", ia, ua); ia = -1234; ua = 0x81234500; b = ia; printf("itof: " "%f" "\n", b); b = ua; printf("utof: " "%f" "\n", b);}void ftest(void){ printf("testing '%s'\n", "float"); fcmp(1, 2.5); fcmp(2, 1.5); fcmp(1, 1); ffcast(234.6); ffcast(-2334.6);}
void dcmp(double a, double b){ printf("%d %d %d %d %d %d\n", a == b, a != b, a < b, a > b, a >= b, a <= b); printf("%f" " " "%f" " " "%f" " " "%f" " " "%f" " " "%f" " " "%f" "\n", a, b, a + b, a - b, a * b, a / b, -a); printf("%f" "\n", ++a); printf("%f" "\n", a++); printf("%f" "\n", a);}void dfcast(double a){ float fa; double da; long double la; int ia; unsigned int ua; double b; fa = a; da = a; la = a; printf("ftof: %f %f %Lf\n", fa, da, la); ia = (int)a; ua = (unsigned int)a; printf("ftoi: %d %u\n", ia, ua); ia = -1234; ua = 0x81234500; b = ia; printf("itof: " "%f" "\n", b); b = ua; printf("utof: " "%f" "\n", b);}void dtest(void){ printf("testing '%s'\n", "double"); dcmp(1, 2.5); dcmp(2, 1.5); dcmp(1, 1); dfcast(234.6); dfcast(-2334.6);}
void ldcmp(long double a, long double b){ printf("%d %d %d %d %d %d\n", a == b, a != b, a < b, a > b, a >= b, a <= b); printf("%Lf" " " "%Lf" " " "%Lf" " " "%Lf" " " "%Lf" " " "%Lf" " " "%Lf" "\n", a, b, a + b, a - b, a * b, a / b, -a); printf("%Lf" "\n", ++a); printf("%Lf" "\n", a++); printf("%Lf" "\n", a);}void ldfcast(long double a){ float fa; double da; long double la; int ia; unsigned int ua; long double b; fa = a; da = a; la = a; printf("ftof: %f %f %Lf\n", fa, da, la); ia = (int)a; ua = (unsigned int)a; printf("ftoi: %d %u\n", ia, ua); ia = -1234; ua = 0x81234500; b = ia; printf("itof: " "%Lf" "\n", b); b = ua; printf("utof: " "%Lf" "\n", b);}void ldtest(void){ printf("testing '%s'\n", "long double"); ldcmp(1, 2.5); ldcmp(2, 1.5); ldcmp(1, 1); ldfcast(234.6); ldfcast(-2334.6);}

double ftab1[3] = { 1.2, 3.4, -5.6 };


void float_test(void)
{
    float fa, fb;
    double da, db;
    int a;
    unsigned int b;

    printf("float_test:\n");
    printf("sizeof(float) = %d\n", sizeof(float));
    printf("sizeof(double) = %d\n", sizeof(double));
    printf("sizeof(long double) = %d\n", sizeof(long double));
    ftest();
    dtest();
    ldtest();
    printf("%f %f %f\n", ftab1[0], ftab1[1], ftab1[2]);
    printf("%f %f %f\n", 2.12, .5, 2.3e10);

    da = 123;
    printf("da=%f\n", da);
    fa = 123;
    printf("fa=%f\n", fa);
    a = 4000000000;
    da = a;
    printf("da = %f\n", da);
    b = 4000000000;
    db = b;
    printf("db = %f\n", db);
}

int fib(int n)
{
    if (n <= 2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

void funcptr_test()
{
    void (*func)(int);
    int a;
    struct {
        int dummy;
        void (*func)(int);
    } st1;

    printf("funcptr:\n");
    func = &num;
    (*func)(12345);
    func = num;
    a = 1;
    a = 1;
    func(12345);

    st1.func = num;
    st1.func(12346);
    printf("sizeof1 = %d\n", sizeof(funcptr_test));
    printf("sizeof2 = %d\n", sizeof funcptr_test);
    printf("sizeof3 = %d\n", sizeof(&funcptr_test));
    printf("sizeof4 = %d\n", sizeof &funcptr_test);
}

void lloptest(long long a, long long b)
{
    unsigned long long ua, ub;

    ua = a;
    ub = b;

    printf("arith: %Ld %Ld %Ld\n",
           a + b,
           a - b,
           a * b);

    if (b != 0) {
        printf("arith1: %Ld %Ld\n",
           a / b,
           a % b);
    }


    printf("bin: %Ld %Ld %Ld\n",
           a & b,
           a | b,
           a ^ b);


    printf("test: %d %d %d %d %d %d\n",
           a == b,
           a != b,
           a < b,
           a > b,
           a >= b,
           a <= b);

    printf("utest: %d %d %d %d %d %d\n",
           ua == ub,
           ua != ub,
           ua < ub,
           ua > ub,
           ua >= ub,
           ua <= ub);


    a++;
    b++;
    printf("arith2: %Ld %Ld\n", a, b);
    printf("arith2: %Ld %Ld\n", a++, b++);
    printf("arith2: %Ld %Ld\n", --a, --b);
    printf("arith2: %Ld %Ld\n", a, b);
}

void llshift(long long a, int b)
{
    printf("shift: %Ld %Ld %Ld\n",
           (unsigned long long)a >> b,
           a >> b,
           a << b);
    printf("shiftc: %Ld %Ld %Ld\n",
           (unsigned long long)a >> 3,
           a >> 3,
           a << 3);
    printf("shiftc: %Ld %Ld %Ld\n",
           (unsigned long long)a >> 35,
           a >> 35,
           a << 35);
}

void llfloat(void)
{
    float fa;
    double da;
    long double lda;
    long long la, lb, lc;
    unsigned long long ula, ulb, ulc;
    la = 0x12345678;
    ula = 0x72345678;
    la = (la << 20) | 0x12345;
    ula = ula << 33;
    printf("la=%Ld ula=%Lu\n", la, ula);

    fa = la;
    da = la;
    lda = la;
    printf("lltof: %f %f %Lf\n", fa, da, lda);

    la = fa;
    lb = da;
    lc = lda;
    printf("ftoll: %Ld %Ld %Ld\n", la, lb, lc);

    fa = ula;
    da = ula;
    lda = ula;
    printf("ulltof: %f %f %Lf\n", fa, da, lda);

    ula = fa;
    ulb = da;
    ulc = lda;
    printf("ftoull: %Lu %Lu %Lu\n", ula, ulb, ulc);
}

long long llfunc1(int a)
{
    return a * 2;
}

struct S {
    int id;
    char item;
};

long long int value(struct S *v)
{
    return ((long long int)v->item);
}

void longlong_test(void)
{
    long long a, b, c;
    int ia;
    unsigned int ua;
    printf("longlong_test:\n");
    printf("sizeof(long long) = %d\n", sizeof(long long));
    ia = -1;
    ua = -2;
    a = ia;
    b = ua;
    printf("%Ld %Ld\n", a, b);
    printf("%Ld %Ld %Ld %Lx\n",
           (long long)1,
           (long long)-2,
           1LL,
           0x1234567812345679);
    a = llfunc1(-3);
    printf("%Ld\n", a);

    lloptest(1000, 23);
    lloptest(0xff, 0x1234);
    b = 0x72345678 << 10;
    lloptest(-3, b);
    llshift(0x123, 5);
    llshift(-23, 5);
    b = 0x72345678LL << 10;
    llshift(b, 47);

    llfloat();

    b = 0x12345678;
    a = -1;
    c = a + b;
    printf("%Lx\n", c);



    {
          struct S a;

          a.item = 3;
          printf("%lld\n", value(&a));
    }
    lloptest(0x80000000, 0);


    {
        long long *p, v;
        v = 1;
        p = &v;
        p[0]++;
        printf("%lld\n", *p);
    }
}

void vprintf1(const char *fmt, ...)
{
    va_list ap;
    const char *p;
    int c, i;
    double d;
    long long ll;

    ap = ((char *)&(fmt)) + ((sizeof(fmt)+3)&~3);

    p = fmt;
    for(;;) {
        c = *p;
        if (c == '\0')
            break;
        p++;
        if (c == '%') {
            c = *p;
            switch(c) {
            case '\0':
                goto the_end;
            case 'd':
                i = (ap += (sizeof(int)+3)&~3, *(int *)(ap - ((sizeof(int)+3)&~3)));
                printf("%d", i);
                break;
            case 'f':
                d = (ap += (sizeof(double)+3)&~3, *(double *)(ap - ((sizeof(double)+3)&~3)));
                printf("%f", d);
                break;
            case 'l':
                ll = (ap += (sizeof(long long)+3)&~3, *(long long *)(ap - ((sizeof(long long)+3)&~3)));
                printf("%Ld", ll);
                break;
            }
            p++;
        } else {
            putchar(c);
        }
    }
 the_end:
    ;
}


void stdarg_test(void)
{
    vprintf1("%d %d %d\n", 1, 2, 3);
    vprintf1("%f %d %f\n", 1.0, 2, 3.0);
    vprintf1("%l %l %d %f\n", 1234567891234LL, 987654321986LL, 3, 1234.0);
}

void whitespace_test(void)
{
    char *str;



    printf("whitspace:\n");


    printf("N=%d\n", 2);


    printf("aaa=%d\n", 3);



    printf("min=%d\n", 4);
# 1724 "tcctest.c"
}

int reltab[3] = { 1, 2, 3 };

int *rel1 = &reltab[1];
int *rel2 = &reltab[2];

void relocation_test(void)
{
    printf("*rel1=%d\n", *rel1);
    printf("*rel2=%d\n", *rel2);
}

void old_style_f(a,b,c)
     int a, b;
     double c;
{
    printf("a=%d b=%d b=%f\n", a, b, c);
}

void decl_func1(int cmpfn())
{
    printf("cmpfn=%lx\n", (long)cmpfn);
}

void decl_func2(cmpfn)
int cmpfn();
{
    printf("cmpfn=%lx\n", (long)cmpfn);
}

void old_style_function(void)
{
    old_style_f((void *)1, 2, 3.0);
    decl_func1(((void *)0));
    decl_func2(((void *)0));
}

void sizeof_test(void)
{
    int a;
    int **ptr;

    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(unsigned int) = %d\n", sizeof(unsigned int));
    printf("sizeof(short) = %d\n", sizeof(short));
    printf("sizeof(unsigned short) = %d\n", sizeof(unsigned short));
    printf("sizeof(char) = %d\n", sizeof(char));
    printf("sizeof(unsigned char) = %d\n", sizeof(unsigned char));
    printf("sizeof(func) = %d\n", sizeof sizeof_test());
    a = 1;
    printf("sizeof(a++) = %d\n", sizeof a++);
    printf("a=%d\n", a);
    ptr = ((void *)0);
    printf("sizeof(**ptr) = %d\n", sizeof (**ptr));


    printf("__alignof__(int) = %d\n", __alignof__(int));
    printf("__alignof__(unsigned int) = %d\n", __alignof__(unsigned int));
    printf("__alignof__(short) = %d\n", __alignof__(short));
    printf("__alignof__(unsigned short) = %d\n", __alignof__(unsigned short));
    printf("__alignof__(char) = %d\n", __alignof__(char));
    printf("__alignof__(unsigned char) = %d\n", __alignof__(unsigned char));
    printf("__alignof__(func) = %d\n", __alignof__ sizeof_test());
}

void typeof_test(void)
{
    double a;
    typeof(a) b;
    typeof(float) c;

    a = 1.5;
    b = 2.5;
    c = 3.5;
    printf("a=%f b=%f c=%f\n", a, b, c);
}

void statement_expr_test(void)
{
    int a, i;

    a = 0;
    for(i=0;i<10;i++) {
        a += 1 +
            ( { int b, j;
                b = 0;
                for(j=0;j<5;j++)
                    b += j; b;
            } );
    }
    printf("a=%d\n", a);

}

void local_label_test(void)
{
    int a;
    goto l1;
 l2:
    a = 1 + ({
        __label__ l1, l2, l3, l4;
        goto l1;
    l4:
        printf("aa1\n");
        goto l3;
    l2:
        printf("aa3\n");
        goto l4;
    l1:
        printf("aa2\n");
        goto l2;
    l3:;
        1;
    });
    printf("a=%d\n", a);
    return;
 l4:
    printf("bb1\n");
    goto l2;
 l1:
    printf("bb2\n");
    goto l4;
}





static char * strncat1(char * dest,const char * src,size_t count)
{
int d0, d1, d2, d3;
__asm__ __volatile__(
 "repne\n\t"
 "scasb\n\t"
 "decl %1\n\t"
 "movl %8,%3\n"
 "1:\tdecl %3\n\t"
 "js 2f\n\t"
 "lodsb\n\t"
 "stosb\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n"
 "2:\txorl %2,%2\n\t"
 "stosb"
 : "=&S" (d0), "=&D" (d1), "=&a" (d2), "=&c" (d3)
 : "0" (src),"1" (dest),"2" (0),"3" (0xffffffff), "g" (count)
 : "memory");
return dest;
}

static inline void * memcpy1(void * to, const void * from, size_t n)
{
int d0, d1, d2;
__asm__ __volatile__(
 "rep ; movsl\n\t"
 "testb $2,%b4\n\t"
 "je 1f\n\t"
 "movsw\n"
 "1:\ttestb $1,%b4\n\t"
 "je 2f\n\t"
 "movsb\n"
 "2:"
 : "=&c" (d0), "=&D" (d1), "=&S" (d2)
 :"0" (n/4), "q" (n),"1" ((long) to),"2" ((long) from)
 : "memory");
return (to);
}

static __inline__ void sigaddset1(unsigned int *set, int _sig)
{
 __asm__("btsl %1,%0" : "=m"(*set) : "Ir"(_sig - 1) : "cc");
}

static __inline__ void sigdelset1(unsigned int *set, int _sig)
{
 asm("btrl %1,%0" : "=m"(*set) : "Ir"(_sig - 1) : "cc");
}

static __inline__ __const__ unsigned int swab32(unsigned int x)
{
 __asm__("xchgb %b0,%h0\n\t"
  "rorl $16,%0\n\t"
  "xchgb %b0,%h0"
  :"=q" (x)
  : "0" (x));
 return x;
}

static __inline__ unsigned long long mul64(unsigned int a, unsigned int b)
{
    unsigned long long res;
    __asm__("mull %2" : "=A" (res) : "a" (a), "r" (b));
    return res;
}

static __inline__ unsigned long long inc64(unsigned long long a)
{
    unsigned long long res;
    __asm__("addl $1, %%eax ; adcl $0, %%edx" : "=A" (res) : "A" (a));
    return res;
}

unsigned int set;

void asm_test(void)
{
    char buf[128];
    unsigned int val;

    printf("inline asm:\n");

    asm volatile ("xorl %eax, %eax");

    memcpy1(buf, "hello", 6);
    strncat1(buf, " worldXXXXX", 3);
    printf("%s\n", buf);


    printf("mul64=0x%Lx\n", mul64(0x12345678, 0xabcd1234));
    printf("inc64=0x%Lx\n", inc64(0x12345678ffffffff));

    set = 0xff;
    sigdelset1(&set, 2);
    sigaddset1(&set, 16);


    goto label1;
 label2:
    __asm__("btsl %1,%0" : "=m"(set) : "Ir"(20) : "cc");
    printf("set=0x%x\n", set);
    val = 0x01020304;
    printf("swab32(0x%08x) = 0x%0x\n", val, swab32(val));
    return;
 label1:
    goto label2;
}
# 1976 "tcctest.c"
int constant_p_var;

void builtin_test(void)
{

    { printf("__builtin_types_compatible_p(%s, %s) = %d\n", "int", "int", __builtin_types_compatible_p (int, int));};
    { printf("__builtin_types_compatible_p(%s, %s) = %d\n", "int", "unsigned int", __builtin_types_compatible_p (int, unsigned int));};
    { printf("__builtin_types_compatible_p(%s, %s) = %d\n", "int", "char", __builtin_types_compatible_p (int, char));};
    { printf("__builtin_types_compatible_p(%s, %s) = %d\n", "int", "const int", __builtin_types_compatible_p (int, const int));};
    { printf("__builtin_types_compatible_p(%s, %s) = %d\n", "int", "volatile int", __builtin_types_compatible_p (int, volatile int));};
    { printf("__builtin_types_compatible_p(%s, %s) = %d\n", "int *", "int *", __builtin_types_compatible_p (int *, int *));};
    { printf("__builtin_types_compatible_p(%s, %s) = %d\n", "int *", "void *", __builtin_types_compatible_p (int *, void *));};
    { printf("__builtin_types_compatible_p(%s, %s) = %d\n", "int *", "const int *", __builtin_types_compatible_p (int *, const int *));};
    { printf("__builtin_types_compatible_p(%s, %s) = %d\n", "char *", "unsigned char *", __builtin_types_compatible_p (char *, unsigned char *));};

    { printf("__builtin_types_compatible_p(%s, %s) = %d\n", "char * *", "void *", __builtin_types_compatible_p (char * *, void *));};

    printf("res = %d\n", __builtin_constant_p(1));
    printf("res = %d\n", __builtin_constant_p(1 + 2));
    printf("res = %d\n", __builtin_constant_p(&constant_p_var));
    printf("res = %d\n", __builtin_constant_p(constant_p_var));
}


void const_func(const int a)
{
}

void const_warn_test(void)
{
    const_func(1);
}
