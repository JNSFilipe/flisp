repl:
	mkdir -p build
	gcc -std=c99 -Wall repl.c -ledit -o build/repl
