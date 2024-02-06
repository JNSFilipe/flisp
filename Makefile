repl:
	mkdir -p build
	gcc -std=c17 -Wall src/repl.c -ledit -o build/repl
