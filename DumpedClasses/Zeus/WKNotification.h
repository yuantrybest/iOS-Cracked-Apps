//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WKNotification : NSObject
{
    _Bool _hasRead;
    int _cate;
    NSString *_abstracts;
    double _createDt;
    NSString *_hid;
    NSString *_img;
    NSString *_title;
    NSString *_url;
    NSDate *_createDate;
}

+ (id)notiWithAbstracts:(id)arg1 cate:(int)arg2 hid:(id)arg3 img:(id)arg4 title:(id)arg5 url:(id)arg6 createDt:(double)arg7 hasRead:(_Bool)arg8;
@property(nonatomic) _Bool hasRead; // @synthesize hasRead=_hasRead;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *hid; // @synthesize hid=_hid;
@property(nonatomic) double createDt; // @synthesize createDt=_createDt;
@property(nonatomic) int cate; // @synthesize cate=_cate;
@property(retain, nonatomic) NSString *abstracts; // @synthesize abstracts=_abstracts;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResModel:(id)arg1;

@end

