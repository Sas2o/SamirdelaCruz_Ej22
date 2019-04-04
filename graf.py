#!/usr/bin/env python
# coding: utf-8
import numpy as np
import matplotlib.pyplot as plt
import os

os.system("g++ c1.cpp -o pas.x")
os.system("./pas.x > datos.txt")
datos = np.loadtxt("datos.txt")
plt.figure()
plt.hist(datos,bins=60)
plt.savefig("Histograma de puntos")