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

# Static Analysis

## Case 1: Detect PDF Malware

### Case 1: Malicious `JavaScript` PDF Extension

sample \footfullcite{jordan2019unacceptable}

### Code {.fragile}

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

