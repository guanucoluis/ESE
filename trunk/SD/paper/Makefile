bare_conf.pdf: bare_conf.tex
	pdflatex $^
	pdflatex $^
	pdflatex $^

show:
	evince bare_conf.pdf &

clean:
	rm bare_conf.pdf
	rm bare_conf.log
	rm bare_conf.aux
