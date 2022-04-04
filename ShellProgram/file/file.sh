if [ -r $1 ]
then
   echo "文件可读"
else
   echo "文件不可读"
fi
if [ -w $1 ]
then
   echo "文件可写"
else
   echo "文件不可写"
fi
if [ -x $1 ]
then
   echo "文件可执行"
else
   echo "文件不可执行"
fi
if [ -f $1 ]
then
   echo "文件为普通文件"
else
   echo "文件为特殊文件"
fi
if [ -d $1 ]
then
   echo "文件是个目录"
else
   echo "文件不是个目录"
fi
if [ -s $1 ]
then
   echo "文件不为空"
else
   echo "文件为空"
fi
if [ -e $1 ]
then
   echo "文件存在"
else
   echo "文件不存在"
fi
