# Slides

[![pandoc](https://img.shields.io/static/v1?label=pandoc&message=2.9.1.1&color=yellowgreen&style=flat-square)](https://pandoc.org/)
[![texlive](https://img.shields.io/static/v1?label=TeXLive&message=2019&color=informational&style=flat-square)](https://www.tug.org/texlive/)
![report doc](https://img.shields.io/static/v1?label=docs&message=PDF&color=A9A9A9&style=flat-square)
[![slides doc](https://img.shields.io/static/v1?label=slides&message=passing&color=success&style=flat-square)](./slides.pdf)
[![handout doc](https://img.shields.io/static/v1?label=handout&message=passing&color=success&style=flat-square)](./handout.pdf)


Introduction \& Case Study (from Recent Top Conf Papers) to 

- Static Analysis
- Dynamic Analysis
- Symbolic Execution

Applications on Security

## Build

All slides are directly built based on [main.md](./main.md). If you want to modify the content in the slides, just edit this file.

To generate [slides](./slides.pdf) for presentation:

```
make slides
```

To generate [handout](./handout.pdf) for reading:

```
make handout
```

To generate both of them together:

```
make
```

Remove temp files:

```
make clean
```

## Settings

The styles of documents are controlled by those configuration files:

- [`src/code_style.tex`](./src/code_style.tex): *code block highlight style*
- [`src/default.beamer`](./src/default.beamer): *beamer template*
- [`src/macro.tex`](./src/macro.tex): *macro definition*
- [`conf.yaml`](./conf.yaml): *build options*