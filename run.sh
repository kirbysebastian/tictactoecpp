#! /bin/bash

docker run --rm --name tictactoecpp -it -v `sudo pwd`:/app tictactoecpp_sdk_img:1.0.0
