#ifndef TOKEN_H
#define TOKEN_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <regex.h>

#define REGEX_COUNT 79


/* token_t enum */
typedef enum {
	/* registers */
	T_REG00 = 0,
	T_REG01,
	T_REG02,
	T_REG03,
	T_REG04,
	T_REG05,
	T_REG06,
	T_REG07,
	T_REG08,
	T_REG09,
	T_REG10,
	T_REG11,
	T_REG12,
	T_REG13,
	T_REG14,
	T_REG15,
	T_REG16,
	T_REG17,
	T_REG18,
	T_REG19,
	T_REG20,
	T_REG21,
	T_REG22,
	T_REG23,
	T_REG24,
	T_REG25,
	T_REG26,
	T_REG27,
	T_REG28,
	T_REG29,
	T_REG30,
	T_REG31,
	// instructions 
	T_LD,
	T_ST,
	T_JMP,
	T_BEQ,
	T_BNE,
	T_ADD,
	T_SUB,
	T_MUL,
	T_DIV,
	T_CMPEQ,
	T_CMPLT,
	T_CMPLE,
	T_AND,
	T_OR,
	T_XOR,
	T_XNOR,
	T_SHL,
	T_SHR,
	T_SRA,
	T_ADDC,
	T_SUBC,
	T_MULC,
	T_DIVC,
	T_CMPEQC,
	T_CMPLTC,
	T_CMPLEC,
	T_ANDC,
	T_ORC,
	T_XORC,
	T_XNORC,
	T_SHLC,
	T_SHRC,
	T_SRAC,
	T_NOP,
	// directives 
	T_PROG,
	T_DATA,
	// memory stuff 
	T_ALLOCATE,
	// literal
	T_LITERAL_DECIMAL,
	T_LITERAL_HEXADECIMAL,
	T_LITERAL_BINARY,
	// variable name 
	T_VARIABLE,
	/**/
	T_LABEL,
	/* not to be compared with */
	// universal reg type 
	T_REG,
	// error 
	T_ERR,
	T_END
} token_type_t;


typedef struct {
    char            value[30];
    //token_class_t   class;
    token_type_t    type;
    int             line;
} token_t;


int
is_all_num(const char *s);


void
print_token_info(token_t t);


int
generate_regexes(void);


void
free_regexes(void);


void
print_token_info(token_t t);


token_type_t
get_token_type(const char *word);

#endif /* TOKEN_H */
