# Examples for LART Programming Language

## Index

| file | content |
| --- | --- |
| [hello.lart](hello.lart) | Rule 110 implementation in order to prove the general purpose and turing complete nature of the language |
| [bad-syntax.lart](bad-syntax.lart) | example of wrong syntax to be used for debugging of `lartc` |
| [bad-name-resolution.lart](bad-name-resolution.lart) | example of wrong name resolution to be used for debugging of `lartc` |
| [bad-type-checking.lart](bad-type-checking.lart) | example of wrong type checking to be used for debugging of `lartc` |
| [bad-decl-type-checking.lart](bad-decl-type-checking.lart) | example of wrong decl type checking to be used for debugging of `lartc` |
| [bad-duplicate-definition.lart](bad-duplicate-definition.lart) | example of wrong duplicate definition to be used for debugging of `lartc` |
| [bad-include-directories.lart](bad-include-directories.lart) | example of wrong include directories to be used for debugging of `lartc` |
| [tree.lart](tree.lart) | Tree data structure implementation in LART |
| [chatgpt.lart](chatgpt.lart) | Rule 110 implementation produced by ChatGPT with `tree.lart` as input of example lart language. It also uses `capi.c` functions. |
| [merging-declarations.lart](merging-declarations.lart) | Declares and defines some functions multiple times with their own module as proof of work of deduplication mechanism |
| [include-files.lart](include-files.lart) | Includes [types.lart](types.lart) and [stdlib.lart](stdlib.lart) |
| [stdlib.lart](stdlib.lart) | Declares some LibC functions |
| [types.lart](types.lart) | Declares some types |
| [strucs.lart](strucs.lart) | Uses some structs |
| [strucs-as-rvalue.lart](strucs-as-rvalue.lart) | Uses some structs as rvalue |
| [capi.c](capi.c) | It's a C-file that shows how bindings can be used from a [LART-file](chatgpt.lart) |
| [array_access.lart](array_access.lart) | Uses array access instead of dereference+sum |
| [ts.lart](ts.lart) | Uses Tree Sitter to parse the file itself from LART language as binding, proving that somehow the ABI is working |

## Notes

### Object Files

Lart compile doesn't check if an input file is written in a foreign source code (for example in C language) but only if it's an object file (it will warn you with an `error` when a file is not recognized).
Once you have compiled a source file into object file, it's ready to be included among `lartc` command line arguments.
