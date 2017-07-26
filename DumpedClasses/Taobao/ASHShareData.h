//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIImage;

@interface ASHShareData : NSObject
{
    NSString *_title;
    NSString *_content;
    UIImage *_image;
    NSString *_imageURL;
    NSString *_linkURL;
    NSDictionary *_extendData;
}

@property(retain, nonatomic) NSDictionary *extendData; // @synthesize extendData=_extendData;
@property(retain, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)fillExtendDataWithModel:(id)arg1 vc:(id)arg2;

@end
