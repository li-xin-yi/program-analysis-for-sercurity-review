---
title: Static Analysis, Dynamic Analysis and Symbolic Execution Techniques Applied to Security
subtitle: Introduction \& Case Study
author: Xinyi Li
date: \today{}
theme: default
colortheme: seagull
secnumdepth: 3
section-titles: false
toc: true
biblatex: true
bibliography: ref.bib
navigation: horizontal
toc-title: Overview
---

# Background

### Program Analyzer

 A program that takes other programs as input and decides whether or not they have a certain **property** \footfullcite{spa}. 


#### \red<2>{Static} Analysis

- Analysis of programs \red<2>{without} executing
- Reason for \red<2>{non-trivial} properties

#### \blue<2>{Dynamic} Analysis

- Analysis of programs \blue<2>{by actual} executing
- Common \blue<2>{testing} methods for a desire property

#### Symbolic Execution

- Analysis of programs by \blue<2>{executing} with \red<2>{\textbf{symbolic}} inputs
- Determine what inputs cause each part of a program to execute

### No Free Lunch

\framesubtitle{Limitations of Program Analysis}

> Program testing can be used to show the presence of bugs, but never to show their absence. \footfullcite{EWD249}

. . .

#### Rice's theorem \footfullcite{rice1953classes}

All interesting questions about the behavior (*i.e. non-trivial properties* ) of programs (written in \gray{Turing-complete programming languages})  are **undecidable**. 



# Static Analysis

## Case 1: Detect PDF Malware

### `SAFE-PDF`\footfullcite{jordan2019unacceptable}: Detect Malicious `Javascript` in PDFs

\framesubtitle{PLAS 2019 / Oracle / University of Sydney}

`JavaScript` programs embedded in PDFs implement some **advanced** features:

  1. control embedded multimedia objects
  2. interact with the file system or network

However, it may be utilized for **malicious** intentions.



### Code

```python
while not q.empty():
    p = q.get()
    p_list = os.listdir(p)
    for i in p_list:
        temp_p = os.path.join(p, i)
        if os.path.isdir(temp_p):
            q.put(temp_p)
            continue
        # do something
        print(temp_p)
```

# Dynamic Analysis

# Symbolic Execution

