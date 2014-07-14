for FILENAME in $(ls *.txt);
do mv $FILENAME renamed_$FILENAME; 
done
echo $(ls *.txt)
