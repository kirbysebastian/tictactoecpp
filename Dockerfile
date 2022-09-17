FROM alpine:3.14

RUN apk update
RUN apk add --no-cache build-base

RUN apk add --no-cache cmake vim

COPY . /app
WORKDIR /app
