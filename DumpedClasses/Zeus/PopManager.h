//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PopManager : NSObject
{
    NSString *_lastSSID;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *lastSSID; // @synthesize lastSSID=_lastSSID;
- (void).cxx_destruct;
- (_Bool)isConnectTabSelected;
- (void)appBecomeActive;
- (void)toWiFiList:(id)arg1;
- (id)sharedInstance;

@end

