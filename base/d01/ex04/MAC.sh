#!/bin/sh
ifconfig | grep ether | cut -c 15-31 | head -n 5