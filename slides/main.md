---
title: The Applications of Some Programm Analysis Technologies in Security
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
aspectratio: 169
---


# Background

## Definition

### Definition: What is a Program Analyzer?

*A program that takes other programs as input and decides whether or not they have a certain **property**.* \footfullcite{spa} 


#### \red{Static} Analysis

- Analysis of programs \red{without} executing
  <!-- be careful about non-trivial -->
- Reason for \red{non-trivial} properties

#### \blue{Dynamic} Analysis

- Analysis of programs \blue{by actual} executing
- Common \blue{testing} methods for a desire property

#### Symbolic Execution

- Analysis of programs by \blue{executing} with \red{\textbf{symbolic}} inputs
- Determine what inputs cause each part of a program to execute


## Limitation

### No Free Lunch

\framesubtitle{Limitations of Program Analysis}

> Program testing can be used to show the presence of bugs, but never to show their absence. \footfullcite{EWD249}

. . .

#### Rice's theorem \footfullcite{rice1953classes}

All interesting questions about the behavior (*i.e. non-trivial properties* ) of programs (written in \gray{Turing-complete programming languages})  are **undecidable**. 


# Motivation

### Motivation: To-do

table

- pro/cons
- case/ref

# Static Analysis

## Case 1: Detect PDF Malware

### `SAFE-PDF`\footfullcite{jordan2019unacceptable}: Detect Malicious Embedded`Javascript` in PDFs

\framesubtitle{PLAS 2019 / Oracle / University of Sydney}

Methodology:

1. [**Outside In**](https://www.oracle.com/middleware/technologies/webcenter/outside-in-technology.html): commercial `js` code extractor 
2. **Abstract interpretation**: Main technology
3. **Semantic whitelist**: Classify if the behavior is accepted

Results: Conservative, compared to SOTA PDF Malware detectors

1. Higher *recall*, acceptable *accuracy*
2. Resilient to evasions attack (`Chameleon` dataset)
3. Most of *positive* reports are readily interpretable


# Dynamic Analysis

# Symbolic Execution

