# Networked Chat Application with Encryption

## Overview

This project is a simple networked chat application that allows multiple clients to communicate securely via a central server. The server uses SSL/TLS encryption to ensure that all messages exchanged between clients are protected. This application demonstrates the use of C++ for networking, multithreading, and cryptography with the OpenSSL library.

## Features

- Secure communication using SSL/TLS
- Multithreading support to handle multiple clients concurrently
- Simple echo server functionality: received messages are echoed back to the sender

## Prerequisites

- C++ compiler (e.g., g++)
- OpenSSL development libraries
- A UNIX-based operating system (Linux or macOS)

## Installation

1. **Install OpenSSL**:
   - On macOS, you can install OpenSSL using Homebrew:
     ```bash
     brew install openssl
     ```
   - On Ubuntu, use:
     ```bash
     sudo apt-get install libssl-dev
     ```

2. **Clone the repository** (if hosted on GitHub or similar):
   ```bash
   git clone <repository-url>
   cd <repository-directory>
