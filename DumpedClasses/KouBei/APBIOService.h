//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AlisecBioAuthInfo;

@interface APBIOService : NSObject
{
    AlisecBioAuthInfo *_fpAuthInfo;
}

+ (id)shareInstance;
@property(retain, nonatomic) AlisecBioAuthInfo *fpAuthInfo; // @synthesize fpAuthInfo=_fpAuthInfo;
- (void).cxx_destruct;
- (void)applicationWillBecomeActive;
- (void)start;
- (id)init;

@end

