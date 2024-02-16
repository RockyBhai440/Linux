TEX_FILE = random.tex
OUTPUT_FILE = $(basename $(TEX_FILE)).pdf

all: $(OUTPUT_FILE)

$(OUTPUT_FILE): $(TEX_FILE) userData.csv
	pdflatex $(TEX_FILE)

clean: 
	rm -f *.csv *.aux *.log $(OUTPUT_FILE) main
