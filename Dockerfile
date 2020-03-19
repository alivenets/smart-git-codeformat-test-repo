FROM ubuntu:19.04

RUN apt-get update && apt-get upgrade -y
RUN apt-get install -y git cmake build-essential python3 python3-pip clang-format
RUN pip3 install cmake-format

ENTRYPOINT /bin/bash