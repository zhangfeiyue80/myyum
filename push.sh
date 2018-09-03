#!/usr/bin/bash
date_time=$(date)

git add ./
git commit -m "20180903"
git remote add origin https://github.com/zhangfeiyue80/myyum.git
git push origin master
