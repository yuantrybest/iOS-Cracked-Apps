//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SettingUpdateProtocal-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface VideoSetting : NSObject <SettingUpdateProtocal>
{
    _Bool _generateThumbnailFromVideo;
    _Bool _updateLocked;
    _Bool _isHDCaptureSupported;
    _Bool _isHDExportSupported;
    int _recordingOrientationDetectMode;
    int _bitrate4Export;
    int _fps;
    long long _orientation;
    NSDictionary *_videoSetting;
    NSDate *_lastUpdateDate;
    struct CGSize _size4Capture;
    struct CGSize _size4Export;
    struct CGSize _size4Picture;
}

+ (id)videoSetting;
@property(nonatomic) _Bool isHDExportSupported; // @synthesize isHDExportSupported=_isHDExportSupported;
@property(nonatomic) _Bool isHDCaptureSupported; // @synthesize isHDCaptureSupported=_isHDCaptureSupported;
@property(nonatomic) _Bool updateLocked; // @synthesize updateLocked=_updateLocked;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(retain, nonatomic) NSDictionary *videoSetting; // @synthesize videoSetting=_videoSetting;
@property(nonatomic) int fps; // @synthesize fps=_fps;
@property(nonatomic) struct CGSize size4Picture; // @synthesize size4Picture=_size4Picture;
@property(nonatomic) int bitrate4Export; // @synthesize bitrate4Export=_bitrate4Export;
@property(nonatomic) struct CGSize size4Export; // @synthesize size4Export=_size4Export;
@property(nonatomic) struct CGSize size4Capture; // @synthesize size4Capture=_size4Capture;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int recordingOrientationDetectMode; // @synthesize recordingOrientationDetectMode=_recordingOrientationDetectMode;
@property(nonatomic) _Bool generateThumbnailFromVideo; // @synthesize generateThumbnailFromVideo=_generateThumbnailFromVideo;
- (void).cxx_destruct;
- (struct CGSize)calc16PixelDimensionsSize:(struct CGSize)arg1;
- (_Bool)force16PixelDimensions;
- (struct CGSize)orientationFixedSizeWithWidth:(int)arg1 height:(int)arg2;
- (int)calcHeightWithWidth:(int)arg1;
- (id)minVersionToSupportHDExport;
- (void)checkHDExportSupport;
- (id)minVersionToSupportHDCapture;
- (void)checkHDCaptureSupport;
- (void)updateVideoSetting;
- (_Bool)needUpdateVideoSetting;
- (void)applicationWillEnterForeground;
- (void)onSettingUpdate;
- (void)unlockForUpdate;
- (void)lockForUpdate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

