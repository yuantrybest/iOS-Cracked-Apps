//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, O2OMistBehaviourLog, O2OMistSpmLog;
@protocol O2OMistItemProtocol;

@interface O2OTemplateEvent : NSObject
{
    id <O2OMistItemProtocol> _item;
    id _params;
    NSString *_url;
    SEL _selector;
    O2OMistBehaviourLog *_log;
    O2OMistSpmLog *_spmLog;
    NSDictionary *_updateState;
    NSArray *_animations;
    _Bool _condition;
    NSString *_jsMethod;
}

+ (id)eventWithItem:(id)arg1 action:(id)arg2 defaultActionId:(id)arg3;
- (void).cxx_destruct;
- (id)parseMistAnimations:(id)arg1;
- (void)invokeWithSender:(id)arg1;
- (id)initWithItem:(id)arg1 action:(id)arg2 defaultActionId:(id)arg3;

@end

