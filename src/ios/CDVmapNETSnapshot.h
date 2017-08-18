
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

#import "Cordova/CDV.h"


@interface CDVmapNETSnapshot : CDVPlugin

- (void) snapshot:(CDVInvokedUrlCommand*)command;
- (void) saveToPhotoGallery:(CDVInvokedUrlCommand*)command;

@end

typedef NS_ENUM(NSUInteger, MAPNET_IMAGE_ENCODING) {
    MAPNET_IMAGE_ENCODING_JPG=0,
    MAPNET_IMAGE_ENCODING_PNG
};



