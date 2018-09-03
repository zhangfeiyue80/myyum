#!/usr/bin/bash
date_time=$(date)

git add ./
<<<<<<< HEAD
git commit -m "20180903"
=======
git commit -m "${date_time} CSAPP study"
>>>>>>> bce97da9878b9717a34151ffe5803dc0d84191e2
git remote add origin https://github.com/zhangfeiyue80/myyum.git
git push origin master
