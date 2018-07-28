#!/usr/bin/bash
git add ./
git commit -m "backup"
git remote add origin https://github.com/zhangfeiyue80/myyum.git
git pull origin master
