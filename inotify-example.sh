while true #run indefinitely
do 
inotifywait -r -e modify,attrib,close_write,move,create,delete ~/Learning/code/SandBox/unity
done
