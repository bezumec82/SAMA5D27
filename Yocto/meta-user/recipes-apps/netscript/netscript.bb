#
# This file is the netscript recipe.
#

DESCRIPTON = "Startup scripts"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

DEPENDS_append = " update-rc.d-native"
RDEPENDS_${PN} = "initd-functions"

SRC_URI = " file://netscript.sh \
          "

# Recipe revision - don't forget to 'bump' when a new revision is created !
PR = "r6"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

inherit allarch systemd
inherit update-rc.d

INITSCRIPT_NAME = "netscript.sh"
INITSCRIPT_PARAMS = "start 98 S ."

do_install() {
        install -d ${D}/${sysconfdir}/init.d
        install -d ${D}/${sysconfdir}/rc5.d
         
        install -m 0755 ${WORKDIR}/netscript.sh     ${D}/${sysconfdir}/init.d/netscript.sh
        ln -sf ../init.d/netscript.sh               ${D}/${sysconfdir}/rc5.d/S98netscript.sh
        
        update-rc.d -r ${D} netscript.sh start 98 S .     
}

FILES_${PN} += "${sysconfdir}/*"
