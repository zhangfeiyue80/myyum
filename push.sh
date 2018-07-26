#!/usr/bin/bash
date_time=$(date)

git add ./
git commit -m "${date_time} CSAPP study"
git remote add origin https://github.com/zhangfeiyue80/myyum.git
git push origin master
