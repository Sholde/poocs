set terminal png size 500,500

set output "velocities.png"

set title "particle velocities"

filelist = system("ls particle_velocities*")

plot for [filename in filelist] filename using 1:2

