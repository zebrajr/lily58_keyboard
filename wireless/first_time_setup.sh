#!/bin/bash

# Clean previous setup
rm -rf storage/* build_output/*

# Create directory structure
mkdir -p storage/{zmk,zmk-config,zmk-modules/parent,zephyr,west,pip-cache} build_output

# Clone ZMK
git clone https://github.com/zmkfirmware/zmk.git storage/zmk

# Build with proper environment
export USER_ID=$(id -u)
export GROUP_ID=$(id -g)
docker-compose build
docker-compose run --rm zmk west init -l /workspaces/zmk/app
docker-compose run --rm zmk west update
docker-compose up
