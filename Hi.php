$file;

$pieces = extract($file, " ", 174);
$walls2;
for($i =0; $i<170; $i++){
$walls2[$i] = $pieces[$i+3];
}

$walls;
for($y =0; $y<10; $y++){
for($x =0; $x<17; $x++){
$walls[$y][$x]=$walls2[(y*17)+x-1];
}
}
