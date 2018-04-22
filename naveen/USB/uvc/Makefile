
uvcvideo-objs  := uvc_driver.o uvc_queue.o uvc_v4l2.o uvc_video.o uvc_ctrl.o \
	         uvc_status.o uvc_isight.o uvc_debugfs.o uvc_entity.o 

ARCH=x86
obj-m += uvcvideo.o
#INCDIR	+= -I./inclde/media/videobuf2-core.h -I$(src)/include/media/media -I$(src)drivers/media/ -I$(src)include/uapi/linux/usb/
#SRCDIR = -Iinclude/media/ -Imedia/

INC_DIR	+= -I$(src)./include/media/ 
#SRC_DIR = -I$(src)/include/media/ -I$(src)drivers/media/



all :
	make ARCH=$(ARCH) -C /lib/modules/$(shell uname -r)/build  $(INC_DIR)  M=$(PWD) modules
#	make -C /lib/modules/$(shell uname -r)/build   M=$(shell pwd) modules
		#   make -C /lib/modules/$(shell uname -r)/build  $(ccflags)  M=$(PWD) modules
clean:
	#make -C /lib/modules/$(shell uname -r)/build $(ccflags) M=$(PWD) clean
	make -C /lib/modules/$(shell uname -r)/build $(INC_DIR)  M=$(PWD) clean


