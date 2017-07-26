//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVConfigUtil : NSObject
{
}

+ (void)downloadConfig:(id)arg1 withConfigName:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (id)getValidABT:(id)arg1;
+ (id)getConfigTarget;
+ (id)getConfigBaseURI;
+ (id)getOldConfigURLWithType:(long long)arg1;
+ (id)getConfigURLWithType:(long long)arg1 snapshotId:(id)arg2 snapshotN:(id)arg3;
+ (id)getEncodedAppVersion;
+ (void)writeConfigFile:(id)arg1 dict:(id)arg2;
+ (id)readConfigFile:(id)arg1;
+ (id)configFilePath:(id)arg1;
+ (_Bool)compareSnapshotN:(id)arg1 withSnapshot:(id)arg2 withInterval:(double)arg3;
+ (_Bool)compareVersion:(id)arg1 withOriginal:(id)arg2 ignoreTarget:(_Bool)arg3;

@end
