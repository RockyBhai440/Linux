Graph: Trend.tex Data.txt
	latexmk Trend.tex
	open Trend.pdf
Data.txt: Value.c
	gcc Value.c -lm
	./a.out
clean: 
	rm -f *.out *.txt *.aux *.fls *.log *.pdf *.synctex.gz *.fdb_latexmk