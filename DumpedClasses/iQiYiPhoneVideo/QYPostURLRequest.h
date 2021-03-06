//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYURLRequest.h"

@class NSData, NSDictionary, NSString;

@interface QYPostURLRequest : QYURLRequest
{
    NSDictionary *_formData;
    NSString *_contentType;
    NSData *_bodyData;
}

@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSDictionary *formData; // @synthesize formData=_formData;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 contentType:(id)arg2 httpBody:(id)arg3;
- (id)initWithURL:(id)arg1 formData:(id)arg2;

@end

