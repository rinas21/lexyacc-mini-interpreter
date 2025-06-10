// 1. Enumeration for TokenType: Defines all possible categories of tokens.
typedef enum {
    // Keywords (e.g., IF_TOKEN, WHILE_TOKEN, ELSE_TOKEN, etc.)
    ELSE_TOKEN, INTEGER_TOKEN, SELF_TOKEN, FLOAT_TOKEN, ISA_TOKEN, CONSTRUCT_TOKEN, FUNC_TOKEN,
    PRIVATE_TOKEN, THEN_TOKEN, IF_TOKEN, PUBLIC_TOKEN, LOCAL_TOKEN, IMPLEMENT_TOKEN, READ_TOKEN,
    VOID_TOKEN, AND_TOKEN, CLASS_TOKEN, OR_TOKEN, RETURN_TOKEN, WHILE_TOKEN, ATTRIBUTE_TOKEN,
    WRITE_TOKEN, NOT_TOKEN,

    // Identifiers
    IDENTIFIER,

    // Constants
    INTEGER_CONSTANT, FLOATING_POINT_CONSTANT,

    // Operators and Punctuation (e.g., ASSIGN_OP, PLUS_OP, LPAREN, SEMICOLON, etc.)
    ASSIGN_OP, EQ_OP, NEQ_OP, LEQ_OP, GEQ_OP, LT_OP, GT_OP, PLUS_OP, MINUS_OP, MUL_OP, DIV_OP,
    LPAREN, RPAREN, LBRACE, RBRACE, LBRACKET, RBRACKET, SEMICOLON, COMMA, DOT, COLON, ARROW,

    // Special Markers
    EOF_TOKEN,   // Indicates the end of the input file
    ERROR_TOKEN  // Indicates a lexical error (unrecognized character sequence)
} TokenType;

// 2. The Token Structure: Encapsulates all information about a single recognized token.
typedef struct {
    TokenType type;       // The category or type of the token (from the TokenType enum)
    char *lexeme;         // A pointer to the actual string of characters that formed this token
                          // (e.g., "myVariable", "123", "3.14e-5"). This might point directly
                          // into the source buffer or be a dynamically allocated copy.
    int lineNumber;       // The line number in the source file where this token begins.
    int columnNumber;     // The column number within that line where this token begins.
} Token;