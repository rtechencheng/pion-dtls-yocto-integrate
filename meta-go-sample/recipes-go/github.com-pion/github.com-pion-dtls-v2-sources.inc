# Get the version by curl https://proxy.golang.org/github.com/pion/dtls/v2/@latest
SRC_URI += "https://proxy.golang.org/github.com/pion/dtls/v2/@v/v2.0.9.zip;srcoutput=github.com/pion/dtls/v2;srcinput=github.com/pion/dtls/v2@v2.0.9;downloadfilename=github.com-pion-dtls-v2-v2.0.9.zip;name=github.com-pion-dtls-v2"
SRC_URI[github.com-pion-dtls-v2.sha256sum] = "a58ba34e96d5b2729e355dc987bc729a0c1296703a38cce15c8f3e23f17ffef5"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/pion/dtls/v2/LICENSE;md5=c25dca6f05d3d0d952c7fe9373c8b429 \
"

GOSRC_INCLUDEGUARD += "github.com-pion-dtls-v2-sources.inc"
