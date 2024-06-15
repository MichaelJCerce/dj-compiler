dj-tc: scanner/dj.l parser/dj.y parser/dj.tab.c parser/ast.c typechecker/symtbl.c typechecker/typecheck.c
	gcc parser/dj.tab.c parser/ast.c typechecker/symtbl.o typechecker/typecheck.c -o dj-tc 
