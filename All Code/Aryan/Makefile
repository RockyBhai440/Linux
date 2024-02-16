all:
	make createplot
	make showlatex

createplot: CreateValue.c
	gcc CreateValue.c -o object
	./object > place.txt

showlatex: graph.tex
	pdflatex graph.tex
	open graph.pdf

clear: 
	rm -f *.aux *.fls *.log *.pdf *.fdb_latexmk *object *.txt