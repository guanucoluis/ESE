all: reporte.pdf

#
# Reporte
#
reporte.pdf: reporte.tex
	pdflatex -shell-escape reporte
	pdflatex -shell-escape reporte

clean:
	rm -f *.log *.aux *.out *.nav *.snm *.toc *.vrb *.pyg *.bbl *.blg

clobber: clean
	rm -f reporte.pdf

