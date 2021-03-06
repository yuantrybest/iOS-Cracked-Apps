//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol AidProtocolDelegate;

@interface AidRequester : NSObject
{
    id <AidProtocolDelegate> mAidDelegate;
    NSString *mOldAid;
    NSString *mAppName;
}

+ (id)aidFromJson:(id)arg1 oldAid:(id)arg2;
+ (_Bool)isContainStr:(id)arg1 contain:(id)arg2;
+ (id)postUrl:(id)arg1 token:(id)arg2 utdid:(id)arg3 oldAid:(id)arg4;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)postRestAsync:(id)arg1 token:(id)arg2 utdid:(id)arg3 oldAid:(id)arg4 aidDelegate:(id)arg5;
- (id)postRest:(id)arg1 token:(id)arg2 utdid:(id)arg3 oldAid:(id)arg4;

@end

