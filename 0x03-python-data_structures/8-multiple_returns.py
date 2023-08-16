#!/usr/bin/python3
def multiple_returns(sentence):
    if sentence == "":
        first = None
    else:
        first = sentence[0]
    Len = len(sentence)
    return (Len, first)
