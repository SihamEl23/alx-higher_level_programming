#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    mat = []
    for i in range(len(matrix)):
        row = []
        for j in range(len(matrix[i])):
            row.append(matrix[i][j] ** 2)
        mat.append(row)
    return mat
