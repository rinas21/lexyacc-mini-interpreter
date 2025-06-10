# lexyacc-mini-interpreter

#### Process flow
```mermaid
flowchart TD
    A[Source Code Input] --> B[Lexical Analyzer<br/>calc3.l]
    B --> |Token Stream| C[Parser<br/>calc3.y]
    C --> D[Abstract Syntax Tree<br/>AST Nodes: con, id, opr]
    D --> E[Interpreter/Evaluator<br/>ex function]
    E --> F[Program Output]
    
    subgraph LEX ["Lexical Analysis"]
        B1[Keywords<br/>while, if, else, print]
        B2[Operators<br/>+, -, *, /, ==, !=, <, >, etc]
        B3[Identifiers<br/>Variables a-z]
        B4[Literals<br/>Integers, Numbers]
        B5[Delimiters<br/>Whitespace, Semicolons]
    end
    
    subgraph PARSE ["Parsing & AST Construction"]
        C1[Statements<br/>assignment, print, if, while, compound]
        C2[Expressions<br/>arithmetic, relational, logical]
        C3[AST Node Types<br/>• con: constants<br/>• id: identifiers<br/>• opr: operators]
    end
    
    LEX --> B
    PARSE --> C
    
    B --> |Tokens| D
    
    style A fill:#e1f5fe,stroke:#01579b,stroke-width:2px
    style F fill:#e8f5e8,stroke:#2e7d32,stroke-width:2px
    style B fill:#fff3e0,stroke:#ef6c00
    style C fill:#fff3e0,stroke:#ef6c00
    style D fill:#f3e5f5,stroke:#7b1fa2
    style E fill:#f3e5f5,stroke:#7b1fa2
    style LEX fill:#fff8e1
    style PARSE fill:#f1f8e9

```bash

 rm -f y.tab.c y.tab.h y.output calc3.tab.c calc3.tab.h a.out calc3
```