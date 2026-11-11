# LaTeX Documentation

## Introduction

LaTeX is a document preparation system used to create professional and well-formatted documents. It is widely used for academic papers, technical reports, research papers, books, and mathematical documents.

Unlike ordinary word processors, LaTeX focuses on the structure and content of a document rather than manual formatting.

## Features of LaTeX

- Professional document formatting.
- Easy creation of mathematical equations.
- Automatic numbering of sections, figures, and tables.
- Supports references and citations.
- Suitable for research papers and technical reports.
- Provides consistent document formatting.

## Basic Structure of a LaTeX Document

A basic LaTeX document contains three main parts:

1. Document class
2. Preamble
3. Document environment

Example:

```latex
\documentclass{article}

\begin{document}

Hello World!

\end{document}
```

## Common LaTeX Commands

| Command | Purpose |
|---|---|
| `\documentclass{article}` | Defines document type |
| `\usepackage{amsmath}` | Supports mathematical equations |
| `\title{Title}` | Sets document title |
| `\author{Name}` | Sets author name |
| `\maketitle` | Displays title |
| `\section{Introduction}` | Creates a section |
| `\textbf{Text}` | Makes text bold |
| `\textit{Text}` | Makes text italic |
| `\begin{itemize}` | Starts a bullet list |
| `\end{itemize}` | Ends a bullet list |

## Mathematical Equations

LaTeX is especially useful for writing mathematical expressions.

Example:

```latex
\[
a^2+b^2=c^2
\]
```

Another example:

```latex
\[
x=\frac{-b\pm\sqrt{b^2-4ac}}{2a}
\]
```

## Lists in LaTeX

### Unordered List

```latex
\begin{itemize}
\item Mathematics
\item Physics
\item Computer Science
\end{itemize}
```

### Ordered List

```latex
\begin{enumerate}
\item Introduction
\item Main Content
\item Conclusion
\end{enumerate}
```

## Tables in LaTeX

Tables can be created using the `tabular` environment.

Example:

```latex
\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Aman & 90 \\
Riya & 95 \\
\hline
\end{tabular}
```

## Advantages of LaTeX

- Produces high-quality documents.
- Handles complex mathematical expressions.
- Automatically manages numbering and references.
- Useful for large technical documents.
- Provides consistent formatting.

## Conclusion

LaTeX is an important tool in Technical Writing because it helps users prepare structured, professional, and high-quality technical documents.