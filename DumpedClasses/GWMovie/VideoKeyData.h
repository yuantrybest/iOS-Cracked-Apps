//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface VideoKeyData : NSObject
{
    NSString *fileKey;
    NSString *shaKey;
    long long fileIdx;
    NSString *url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url;
@property(nonatomic) long long fileIdx; // @synthesize fileIdx;
@property(copy, nonatomic) NSString *shaKey; // @synthesize shaKey;
@property(copy, nonatomic) NSString *fileKey; // @synthesize fileKey;
- (void)dealloc;

@end

