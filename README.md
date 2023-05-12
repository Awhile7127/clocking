# clocking


## Description

A simple command-line utility to keep track of how long you've been working.

Written in C++.


## Compiling

Simply run `make`.


## Usage

```
./clocking
```

The program works on the premise that you execute it when you start working
on something.

Once you've finished working, enter a description as prompted,
then press return.

The duration of work and the datetime will be automatically calculated.

This data is then appended to a `.csv` file in the directory of execution.
The file defaults to being called `tracker.csv`.


## tracker.csv formatting

```
YYYY-MM-DD,Xu,Foobar
```

Where `X` is an integer and `u` is a character representing the quantity of
time.
