# Get the version by curl https://proxy.golang.org/github.com/pion/logging/@latest
SRC_URI += "https://proxy.golang.org/github.com/pion/logging/@v/v0.2.2.zip;srcoutput=github.com/pion/logging;srcinput=github.com/pion/logging@v0.2.2;downloadfilename=github.com-pion-logging-v0.2.2.zip;name=github.com-pion-logging"
SRC_URI[github.com-pion-logging.sha256sum] = "9f164a498a38c120b5766a87a59f68aca91fbeed2d7c375ac8ca2a7e424936e4"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/pion/logging/LICENSE;md5=c25dca6f05d3d0d952c7fe9373c8b429 \
"

GOSRC_INCLUDEGUARD += "github.com-pion-logging-sources.inc"
