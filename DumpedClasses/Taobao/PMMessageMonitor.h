//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PMMessageMonitor : NSObject
{
    long long _mode;
}

+ (void)monitor:(long long)arg1 item:(id)arg2;
+ (void)dataError:(id)arg1 dataTag:(id)arg2 source:(long long)arg3 code:(long long)arg4;
+ (void)msgComplete:(id)arg1 code:(long long)arg2;
+ (long long)getFetchMode:(id)arg1 bizTag:(id)arg2;
+ (id)sharedInstance;
@property(nonatomic) long long mode; // @synthesize mode=_mode;

@end

