# Slides

[![pandoc](https://img.shields.io/static/v1?label=pandoc&message=2.9.1.1&color=yellowgreen&style=flat-square)](https://pandoc.org/)
[![texlive](https://img.shields.io/static/v1?label=TeXLive&message=2019&color=informational&style=flat-square)](https://www.tug.org/texlive/)
![report doc](https://img.shields.io/static/v1?label=docs&message=PDF&color=A9A9A9&style=flat-square)


Introduction \& Case Study (from Recent Top Conf Papers) to 

- Static Analysis
- Dynamic Analysis
- Symbolic Execution

Applications on Security

## Build

```
$pandoc -t beamer --template=default -s -o slides.tex main.md
$latexmk slides.tex
```