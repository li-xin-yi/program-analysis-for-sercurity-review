all: slides handout

slides:	main.md
	pandoc -t beamer -d conf -o slides.tex main.md
	latexmk -silent -pdf -use-make  slides.tex

handout: main.md
	pandoc -t beamer -d conf -V handout -V navigation=empty -o handout.tex main.md
	latexmk -silent -pdf -use-make handout.tex

clean:
	rm -f *.fls *.aux *.nav *.log *.toc *.fdb_latexmk *.vrb *.bbl *blg *.snm *.synctex.gz *.run.xml slides.tex handout.tex
