//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYResponseMessage.h"

@class NSArray, NSString;

@interface AdInfos : QYResponseMessage
{
    NSArray *_array_adinfo;
    NSString *_timestamp;
    NSString *_back_slotid;
}

@property(retain, nonatomic) NSString *back_slotid; // @synthesize back_slotid=_back_slotid;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSArray *array_adinfo; // @synthesize array_adinfo=_array_adinfo;
- (void).cxx_destruct;
- (id)description;

@end

