# Nginx Configuration of USTC Blog

This folder should be checkout in ```op```'s home directory and symlinked to ```/etc/nginx```.


## How to change nginx settings

If you do not have a copy of this repository, clone it from ```gitlab.lug.ustc.edu.cn```. Please do NOT modify nginx settings directly on the server.

1. Make change on your own computer. If it is an experimental change, test it before commit.
2. Commit and push the change to gitlab.
3. Login to ```blog.ustc.edu.cn```
4. ```sudo -u op -i```
5. ```cd blog-nginx```
6. ```git pull```
7. ```sudo /etc/init.d/nginx reload```

Note that ```op``` user is only allowed to run ```/etc/init.d/nginx``` via sudo.

## FAQ

**```git pull``` failed on the server**

1. ```git status``` to check local modifications. If there are valueable changes, copy it to the repository on your own machine.
2. ```git reset --hard HEAD``` to go back to the last clean state.
3. ```git pull```

**I cannot ```git push``` on the server**

The key of ```op``` user is added as a deploy key. It do not have write permission.

Please make changes on your own machine, commit, push, then pull on the server.

**```sudo service nginx reload``` does not work**

Please use ```sudo /etc/init.d/nginx reload``` instead.

**```git status``` shows a untracked file ```conf.d/gitlab.key``` and it is not readable**

```conf.d/gitlab.key``` is secret and should not be added into this repository. Please do NOT change this file.
