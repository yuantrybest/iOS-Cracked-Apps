//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISLRCReadBaseObject.h"

@class NSString;

@interface ISLRCReadLoveMessage : ISLRCReadBaseObject
{
    NSString *_love;
    NSString *_total_like;
    NSString *_bounes;
}

@property(copy, nonatomic) NSString *bounes; // @synthesize bounes=_bounes;
@property(copy, nonatomic) NSString *total_like; // @synthesize total_like=_total_like;
@property(copy, nonatomic) NSString *love; // @synthesize love=_love;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

