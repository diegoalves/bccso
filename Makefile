all: pi_proc pi_proc.pdf

pi_proc:
	gcc pi_proc.c -o pi_proc

pi_proc.pdf:
	pdflatex pi_proc.tex
	@rm -f pi_proc.aux
	@rm -f pi_proc.log

clean:
	@rm -f pi_proc
	@rm -f pi_proc.pdf
	@rm -f pi_proc.aux
	@rm -f pi_proc.log

