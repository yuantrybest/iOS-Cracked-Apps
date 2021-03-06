//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface QQWechatMsgOptEngine : NSObject <IEngineDispatchDelegate>
{
    _Bool _wechatMsgOptCheckEnable;
    NSString *_wechatMsgWording;
    id _activeObserver;
    int _xo;
    unsigned int _wechatMsgOptCmdSeq;
}

+ (id)shareInstance;
- (void)notifyObserversWithSelector:(SEL)arg1 info:(id)arg2;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)updateWechatMsgOptStatus:(_Bool)arg1;
- (void)checkWechatMsgOptStatus;
- (void)removeActiveObserver:(id)arg1;
@property(nonatomic) id activeObserver; // @dynamic activeObserver;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool wechatMsgOptCheckEnable; // @dynamic wechatMsgOptCheckEnable;
@property(retain, nonatomic) NSString *wechatMsgWording; // @dynamic wechatMsgWording;

@end

