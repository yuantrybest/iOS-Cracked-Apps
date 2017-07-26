//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DatabaseItem.h"

@class NSString;

@interface PCCResourceItem : DatabaseItem
{
    NSString *_bid;
    NSString *_rid;
    NSString *_url;
    NSString *_md5;
}

+ (id)dbTypes;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(copy, nonatomic) NSString *bid; // @synthesize bid=_bid;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)dbIdentity;
- (id)description;

@end
