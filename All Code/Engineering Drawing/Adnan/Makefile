Graph: graph.tex Data
	latexmk graph.tex
	open graph.pdf
Data: main.c
	gcc main.c -lm
	./a.out > data
Clean:
	rm -f *.out *.aux *.fls *.log *.pdf *.fdb_latexmk
