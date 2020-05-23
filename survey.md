## IEEE S \& P

- [ ] [CaSym: Cache Aware Symbolic Execution for Side Channel Detection and Mitigation](https://www.computer.org/csdl/proceedings-article/sp/2019/666000a381/19skfzwrSeY) (*symbolic execution*) 2019
- [ ] [Touching the Untouchables: Dynamic Security Analysis of the LTE Control Plane](https://www.computer.org/csdl/proceedings-article/sp/2019/666000a646/19skfSiOrNC) (*dynamic analysis*) 2019
- [ ] [SymCerts: Practical Symbolic Execution For Exposing Noncompliance in X.509 Certificate Validation Implementations](https://www.ieee-security.org/TC/SP2017/papers/231.pdf) (*symbolic execution*) 2017

## ACM CCS

- [ ] [Where Does It Go? Refining Indirect-Call Targets with Multi-Layer Type Analysis](https://www-users.cs.umn.edu/~kjlu/papers/mlta.pdf) (*static analysis*) 2019
- [ ] [Learning to Fuzz from Symbolic Execution with Application to Smart Contracts](https://dl.acm.org/doi/abs/10.1145/3319535.3363230) (*symbolic execution*) 2019
- [ ] [JN-SAF: Precise and Efficient NDK/JNI-aware Inter-language Static Analysis Framework for Security Vetting of Android Applications with Native Code](https://dl.acm.org/doi/abs/10.1145/3243734.3243835) (*static analysis*) 2018
- [ ] [EviHunter: Identifying Digital Evidence in the Permanent Storage of Android Devices via Static Analysis](https://dl.acm.org/doi/abs/10.1145/3243734.3243808) (*static analysis*) 2018
- [ ] [**When Good Components Go Bad: Formally Secure Compilation Despite Dynamic Compromise**](https://dl.acm.org/doi/pdf/10.1145/3243734.3243745) (*dynamic analysis*) 2018
- [ ] [HexType: Efficient Detection of Type Confusion Errors for C++](https://dl.acm.org/doi/pdf/10.1145/3133956.3134062) (*static analysis*) 2017
- [ ] [FirmUSB: Vetting USB Device Firmware using Domain Informed Symbolic Execution](https://dl.acm.org/doi/abs/10.1145/3133956.3134050) (*symbolic execution*) 2017

## NDSS

- [ ] [**When Malware is Packin' Heat; Limits of Machine Learning Classifiers Based on Static Analysis Features**](https://www.ndss-symposium.org/wp-content/uploads/2020/02/24310-paper.pdf) (*static analysis*) 2020
  - [x] [slides](https://www.ndss-symposium.org/wp-content/uploads/24310-slides.pdf) & [video](https://www.youtube.com/watch?v=hMIEKFrRA-s&list=PLfUWWM-POgQtzInqz4v4Fk304JMYqKZvL&index=3&t=0s)
  - Experimental work, conclusion:
    - ML-based classifiers on Static Analysis Features can ignore the effect of packer
    - Static Analysis Features can not be generalized to unseen malware category
    - dataset & toolchain: https://github.com/ucsb-seclab/packware
- [ ] [Analyzing Semantic Correctness with Symbolic Execution: A Case Study on PKCS\#1 v1.5 Signature Verification](https://www.ndss-symposium.org/wp-content/uploads/2019/02/ndss2019_04A-4_Chau_paper.pdf) (*symbolic execution*) 2019
- [ ] [Neuro-Symbolic Execution: Augmenting Symbolic Execution with Neural Constraints](https://www.ndss-symposium.org/wp-content/uploads/2019/02/ndss2019_11-3_Shiqi_paper.pdf) (*symbolic execution*) 2019
- [ ] [Securing Real-Time Microcontroller Systems through Customized Memory View Switching](https://www.ndss-symposium.org/wp-content/uploads/2018/02/ndss2018_04B-2_Kim_paper.pdf) (*static analysis*) 2018
- [ ] [Automated Generation of Event-Oriented Exploits in Android Hybrid Apps](https://www.ndss-symposium.org/wp-content/uploads/2018/02/ndss2018_04B-3_Yang_paper.pdf) (*static analysis \& symbolic execution*) 2018
- [ ] [K-Miner: Uncovering Memory Corruption in Linux](https://www.ndss-symposium.org/wp-content/uploads/2018/02/ndss2018_05A-1_Gens_paper.pdf) (*static analysis*) 2018
- [ ] [SYNODE: Understanding and Automatically Preventing Injection Attacks on NODE.JS](https://www.ndss-symposium.org/wp-content/uploads/2018/02/ndss2018_07A-2_Staicu_paper.pdf) (*static analysis*) 2018
- [ ] [Riding out DOMsday: Towards Detecting and Preventing DOM Cross-Site Scripting](https://www.ndss-symposium.org/wp-content/uploads/2018/02/ndss2018_07A-4_Melicher_paper.pdf) (*static analysis & dynamic analysis*) 2018
- [ ] [MCI : Modeling-based Causality Inference in Audit Logging for Attack Investigation](https://www.ndss-symposium.org/wp-content/uploads/2018/02/ndss2018_07B-2_Kwon_paper.pdf) (*dynamic analysis*) 2018

## USENIX security

- [ ] [Charm: Facilitating Dynamic Analysis of Device Drivers of Mobile Systems](https://www.usenix.org/conference/usenixsecurity18/presentation/talebi) (*dynamic analysis*) 2018
- [ ] [Discovering Flaws in Security-Focused Static Analysis Tools for Android using Systematic Mutation](https://www.usenix.org/conference/usenixsecurity18/presentation/bonett) (*static analysis*) 2018
- [ ] [Predicting the Resilience of Obfuscated Code Against Symbolic Execution Attacks via Machine Learning](https://www.usenix.org/conference/usenixsecurity17/technical-sessions/presentation/banescu) (*symbolic execution*) 2017
- [ ] [Dead Store Elimination (Still) Considered Harmful](https://www.usenix.org/conference/usenixsecurity17/technical-sessions/presentation/yang)

## RAID

- [ ] [PartiSan: Fast and Flexible Sanitization via Run-time Partitioning](https://arxiv.org/pdf/1711.08108.pdf) (*dynamic analysis*) 2018
- [ ] [Static Program Analysis as a Fuzzing Aid](http://eprints.cs.univie.ac.at/5508/1/7-static.pdf) (*static analysis & dynamic analysis*) 2017

## Miscellaneous

- [ ] [Fuzzing](https://en.wikipedia.org/wiki/Fuzzing)
- [ ] [Program Analysis Note](https://github.com/GaloisNeko/program-analysis-note)
- [x] [Talk: Contemporary Automatic Program Analysis](https://www.youtube.com/watch?v=P0nHId1umvY) and [its slides](https://www.blackhat.com/docs/us-14/materials/us-14-Cohen-Comtemporary-Automatic-Program-Analysis.pdf)
    - A nice glance at *open source* tools based on program analysis to find vulnerabilities
- [ ] [Bouncer: Securing Software by Blocking Bad Input](https://dl.acm.org/doi/pdf/10.1145/1323293.1294274): *Symbolic Execution \& static analysis*, Old, but important. mentioned in [Using Safety Properties to Generate Vulnerability Patches (SP 19)](https://www.computer.org/csdl/proceedings-article/sp/2019/666000b174/19skgcZPlJe) 2017
- [x] [**Unacceptable Behavior: Robust PDF Malware Detection Using Abstract Interpretation**](https://dl.acm.org/doi/10.1145/3338504.3357341): *abstract interprete/static analysis* Interesting, Accepted in [PLAS 2019](https://www.andrew.cmu.edu/user/pmardzie/plas2019/), which is Co-located with ACM CCS 2019.
   - An interesting application: use abstract interpretation to **conservatively** (*high recall*) find out all **undefined** behaviors (the behaviors apart from *whitelist*) in extracted `javascript` code from PDF files.
- [ ] [A Recursive Strategy for Symbolic Execution to Find Exploits in Hardware Designs](https://dl.acm.org/doi/abs/10.1145/3219763.3219764): *symbolic execution*, Accepted in FMS 2018 (a workshop hold by PLDI 2018)