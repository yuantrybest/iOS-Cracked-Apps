//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCPttMsgDBService;

@interface HCPttMessageLoader : NSObject
{
    HCPttMsgDBService *_dbService;
}

- (void).cxx_destruct;
- (void)checkNeedDownload:(id)arg1;
- (void)getPttMessagesFromNet:(long long)arg1 startSeq:(long long)arg2 count:(int)arg3 type:(int)arg4 completeBlock:(CDUnknownBlockType)arg5;
- (void)getOffLineMessages:(long long)arg1 Count:(int)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)getOffLineMessages:(long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)getOldMessage:(long long)arg1 Count:(int)arg2 startSeq:(long long)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (id)getCacheMessages:(long long)arg1 Count:(int)arg2;
- (id)initWithDbService:(id)arg1;
- (id)init;

@end

