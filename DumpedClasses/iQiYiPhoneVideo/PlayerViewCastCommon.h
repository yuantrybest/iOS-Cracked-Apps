//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PlayerViewCastCommon : NSObject
{
}

+ (id)transfromBit:(long long)arg1;
+ (id)getHistoryInfo:(id)arg1 videotype:(id)arg2 sourceid:(id)arg3;
+ (id)createAlbumByOfflineData:(id)arg1;
+ (id)createTvsetByOfflineData:(id)arg1;
+ (id)createAlbumByPumaData:(id)arg1;
+ (id)createTvsetByPumaData:(id)arg1;
+ (id)getCurSettingResValue;
+ (void)setVolumeLevel:(float)arg1;
+ (float)getVolumeLevel;
+ (id)getStandardTime:(long long)arg1;
+ (id)getMMSS:(long long)arg1;
+ (id)getHHMMSS:(long long)arg1;
+ (_Bool)isValidId:(id)arg1;

@end

