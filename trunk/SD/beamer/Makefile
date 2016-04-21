all: beamer.pdf

#
# Beamer
#
beamer.pdf: beamer.tex preamble.tex
	pdflatex -shell-escape beamer
	pdflatex -shell-escape beamer

clean:
	rm -f *.log *.aux *.out *.nav *.snm *.toc *.vrb *.pyg *.bbl *.blg

clobber: clean
	rm -f beamer.pdf

final:
	cp beamer.pdf proxy-pattern.pdf

