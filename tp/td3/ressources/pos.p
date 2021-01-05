set terminal png size 500,500

set output "positions.png"

set title "particle positions"

filelist = system("ls particle_position*")

plot for [filename in filelist] filename using 1:2

