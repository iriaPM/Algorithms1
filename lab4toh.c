
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