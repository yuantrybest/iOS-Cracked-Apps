//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CardBizContext : NSObject
{
    NSMutableDictionary *_contactInfoStore;
}

+ (id)sharedCardBizContext;
@property(retain) NSMutableDictionary *contactInfoStore; // @synthesize contactInfoStore=_contactInfoStore;
- (void).cxx_destruct;
- (void)asyncQueryContactInfoWithUserIds:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end

