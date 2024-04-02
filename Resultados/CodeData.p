set datafile separator ","
plot "ResultadosMinMax1.csv" using 1:2 with lp lw 3.0 lc 7 title "Vetor desordenado", "ResultadosMinMax1.csv" using 3:4 with lines lw 3.0 title "Vetor ordenado crescente","ResultadosMinMax1.csv" using 5:6 with lines lw 3.0 title "Vetor ordenado decrescente"   
set title "MinMax1"
set xlabel "Tamanho dos vetores"
set ylabel "Médias de tempo"
set xrange [0:500000]
set yrange [0:5000000]
set grid 

set term png size 950, 1450
set output "Datasets.png"
replot
