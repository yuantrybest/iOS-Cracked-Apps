//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AVFSIndex : NSObject
{
    NSString *_property;
    unsigned long long _order;
}

+ (id)indexForProperty:(id)arg1 withOrder:(unsigned long long)arg2;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(copy, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;

@end
