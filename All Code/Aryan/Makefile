all:
	make createplot
	make showlatex

createplot: CreateValue.c
	gcc CreateValue.c -o object
	./object > place.txt

showlatex: graph.tex
	pdflatex graph.tex