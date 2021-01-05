#!/bin/bash

rm -rf particle_*
../build/src/main $@
gnuplot pos.p
gnuplot vel.p
