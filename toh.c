
/*  Iria Parada 
    13/2/23
    tower of hanoi
    lab2 q3

/*

/*
movetower (disks, source, dest, spare)
{
    if disk = 0;
        move disk from source to dest 
    else
        movetower(disk-1, source, spare, dest)
        move disk from source to dest 
        movetower(disk-1, spare, dest, source)
}
*/



/* pseudocode

start program movetower

input num of disks 

declare movetower(int, char, char ,char);

main 
    read num;
    print  num A,B,C,D (disks)

end main


movetower (disks, source, dest, spare)
{
    if disk = 0;
        print  move disk from source to dest 

    else
        movetower(disk-1, source, spare, dest)
        print  move disk from source to dest 
        movetower(disk-1, spare, dest, source)

}end movetower


*/