# Nginx Configuration of USTC Blog

This folder should be checkout in ```op```'s home directory and symlinked to ```/etc/nginx```.

WARNING: ```conf.d/gitlab.key``` is secret and should not be added into this repository!

## How to change nginx settings

If you do not have a copy of this repository, clone it from ```gitlab```. Please do NOT modify nginx settings directly on the server.

1. Make change on your own computer. If it is an experimental change, test it before commit.
2. Commit and push the change to gitlab.
3. Login to ```blog.ustc.edu.cn```
4. ```sudo -u op -i```
5. ```cd blog-nginx```
6. ```git pull```
7. ```sudo /etc/init.d/nginx reload```

Note that ```op``` user is only allowed to run ```/etc/init.d/nginx``` via sudo.

