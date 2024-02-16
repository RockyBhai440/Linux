Final: main.o value.o
	gcc main.c value.c -o final
main.o: main.c header.h
	gcc -c main.c 
value.o: value.c header.h
	gcc -c value.c
open: graph.pdf
	evince graph.pdf
graph.pdf: graph.tex
	pdflatex graph.tex
clean:
	rm -f *.txt *.aux *.fdb_latexmk *.fls *.log *.pdf *.synctex.gz *.o value final