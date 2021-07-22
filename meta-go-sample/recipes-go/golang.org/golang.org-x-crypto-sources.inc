# Get the version by curl https://proxy.golang.org/golang.org/x/crypto/@latest
SRC_URI += "https://proxy.golang.org/golang.org/x/crypto/@v/v0.0.0-20210711020723-a769d52b0f97.zip;srcoutput=golang.org/x/crypto;srcinput=golang.org/x/crypto@v0.0.0-20210711020723-a769d52b0f97;downloadfilename=golang.org-x-crypto-0.0.0-20210711020723-a769d52b0f97.zip;name=golang.org-x-crypto"
SRC_URI[golang.org-x-crypto.sha256sum] = "b2b28fcf49bf385183f0369851145ddd93989f68d9e675db536a3dd482ca6d76"

GOSRC_LICENSE += "\
    BSD-3-Clause \
"
LIC_FILES_CHKSUM += "\
    file://src/golang.org/x/crypto/LICENSE;md5=5d4950ecb7b26d2c5e4e7b4e0dd74707 \
"

GOSRC_INCLUDEGUARD += "golang.org-x-crypto-sources.inc"
